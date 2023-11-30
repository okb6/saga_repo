// general includes
#include <math.h>
#include <unistd.h>

#include "loki_can_devices/can_ctrl_pltf.h"
#include <unistd.h>
#include <sstream>
#include <assert.h>


//-----------------------------------------------

CanCtrlPltf::CanCtrlPltf()
{
}

//-----------------------------------------------
CanCtrlPltf::~CanCtrlPltf()
{
    for (auto p : motor_controllers_)
    {
        delete p;
    } 
    motor_controllers_.clear();   
}

bool
CanCtrlPltf::init_can(){
  return true;
}

void 
CanCtrlPltf::evalCanBuffer(std::vector<CanFrame>& can_msgs_base,
                           std::vector<CanFrame>& can_msgs_device)
{	
  bool b_ret;
  std::vector<CanFrame> can_msgs_r;
  can_line_->getReceivedMsgs(can_msgs_r);

  for (auto& msg : can_msgs_r)
  {
      b_ret = false;
      // check for every battery if message belongs to it
      for (auto& canBtr : batteries_)
      {
	if (b_ret)
	  break;
        b_ret |= canBtr->evalReceivedMsg(msg);
      }
      // check for every motor controller if message belongs to it
      for (auto& mtrCtr : motor_controllers_)
      {
	if (b_ret)
	  break;
        b_ret |= mtrCtr->evalReceivedMsg(msg);      
      }
      // check for every motor controller if message belongs to it
      for (auto& canIO : ios_)
      {
	if (b_ret)
	  break;
        b_ret |= canIO->evalReceivedMsg(msg);      
      }

      b_ret ? can_msgs_base.push_back(msg) : can_msgs_device.push_back(msg);
  }
}


void 
CanCtrlPltf::initMotorDrives(std::vector<std::map<std::string, double> >  motor_drives)
{
  number_of_motor_controllers_ = 0;
  auto _size = motor_drives.size();
  std::cout << "Assuming the following base hardware:" << std::endl;
  for (auto i = 0; i < _size; i++)
  {
    if (motor_drives.at(i)["type"] == 0)
    {
      std::cout << "  Roboteq FBL2360, prop/steer, node ID: " << motor_drives.at(i)["node"] << std::endl;
      motor_controllers_.push_back(new ::RoboteqFbl2360());
      auto _it = motor_controllers_.size() - 1;
      ((::RoboteqFbl2360*)motor_controllers_.at(_it))->setCanOpenParam(motor_drives.at(i)["node"]);
      ((::RoboteqFbl2360*)motor_controllers_.at(_it))->setControllerIndex(_it);
      ((::RoboteqFbl2360*)motor_controllers_.at(_it))->setDriveParams(0, motor_drives.at(i));
      motor_controllers_index_.push_back(i);
      number_of_motor_controllers_++;
    }
    else if (motor_drives.at(i)["type"] == 1 && (i < _size - 1))
    {
      if (motor_drives.at(i+1)["node"] == motor_drives.at(i)["node"] && motor_drives.at(i+1)["type"] == 1)
      {
        std::cout << "  Roboteq FBL2360, prop/prop, node ID: " << motor_drives.at(i)["node"] << std::endl;
        motor_controllers_.push_back(new ::RoboteqFbl2360Diff());
        auto _it = motor_controllers_.size() - 1;
        ((::RoboteqFbl2360Diff*)motor_controllers_.at(_it))->setCanOpenParam(motor_drives.at(i)["node"]);
        ((::RoboteqFbl2360Diff*)motor_controllers_.at(_it))->setChannelOneId(_it);
        ((::RoboteqFbl2360Diff*)motor_controllers_.at(_it))->setDriveParams(_it, motor_drives.at(i));    
        motor_controllers_index_.push_back(i);
      
        motor_controllers_.push_back(motor_controllers_[i]);
        _it++;
        ((::RoboteqFbl2360*)motor_controllers_.at(_it))->setDriveParams(_it, motor_drives.at(i+1));
        motor_controllers_index_.push_back(i+1);
        number_of_motor_controllers_++;
        i++;
      }
      else
      {
        std::cout << "Cannot create ::RoboteqFbl2360Diff. Drive 'type' and node 'node' must be the same for both channels" << std::endl;
      }      
    }
  }
}


void 
CanCtrlPltf::initBatteries(std::vector<std::map<std::string, double> >  batteries)
{
  batteries_.clear();
  for (auto& elem : batteries)
  {
    if (elem["type"] == 0)
    {
      std::cout << "  Empty battery enclosure" << std::endl;
    }
    else if (elem["type"] == 1)
    {

      int id = 0;
      if (elem.count("id") > 0)
      {
        id = elem["id"];
      }
      else if (elem.count("node") > 0)
      {
        std::cout << "  Battery parameter 'node' is depreciated and will not work in future versions. Use 'id' instead. Converting node to id.. ";
        id = elem["node"] - 344;
      }
      
      std::cout << "  KC Electronics, battery ID: " << id << std::endl;

      batteries_.push_back(new ::KCBattery());
      auto _it = batteries_.size() - 1;
      batteries_.at(_it)->setCanParam(id);
    }
    else
    {
      std::cout << "  UNKNOWN BATTERY TYPE" << std::endl;
    }     
  }
}


void
CanCtrlPltf::initIOs(std::vector<std::map<std::string, int> >  io_map)
{
  for (auto& elem : io_map)
  {
    if (elem["type"] == 0 || elem["type"] == 1)
    {
      int id = elem["id"];
      ios_.push_back(new ::V1PCB());
      std::vector<CanFrame> can_frames;
      auto _it = ios_.size() - 1;
      ios_.at(_it)->initIO(elem, can_frames);
      can_frames_tx_.insert(can_frames_tx_.end(), can_frames.begin(), can_frames.end());
      elem["type"] == 0 ? ios_.at(_it)->setName("Main enclosure PCB") : ios_.at(_it)->setName("Sister enclosure PCB");
      std::cout << "  V1PCB IO, IO CAN_ID: " << id << ", setup CAN frame added to send queue" << std::endl;
    }
    else if (elem["type"] == 2)
    {
      int id = elem["id"];
      ios_.push_back(new ::V1UV());
      std::vector<CanFrame> can_frames;
      auto _it = ios_.size() - 1;
      ios_.at(_it)->initIO(elem, can_frames);
      can_frames_tx_.insert(can_frames_tx_.end(), can_frames.begin(), can_frames.end());
      ios_.at(_it)->setName("UV PCB");
      std::cout << "  V1UV IO, IO CAN_ID: " << id << ", setup CAN frame added to send queue" << std::endl;
    }
  }
}


bool 
CanCtrlPltf::initPltf(int can_interface_type, std::string can_interface_name, 
                      std::vector<std::map<std::string, double> > drive_map, 
                      std::vector<std::map<std::string, double> > battery_map,
                      std::vector<std::map<std::string, int> > io_map)
{
    if (can_interface_type == CAN_ITF_NONE)
    {
      std::cout << "Uses NO CAN adapter" << std::endl;
      can_line_ = new CanLineDummy;
    }
    // else if (can_interface_type == CAN_ITF_ENC_V1REV6)
    // {
    //   std::cout << "Uses Thorvald Main Enc. PCB for CAN on port: " << can_interface_name << std::endl;
    //   can_line_ = new CanLineUSB;
    //   ((::CanLineUSB*)can_line_)->setPort(can_interface_name);
    // }
    // else if(can_interface_type == CAN_ITF_ENC_V2REV1)
    // {
    //   std::cout << "Uses Thorvald Main PCB V2 for CAN on port: " << can_interface_name << std::endl;
    //   can_line_ = new CanLineUSBv2;
    //   ((::CanLineUSBv2*)can_line_)->setPort(can_interface_name);
    // }
    else if (can_interface_type == CAN_ITF_SOCKETCAN)
    {
      std::cout << "Uses socketcan on interface: " << can_interface_name << std::endl;
      can_line_ = new CanLineSocketcan;
      ((::CanLineSocketcan*)can_line_)->setInterface(can_interface_name);
    }
    else
    {
      std::cout << "Unknown CAN adapter specified" << std::endl;
      return false;
    }
    if (can_line_->initialize())
    {
      can_line_->begin();
    }
    else
    {
      return false;
    }

    initMotorDrives(drive_map);
    initBatteries(battery_map);
    initIOs(io_map);

    return true;
}


void 
CanCtrlPltf::setParams(std::vector<std::map<std::string, double> > motor_drives)
{
  auto size = motor_controllers_.size();
  for (auto i = 0; i < size; i++)
  {
    auto ind = motor_controllers_index_.at(i);
    //assert(("index out of range", ind >= 0 && ind < motor_drives.size()));
    motor_controllers_.at(i)->setDriveParams(i, motor_drives.at(ind)); 
  }
}


void 
CanCtrlPltf::setDriveParams(int node_id, std::map<std::string, double> params)
{
  assert (("index out of range", (node_id > 0 && node_id <= motor_controllers_.size())));
  motor_controllers_.at(node_id-1)->setDriveParams(-1, params); 
}

//-----------------------------------------------
// Motor Controlers
//-----------------------------------------------


//-----------------------------------------------
// Set velocityfor the motors connected with Roboteq
// SDO: index: 2000h, sub-index 01 and 02: command GO in Roboteq

int 
CanCtrlPltf::getMotorControllerIndex(int can_id) //Start here
{
  auto size = motor_controllers_.size();
  for (int i = 0; i < size; i++)
  {
    if (getMotorControllerCanId(i) == can_id)
      return i;
  }
  return -1;
}


void 
CanCtrlPltf::setupMotorController(int can_id, int setup_id, int setup_value)
{
  auto index = getMotorControllerIndex(can_id);
  if (index >= 0 && index < motor_controllers_.size())
  {
    std::vector<CanFrame> msgs;
    motor_controllers_[index]->setupController(msgs, setup_id, setup_value);
    can_frames_tx_.insert(can_frames_tx_.end(), msgs.begin(), msgs.end());
  }
  else
  {
    std::cout <<"Index is not in the range of motor_controllers_" << std::endl;
  }
}


void 
CanCtrlPltf::sendCommandsToAllDrives(BaseState commands)
{
  std::vector<CanFrame> msgs;
  auto size = motor_controllers_.size();
  assert(("index out of range", commands.prop_speed.size() == size)); // check here to use vector[] (faster than .at()) and avoid UB 
  for (int i = 0; i < size; i++)
  {  
    std::vector<CanFrame> c_msgs;
    if (motor_controllers_[i]->sendDriveCommand(c_msgs, i, commands.prop_speed[i], commands.steer_pos[i], commands.steer_max_speed[i]))
    {
      msgs.insert(msgs.end(), c_msgs.begin(), c_msgs.end());
    }
    else
    {
      std::cout <<"Controller %d not ready to broadcast", i;
    }
  }


  msgs.insert(msgs.end(), can_frames_tx_.begin(), can_frames_tx_.end());
  can_frames_tx_.resize(0);


  can_line_->sendMsgs(msgs); 
}



int 
CanCtrlPltf::sendDeviceCommand(CanFrame can_frame)
{
  can_frames_tx_.push_back(can_frame);
  //CanMsg msg;
  //msg.m_iID  = can_frame.id;
  //msg.m_iLen = can_frame.length;

  //if (can_frame.getLength() != (int)can_frame.data.size())
  //{
  //  ROS_WARN("CAN device t frame data and length mismatch. %d != %d", can_frame.getLength(), (int)can_frame.data.size());
  //}
  //else
  //{
  //  for (int i=0; i<can_frame.length; i++)
  //  {
  //    msg.setAt(can_frame.data[i], i);
  //  }
    //can_ctrl_->transmitMsg(msg);
  //}
  return 0;
}


void 
CanCtrlPltf::simulateAllDrives(BaseState commands)
{
  auto size = motor_controllers_.size();
  for (int i = 0; i < size; i++)
  {
    motor_controllers_[i]->simulateDrive(i, commands.prop_speed[i], commands.steer_pos[i]); 
  }
}


int 
CanCtrlPltf::setCommand(int drive_index, int node_id, double speed, double position, double position_max_speed)
{
  // DOES THIS DO ANYHING NOW?
  std::vector<CanFrame> msgs;
  motor_controllers_[node_id-1]->sendDriveCommand(msgs, drive_index, speed, position, position_max_speed);  
  return 0;
}

void
CanCtrlPltf::setCurrentPosAsZeroAll()
{
  for (const auto& elem : motor_controllers_)
  {
      std::vector<CanFrame> msgs;
      elem->setCurrentPosAsZero(msgs);
      can_frames_tx_.insert(can_frames_tx_.end(), msgs.begin(), msgs.end());
  }
}

void 
CanCtrlPltf::setCurrentPosAsZero(int can_id)
{  
  int index = getMotorControllerIndex(can_id);
  if (index >= 0 && index < motor_controllers_.size()) //maybe an assert would be a good fit here, if it's not normal index to be out of range?
  {
    std::vector<CanFrame> msgs;
    motor_controllers_[index]->setCurrentPosAsZero(msgs);
    can_frames_tx_.insert(can_frames_tx_.end(), msgs.begin(), msgs.end());
  }
}


bool 
CanCtrlPltf::homeSteeringAll() // TODO: Check with Lars: elem->homeSteering() always returns true, can we make them void? 
{
  bool success = true;
  for (const auto& elem : motor_controllers_)
  {
    std::vector<CanFrame> msgs;
    success = success && elem->homeSteering(msgs); //&= bitwise and (although bool converts to 1 and 0, it's not right to use it for the logical and)
    can_frames_tx_.insert(can_frames_tx_.end(), msgs.begin(), msgs.end());
  }
  
  return success;
}


// bool 
// CanCtrlPltf::homeSteering(int can_id) // TODO: Check with Lars: Unused function
// {  
//   int index = getMotorControllerIndex(can_id);
//   if (index >= 0 && index < motor_controllers_.size())
//   {
//     std::vector<CanFrame> msgs;
//     motor_controllers_[index]->homeSteering(msgs);
//     can_frames_tx_.insert(can_frames_tx_.end(), msgs.begin(), msgs.end());
//     return true;
//   }
//   else
//   {
//     return false;
//   }
// }


void 
CanCtrlPltf::getAllBatteryVars(std::vector<CanBatteryItf::BatteryVars>& batt_array_in) // TODO: Check with Lars: Unused function
{
  for (const auto& elem : batteries_)
  {
    CanBatteryItf::BatteryVars current_battery_vars;
    elem->getBatteryData(current_battery_vars);
    batt_array_in.push_back(current_battery_vars);
  }
}

void
CanCtrlPltf::getSetBoolServices(std::map<int, std::string> &set_bool_map)
{
  set_bool_services_.clear();
  int unique_service_id = 0;
  for (int io_idx=0; io_idx<ios_.size(); io_idx++)
  {
    IOSetBool t_set_bool;
    std::map<int, std::string> t_set_bool_map;
    ios_[io_idx]->getSetBoolServices(t_set_bool_map);
    for (const auto& service : t_set_bool_map)
    {
      t_set_bool.io_idx = io_idx;
      t_set_bool.io_service_id = service.first;
      std::stringstream service_name;
      service_name << "io" << ios_[io_idx]->getID() << "_" << service.second;
      t_set_bool.service_name = service_name.str();
      set_bool_services_.insert({unique_service_id, t_set_bool});
      set_bool_map.insert({unique_service_id, t_set_bool.service_name});
      unique_service_id++;
    }
  }

}

void
CanCtrlPltf::callSetBoolService(int unique_service_id, bool value, bool &success, std::string &message)
{
  IOSetBool service = set_bool_services_[unique_service_id];
  std::vector<CanFrame> can_frames;
  ios_[service.io_idx]->callSetBoolService(can_frames, service.io_service_id, value, success, message);
  std::stringstream message_ss;
  message_ss << "Service called: " << service.service_name << ", message: " << message;
  message = message_ss.str();
  can_frames_tx_.insert(can_frames_tx_.end(), can_frames.begin(), can_frames.end());
}

int 
CanCtrlPltf::getMotorControllerCanId(int index)
{
  return motor_controllers_[index]->getCanId();
}


void 
CanCtrlPltf::getControllerArray(std::vector<CanDriveItf::ControllerVars>& controller_vars_out)
{
  CanDriveItf* prev_controller = NULL;
  for (auto& elem : motor_controllers_)
  {
    if (elem != prev_controller)
    {
      CanDriveItf::ControllerVars controller_vars_i;
      elem->getControllerVars(controller_vars_i);
      controller_vars_out.push_back(controller_vars_i);
    }
    prev_controller = elem;
  }
  assert(("vector size do not match", number_of_motor_controllers_ == controller_vars_out.size()));
}


void 
CanCtrlPltf::getBaseState(BaseState& base_state)
{
  auto size = motor_controllers_.size();
  if (base_state.prop_speed.size() != size)
  {
    base_state.prop_speed.resize(size);
    base_state.prop_pos.resize(size);
    base_state.steer_pos.resize(size);
  }
  for (auto i = 0; i < size; i++)
  {
      base_state.prop_speed[i] = motor_controllers_[i]->getPropulsionSpeed(i);
      base_state.prop_pos[i] = motor_controllers_[i]->getPropulsionPosition(i);
      base_state.steer_pos[i] = motor_controllers_[i]->getSteeringPosition(i);
  }
}


void 
CanCtrlPltf::getControllerSetupMap(int can_id, std::vector<std::string> &setup_map)
{  
  int index = getMotorControllerIndex(can_id);
  std::cout << "index: " << index << std::endl;
  if (index >= 0 && index < motor_controllers_.size())
    setup_map = motor_controllers_[index]->getControllerSetupMap();
  else
   std::cout <<"Index is not in the range of motor_controllers_ for map" <<std::endl;  
}

void
CanCtrlPltf::getIOStates(std::vector<CanIOItf::IOState> &io_states)
{
  for (auto io : ios_)
  {
    CanIOItf::IOState state;
    io->getState(state);
    io_states.push_back(state);
  }

}

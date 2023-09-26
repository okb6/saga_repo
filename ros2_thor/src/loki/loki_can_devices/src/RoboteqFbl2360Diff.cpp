#include <assert.h>
#include "loki_can_devices/RoboteqFbl2360Diff.h"
#include <unistd.h>
#include <angles/angles.h>
#include <cmath>
#include <map>







//-----------------------------------------------
RoboteqFbl2360Diff::RoboteqFbl2360Diff()
{

	// Variables
	node_id_ = -1;
	

    // Controller vars

    controller_vars_.name = "--";
    controller_vars_.type = "Roboteq fbl2360 prop/prop";
    controller_vars_.version = "?.?.?";
    controller_vars_.can_id = -1;
    controller_vars_.drive_direction = 0;
    controller_vars_.home_speed = 0;
    controller_vars_.home_count = 0;

    controller_vars_.controller_mode = MODE_PRE_INITIATION;
    controller_vars_.battery_volts = 0.0;
    controller_vars_.battery_amps = 0.0;
    controller_vars_.temps.resize(1);


    // Status flags
    
    controller_vars_.status_flags.resize(8);
    
    controller_vars_.status_flags[0].status_name = "prop. enc. fail";
    controller_vars_.status_flags[0].status_value = false;

    controller_vars_.status_flags[1].status_name = "steer. enc. fail";
    controller_vars_.status_flags[1].status_value = false;

    controller_vars_.status_flags[2].status_name = "alignment fail";
    controller_vars_.status_flags[2].status_value = false;

    controller_vars_.status_flags[3].status_name = "power stage off";
    controller_vars_.status_flags[3].status_value = false;

    controller_vars_.status_flags[4].status_name = "stall detected";
    controller_vars_.status_flags[4].status_value = false;

    controller_vars_.status_flags[5].status_name = "homing reached max count";
    controller_vars_.status_flags[5].status_value = false;

    controller_vars_.status_flags[6].status_name = "illegal command";
    controller_vars_.status_flags[6].status_value = false;

    controller_vars_.status_flags[7].status_name = "controller ok";
    controller_vars_.status_flags[7].status_value = true;

    
    controller_vars_.motor_vars.resize(2);
    
    controller_vars_.motor_vars[0].type = "propulsion";
    controller_vars_.motor_vars[0].speed = 0.0;
    controller_vars_.motor_vars[0].position = 0.0;
    controller_vars_.motor_vars[0].motor_amps = 0.0;
    controller_vars_.motor_vars[0].relative_power = 0;

    controller_vars_.motor_vars[1].type = "propulsion";
    controller_vars_.motor_vars[1].speed = 0.0;
    controller_vars_.motor_vars[1].position = 0.0;
    controller_vars_.motor_vars[1].motor_amps = 0.0;
    controller_vars_.motor_vars[1].relative_power = 0;


	
	
	// controller config
	drive_direction_ = 0;
	home_speed_ = 0;
	home_count_ = 0;
	
	// controller state
	controller_mode_= MODE_PRE_INITIATION;
	battery_volts_= 0;
	battery_amps_= 0;
	max_temp_= 0;
	status_flags_.resize(NUMBER_OF_STATUS_FLAGS,0);
	status_flags_old_ = 0;
	
	// motor 1 state
	m1_vel_ = 0;
	m1_pos_ = 0;
	m1_motor_amps_ = 0;
	//m1_battery_amps_ = 0;
	m1_relative_power_ = 0;
    m1_sim_command_received_ = false;
    m1_latest_sim_command_ = 0;
       	
	// motor 2 state
	m2_vel_ = 0;
	m2_pos_ = 0;
	m2_motor_amps_= 0;
	//m2_battery_amps_ = 0;
	m2_relative_power_ = 0;
    m2_sim_command_received_ = false;
    m2_latest_sim_command_ = 0;
	
	command_seq_ = 0;
	last_heartbeat_time_ = time(NULL);
	heartbeat_timeout_time_ = 2; // s


    drive_inverted_ = false;


	previous_simulation_timestep_ = rclcpp::Clock().now();  


}

void RoboteqFbl2360Diff::updateWheelPos(double speed_1, double speed_2, double dt)
{
  m1_pos_ +=  (speed_1 / m1_params_.radius_wheel) * dt;
  m2_pos_ +=  (speed_2 / m2_params_.radius_wheel) * dt;
}

void RoboteqFbl2360Diff::setDriveParams(int channel, std::map<std::string, double> param_map)
{

  if (channel == m1_id_)
  {
    std::cout << "setting ch1 params" << std::endl;
    name_ = param_map["name"];

    m1_params_.radius_wheel = param_map["r_wheel"];
    //std::cout << "radius_wheel:" << m1_params_.radius_wheel << std::endl;
    m1_params_.gear_ratio = param_map["prp_gr_rt"];
    //std::cout << "prop_gear:" << m1_params_.gear_ratio << std::endl;
    m1_params_.command_scaling_factor = 1000. / param_map["prp_max_rpm"];
    //std::cout << "prp_scale:" << m1_params_.command_scaling_factor << std::endl;
    m1_params_.sim_a = param_map["prp_sim_a"];
    //std::cout << "sim_a:" << m1_params_.sim_a << std::endl;
  }
  else if (channel == m2_id_)
  {
    std::cout << "setting ch2 params" << std::endl;
    m2_params_.radius_wheel = param_map["r_wheel"];
    //std::cout << "radius_wheel:" << m1_params_.radius_wheel << std::endl;
    m2_params_.gear_ratio = param_map["prp_gr_rt"];
    //std::cout << "prop_gear:" << m1_params_.gear_ratio << std::endl;
    m2_params_.command_scaling_factor = 1000. / param_map["prp_max_rpm"];
    //std::cout << "prp_scale:" << m1_params_.command_scaling_factor << std::endl;
    m2_params_.sim_a = param_map["prp_sim_a"];
    //std::cout << "sim_a:" << m1_params_.sim_a << std::endl;
  }
  else
  {
    std::cout << "unknow channel" << std::endl;
  }

}


const std::string RoboteqFbl2360Diff::CONTROLLER_SETUP_MAP[] =  { "print setup map",
							      "drive direction (permanent)",
							      "home count (permanent)",
							      "home speed (permanent)",
							      "max propulsion speed",
							      "max propulsion acceleration",
							      "max steering speed",
							      "max steering acceleration",
							      "tpdo1 cycle time",
							      "tpdo2 cycle time",
							      "tpdo3 cycle time",
							      "tpdo4 cycle time" };

//-----------------------------------------------


void RoboteqFbl2360Diff::setCanOpenParam(int node_id)
{
	node_id_ = node_id;

	can_headers_.iTxPDO1 = 0x180 + node_id_;
	can_headers_.iTxPDO2 = 0x280 + node_id_;
	can_headers_.iTxPDO3 = 0x380 + node_id_;
	can_headers_.iTxPDO4 = 0x480 + node_id_;
	
	can_headers_.iRxPDO1 = 0x200 + node_id_;
	can_headers_.iRxPDO2 = 0x300 + node_id_;
	can_headers_.iRxPDO3 = 0x400 + node_id_;
	can_headers_.iRxPDO4 = 0x500 + node_id_;
	
	can_headers_.heartbeat = 0x700 + node_id_;

	// SDO
	can_headers_.iTxSDO = 0x580 + node_id_;
	can_headers_.iRxSDO = 0x600 + node_id_;
	
	
	
}


//bool RoboteqFbl2360Diff::sendsHeartbeat()
//{
//  bool has_heartbeat;
//
//  time_t now_time = time(NULL);
//  double time_since_heartbeat = difftime(now_time, last_heartbeat_time_);
//
//  if (time_since_heartbeat > heartbeat_timeout_time_)
//    has_heartbeat = false;
//  else
//    has_heartbeat = true;
//
//  return has_heartbeat;
//
//}
//
//bool RoboteqFbl2360Diff::hasCommunicated()
//{
//  bool b_res;
//
//  if (controller_mode_ == MODE_PRE_INITIATION)
//    b_res = false;
//  else
//    b_res = true;
//
//  return b_res;
//}


void RoboteqFbl2360Diff::simulateDrive(int channel, double speed_command, double position_command, bool invert_as_needed)
{

  double dir = 0;
  if (position_command == 0)
    dir = 1;
  else if (fabs(position_command) > M_PI - 0.01)
    dir = -1;

  if (channel == m1_id_)
  {
    m1_latest_sim_command_ = speed_command * dir; //* (1 - 2 * (position_command == M_PI));
    m1_sim_command_received_ = true;
    //std::cout << "1 received: " << m1_latest_sim_command_ << std::endl;
  }
  else if (channel == m2_id_)
  {
    m2_latest_sim_command_ = speed_command * dir; // * (1 - 2 * (position_command == M_PI));
    m2_sim_command_received_ = true;
    //std::cout << "2 received: " << m2_latest_sim_command_ <<  std::endl;
  }

  if (m1_sim_command_received_ && m2_sim_command_received_)
  {
    //std::cout << "calculating" << std::endl;
    rclcpp::Time current_simulation_timestep = rclcpp::Clock().now();
    double dt = (current_simulation_timestep - previous_simulation_timestep_).seconds();
    if (dt > 0.5)
    {
      //std::cout << "timed out" << std::endl;
      dt = 0;
    }

    //std::cout << "DT" << dt << std::endl;



      
    // propulsion
    double error_prop_1 = (m1_latest_sim_command_ - m1_vel_);
    if (error_prop_1 != 0)
    {
      if (fabs(error_prop_1) < m1_params_.sim_a * dt)
      {
        m1_vel_ = m1_latest_sim_command_;
      }
      else
      {
        m1_vel_ += m1_params_.sim_a * dt * (error_prop_1/fabs(error_prop_1));
      }
    }
    
    double error_prop_2 = (m2_latest_sim_command_ - m2_vel_);
    if (error_prop_2 != 0)
    {
      if (fabs(error_prop_2) < m2_params_.sim_a * dt)
      {
        m2_vel_ = m2_latest_sim_command_;
      }
      else
      {
        m2_vel_ += m2_params_.sim_a * dt * (error_prop_2/fabs(error_prop_2));
      }
    }

    updateWheelPos(m1_vel_, m2_vel_, dt);

    m1_sim_command_received_ = false;
    m2_sim_command_received_ = false;
    previous_simulation_timestep_ = current_simulation_timestep;
  }
  //std::cout << "sim" << node_id_ << "finished" << std::endl;
}


bool RoboteqFbl2360Diff::evalReceivedMsg(CanFrame& msg)
{
  bool b_ret = false;

  //last_can_msg_ = msg;

  int temp_data1, temp_data2, temp_data3, temp_data4;


  if (msg.getId() == can_headers_.heartbeat)
  {
    last_heartbeat_time_ = time(NULL);
  }

  //-----------------------
  // eval answers from PDO1
  if (msg.getId() == can_headers_.iTxPDO1)
  {
    //test
    rclcpp::Time current_simulation_timestep = rclcpp::Clock().now();
    double dt = (current_simulation_timestep - previous_simulation_timestep_).seconds();
    if (dt > 0.5)
    {
      //std::cout << "timed out" << std::endl;
      dt = 0;
    }
    //test

    temp_data1 = (msg.getByte(1) << 8) | (msg.getByte(0) );

    m1_vel_ = (double)((short)temp_data1) / (m1_params_.gear_ratio) * M_PI/30. * m1_params_.radius_wheel; // * (1. - 2. * drive_inverted_);
    //std::cout << "wheel speed " << node_id_ << ": " << m1_vel_ << std::endl;
    

    temp_data2 = (msg.getByte(3) << 8) | (msg.getByte(2) );

    ///m2_vel_ = (short)temp_data2;

    temp_data3 = (msg.getByte(7) << 24) | (msg.getByte(6) << 16)
		    | (msg.getByte(5) << 8) | (msg.getByte(4) );

    //m2_pos_ = (double)temp_data3 / (m2_params_.encoder_ppr * 4. * m2_params_.gear_ratio) * 2. * M_PI; 
    m2_vel_ = (double)((short)temp_data3) / (m2_params_.gear_ratio) * M_PI/30. * m2_params_.radius_wheel; // * (1. - 2. * drive_inverted_);
    
    updateWheelPos(m1_vel_, m2_vel_, dt); // test
    previous_simulation_timestep_ = current_simulation_timestep; //test

    b_ret = true;
  }

  //-----------------------
  // eval answers from PDO2
  else if (msg.getId() == can_headers_.iTxPDO2)
  {

    temp_data1 = (msg.getByte(1) << 8) | (msg.getByte(0) );

    temp_data2 = (msg.getByte(3) << 8) | (msg.getByte(2) );

    temp_data3 = (msg.getByte(5) << 8) | (msg.getByte(4) );

    temp_data4 = (msg.getByte(7) << 8) | (msg.getByte(6) );

    m1_motor_amps_ = (short)temp_data1 / 10.;
    //std::cout << "tpdo2_m1_amps: " << m1_motor_amps_ << "  ";

    m2_motor_amps_ = (short)temp_data2 / 10.;
    //std::cout << "tpdo2_m2_amps: " << m2_motor_amps_ << std::endl;

    m1_relative_power_ = (short)temp_data3;
    //std::cout << "tpdo2_m1_power: " << m1_relative_power_ << "  ";

    m2_relative_power_ = (short)temp_data4;
    //std::cout << "tpdo2_m2_power: " << m2_relative_power_ << std::endl;


    b_ret = true;
  }

  //-----------------------
  // eval answers from PDO3
  else if (msg.getId() == can_headers_.iTxPDO3)
  {

    temp_data1 = (msg.getByte(0) );

    // temp_data2 = (msg.getAt(1) );

    temp_data2 = (msg.getByte(3) << 8) | (msg.getByte(2) );

    temp_data3 = (msg.getByte(5) << 8) | (msg.getByte(4) );

    temp_data4 = (msg.getByte(7) << 8) | (msg.getByte(6) );


    char flags_char = (signed char)temp_data1;
    max_temp_ = (short)temp_data2;
    battery_amps_ = (short)temp_data3 / 10.;
    battery_volts_ = (short)temp_data4 / 10.;

    for (int i=0; i<NUMBER_OF_STATUS_FLAGS; i++)
    {
      bool current_flag = flags_char & 0b10000000;
      status_flags_[i] = current_flag;
      flags_char = flags_char << 1;
    }

    b_ret = true;
  }

  //-----------------------
  // eval answers from PDO4
  else if (msg.getId() == can_headers_.iTxPDO4)
  {

    temp_data1 = (msg.getByte(0) );

    temp_data2 = (msg.getByte(1) );

    temp_data3 = (msg.getByte(3) << 8) | (msg.getByte(2) );

    temp_data4 = (msg.getByte(7) << 24) | (msg.getByte(6) << 16)
	       | (msg.getByte(5) << 8) | (msg.getByte(4) );


    controller_mode_ = (signed char)temp_data1;
    drive_direction_ = (signed char)temp_data2;
    home_speed_ = (short)temp_data3;
    home_count_ = temp_data4;




    b_ret = true;
  }

  if (msg.getId() == can_headers_.iTxSDO)
  {
    std::cout << "SDO received, ID: " << msg.getId() << std::endl;
    b_ret = true;
  }



  return b_ret;
}


//-----------------------------------------------
//NOT USED
void RoboteqFbl2360Diff::sendHeartbeat()
{
 // CanMsg msg;
 // msg.getId()  = 0x700;
 // msg.m_iLen = 5;
 // msg.set(0x00,0,0,0,0,0,0,0);
 // can_ctrl_->transmitMsg(msg);
}


void 
RoboteqFbl2360Diff::setCurrentPosAsZero(std::vector<CanFrame>& msgs)
{
  int pos_counts =m2_pos_ * ( m2_params_.encoder_ppr * 4. * m2_params_.gear_ratio) / (2. * M_PI); 
  int t_home_count = home_count_ - pos_counts;
  setupController(msgs, 2, t_home_count);
}

//-----------------------------------------------0x9c 0xff
void RoboteqFbl2360Diff::setupController(std::vector<CanFrame>& msgs, int setup_id, int setup_value)
{
  /// WIP
  sendPDOdownload(can_headers_.iRxPDO2, setup_id, setup_value);

}


//-----------------------------------------------
bool RoboteqFbl2360Diff::sendDriveCommand(std::vector<CanFrame>& msgs, int channel, double speed, double position, double position_max_speed, bool invert_as_needed)
{

  //std::cout << "speed:" << speed << std::endl;

  double dir = 0;
  if (position == 0)
    dir = 1;
  else if (fabs(position) > M_PI - 0.01)
    dir = -1;


  if (channel == m1_id_)
  {
    //std::cout << "ch1" << std::endl;   
    m1_latest_command_ = speed * dir;
    m1_command_received_ = true;
    //std::cout << "1 received: " << m1_latest_sim_command_ << std::endl;
  }
  else if (channel == m2_id_)
  {
    //std::cout << "ch2" << std::endl;   
    m2_latest_command_ = speed * dir;
    m2_command_received_ = true;
    //std::cout << "2 received: " << m2_latest_sim_command_ <<  std::endl;
  }

  if (m1_command_received_ && m2_command_received_)
  {


    //std::cout << "speed:" << speed << ",rad_wheel:" << m1_params_.radius_wheel << ", gear_ratio:" << m1_params_.gear_ratio << ", scale:" << m1_params_.command_scaling_factor << std::endl;
    int speed_command_1 = (m1_latest_command_ / m1_params_.radius_wheel) * m1_params_.gear_ratio * (30./M_PI) * m1_params_.command_scaling_factor; // RPM/3  M_PI*0.20/(42*30);
    int speed_command_2 = (m2_latest_command_ / m2_params_.radius_wheel) * m2_params_.gear_ratio * (30./M_PI) * m2_params_.command_scaling_factor; // RPM/3  M_PI*0.20/(42*30);
    //int position_command = 1000. * position / m2_params_.position_limit; //// * m2_params_.encoder_ppr * 4 * m2_params_.gear_ratio / (2 * M_PI);
    //int position_max_speed_command = position_max_speed * m2_params_.encoder_ppr * 4 * m2_params_.gear_ratio / (2 * M_PI);


    //std::cout << "node:" << node_id_ << ", speed:" << speed_command << ", position:" <<  position_command << ", pos_max_speed:" << position_max_speed << std::endl;
    //std::cout << "node:" << node_id_ << "m1:" << speed_command_1 << "m2:" << speed_command_2 << std::endl;
    sendPDOdownload(can_headers_.iRxPDO1, command_seq_, speed_command_1);
    //std::cout << "pms: " << position_max_speed << ", p: " << position << std::endl;
    sendPDOdownload(can_headers_.iRxPDO4, command_seq_, speed_command_2);

    command_seq_++;
  }
}

//-----------------------------------------------
//void RoboteqFbl2360Diff::sendDiffDriveCommand(int speed_1, int speed_2)
//{

//  sendPDOdownload(can_headers_.iRxPDO1, command_seq_, speed_1);
//  sendPDOdownload(can_headers_.iRxPDO4, command_seq_, speed_2);
  //sendPDOdownload(can_headers_.iRxPDO4, command_seq_, position);
 // std::cout << "pms: " << position_max_speed << ", p: " << position << std::endl;
  //sendPDOdownload(can_headers_.iRxPDO4, position_max_speed, position);

//  command_seq_++;
//}

//-----------------------------------------------
void RoboteqFbl2360Diff::driveMode()
{
  sendModeCommand(MODE_DRIVE);
}


//-----------------------------------------------
bool RoboteqFbl2360Diff::homeSteering(std::vector<CanFrame>& msgs)
{
  //homing = true;
  sendModeCommand(MODE_HOME);
  return true;
}

//-----------------------------------------------
void RoboteqFbl2360Diff::decouple()
{
  sendModeCommand(MODE_DECOUPLED);
}


//-----------------------------------------------
void RoboteqFbl2360Diff::sendModeCommand(int mode)
{
  std::cout << "Sending mode: %d" << mode << std::endl;
  sendPDOdownload(can_headers_.iRxPDO3, mode, mode);
}

/**
* Set acceleration
*/
void RoboteqFbl2360Diff::sendAccelerationSDO(int channel, int value)
{
  if (channel == 1)
  {
      sendSDODownload(0x2006, 0x01, value);
  }
  else if (channel == 2)
  {
      sendSDODownload(0x2006, 0x02, value);
  }
  else
  {
      std::cout << "Invalid channel. SDO not sent." << std::endl;
  }
		
}

/**
* Set deceleration
*/
void RoboteqFbl2360Diff::sendDecelerationSDO(int channel, int value)
{
  if (channel == 1)
  {
    sendSDODownload(0x2007, 0x01, value);
  }
  else if (channel == 2)
  {
    sendSDODownload(0x2007, 0x02, value);
  }
  else
  {
    std::cout << "Invalid channel. SDO not sent." << std::endl;
  }
		
}

//-----------------------------------------------
// PDO Communication Protocol
//-----------------------------------------------
//-----------------------------------------------
void RoboteqFbl2360Diff::sendPDOdownload(int pdoNum, int iData1, int iData2)
{

	
//  char cInt1[4];
//  char cInt2[4];
//  CanMsg CMsgTr;
//  CMsgTr.m_iType = 0;
//
//
//  CMsgTr.id = pdoNum;
//
//
//
//  CMsgTr.m_iLen = 8;
//
//  cInt1[0] = iData1;
//  cInt1[1] = iData1 >> 8;
//  cInt1[2] = iData1 >> 16;
//  cInt1[3] = iData1 >> 24;
//
//  cInt2[0] = iData2;
//  cInt2[1] = iData2 >> 8;
//  cInt2[2] = iData2 >> 16;
//  cInt2[3] = iData2 >> 24;
//
//  CMsgTr.set(cInt1[0], cInt1[1], cInt1[2], cInt1[3], cInt2[0], cInt2[1], cInt2[2], cInt2[3]);
//  can_ctrl_->transmitMsg(CMsgTr, true);
}

void RoboteqFbl2360Diff::sendPDOdownload(int pdoNum, int iData1, int iData2, int iData3, int iData4)
{

	
  //char cInt1[2];
  //char cInt2[2];
  //char cInt3[2];
  //char cInt4[2];

  //CanMsg CMsgTr;
  //CMsgTr.m_iType = 0;

  //CMsgTr.id = pdoNum;




  //CMsgTr.m_iLen = 8;

  //cInt1[0] = iData1;
  //cInt1[1] = iData1 >> 8;

  //cInt2[0] = iData2;
  //cInt2[1] = iData2 >> 8;

  //cInt3[0] = iData3;
  //cInt3[1] = iData3 >> 8;

  //cInt4[0] = iData4;
  //cInt4[1] = iData4 >> 8;

  //CMsgTr.set(cInt1[0], cInt1[1], cInt2[0], cInt2[1], cInt3[0], cInt3[1], cInt4[0], cInt4[1]);
  //can_ctrl_->transmitMsg(CMsgTr);
}



//-----------------------------------------------
// SDO Communication Protocol, most functions are used for general SDO Segmented Transfer
/*  Byte 0: CMD; Byte 1-2: Index; Byte 3: Sub-Index; Byte 4-7: Data
    CMD determines the direction of data transfer and the size of the data object:
		23 hex Sending of 4-byte data (bytes 4...7 contain a 32-bit value)
		2B hex Sending of 2-byte data (bytes 4, 5 contain a 16-bit value)
		2F hex Sending of 1-byte data (byte 4 contains an 8-bit value)
    Index 16-bit value; index of the object to be written into (in the object dictionary)
    Sub-Index 8-bit value; sub-index of the object to be written into (in the object dictionary)
    Data 8-bit, 16-bit, or 32-bit value*/
//-----------------------------------------------

//-----------------------------------------------
void RoboteqFbl2360Diff::sendSDOAbort(int iObjIndex, int iObjSubIndex, unsigned int iErrorCode)
{
  //CanMsg CMsgTr;
  //const int ciAbortTransferReq = 0x04 << 5;

  //CMsgTr.m_iLen = 8;
  //CMsgTr.id =can_headers_.iRxSDO;

  //unsigned char cMsg[8];

  //cMsg[0] = ciAbortTransferReq;
  //cMsg[1] = iObjIndex;
  //cMsg[2] = iObjIndex >> 8;
  //cMsg[3] = iObjSubIndex;
  //cMsg[4] = iErrorCode;
  //cMsg[5] = iErrorCode >> 8;
  //cMsg[6] = iErrorCode >> 16;
  //cMsg[7] = iErrorCode >> 24;

  //CMsgTr.set(cMsg[0], cMsg[1], cMsg[2], cMsg[3], cMsg[4], cMsg[5], cMsg[6], cMsg[7]);
  //can_ctrl_->transmitMsg(CMsgTr);

}

void RoboteqFbl2360Diff::setChannelOneId(int id)
{
  m1_id_ = id;
  m2_id_ = id + 1;
}

//-----------------------------------------------
void RoboteqFbl2360Diff::sendSDODownload(int iObjIndex, int iObjSubIndex, int iData)
{
//  CanMsg CMsgTr;
//
//  const int ciInitDownloadReq = 0x20;
//  const int ciNrBytesNoData = 0x00;
//  const int ciExpedited = 0x02;
//  const int ciDataSizeInd = 0x01;
//
//  CMsgTr.m_iLen = 8;
//  CMsgTr.id =can_headers_.iRxSDO;
//  //std::cout << "SDO = " <<can_headers_.iRxSDO <<std::endl;
//
//  unsigned char cMsg[8];
//
//  cMsg[0] = ciInitDownloadReq | (ciNrBytesNoData << 2) | ciExpedited | ciDataSizeInd;
//  cMsg[1] = iObjIndex;
//  cMsg[2] = iObjIndex >> 8;
//  cMsg[3] = iObjSubIndex;
//  cMsg[4] = iData;
//  cMsg[5] = iData >> 8;
//  cMsg[6] = iData >> 16;
//  cMsg[7] = iData >> 24;
//
//  CMsgTr.set(cMsg[0], cMsg[1], cMsg[2], cMsg[3], cMsg[4], cMsg[5], cMsg[6], cMsg[7]);
//  can_ctrl_->transmitMsg(CMsgTr);
//  //std::cout << "Message = " <<  static_cast<unsigned>(cMsg[0])  << " " <<  static_cast<unsigned>(cMsg[1])  << " " << static_cast<unsigned>(cMsg[2])  << " " << static_cast<unsigned>(cMsg[3]) << " "  << static_cast<unsigned>(cMsg[4])  << " " <<  static_cast<unsigned>(cMsg[5])  << " " << static_cast<unsigned>(cMsg[6])  << " " << static_cast<unsigned>(cMsg[7])  <<std::endl;
}

//-----------------------------------------------
void RoboteqFbl2360Diff::sendSDOUpload(int iObjIndex, int iObjSubIndex)
{
  //CanMsg CMsgTr;
  //const int ciInitUploadReq = 0x40;

  //CMsgTr.m_iLen = 8;
  //CMsgTr.id =can_headers_.iRxSDO;

  //unsigned char cMsg[8];

  //cMsg[0] = ciInitUploadReq;
  //cMsg[1] = iObjIndex;
  //cMsg[2] = iObjIndex >> 8;
  //cMsg[3] = iObjSubIndex;
  //cMsg[4] = 0x00;
  //cMsg[5] = 0x00;
  //cMsg[6] = 0x00;
  //cMsg[7] = 0x00;

  //CMsgTr.set(cMsg[0], cMsg[1], cMsg[2], cMsg[3], cMsg[4], cMsg[5], cMsg[6], cMsg[7]);
  //can_ctrl_->transmitMsg(CMsgTr);
}



// Controller config

void RoboteqFbl2360Diff::getControllerVars(ControllerVars& controller_vars)
{
 1+1;
}

std::string RoboteqFbl2360Diff::getName()
{
  return name_;
}

int RoboteqFbl2360Diff::getCanId()
{
  return node_id_;
}

int RoboteqFbl2360Diff::getDriveDirection()
{
  return drive_direction_;
}

int RoboteqFbl2360Diff::getHomeSpeed()
{
  return home_speed_;
}

int RoboteqFbl2360Diff::getHomeCount()
{
  return home_count_;
}



// controller status

int RoboteqFbl2360Diff::getControllerMode()
{
  if (controller_mode_ != MODE_PRE_INITIATION)
  {
    time_t now_time = time(NULL);
    double time_since_heartbeat = difftime(now_time, last_heartbeat_time_);

    if (time_since_heartbeat > heartbeat_timeout_time_)
    {
      controller_mode_ = MODE_LOST_CONNECTION;
    }
  
  }
  return controller_mode_;
}

double RoboteqFbl2360Diff::getBatteryVolts()
{
  return battery_volts_;
}

double RoboteqFbl2360Diff::getBatteryAmps()
{
  return battery_amps_;
}

int RoboteqFbl2360Diff::getMaxTemp()
{
  return max_temp_;
}

std::vector<unsigned char> RoboteqFbl2360Diff::getStatusFlags()
{
  return status_flags_;
}

bool RoboteqFbl2360Diff::hasIndex(int index)
{
  bool t_ret = false;

  if (index == m1_id_)
    t_ret = true;
  else if (index == m2_id_)
    t_ret = true;

  return t_ret;

}

// propulsion status

double RoboteqFbl2360Diff::getSpeed(int channel)
{
  if (channel == m1_id_)
    return m1_vel_;
  else if (channel == m2_id_)
    return m2_vel_;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;

  }
}

double RoboteqFbl2360Diff::getPosition(int channel)
{
  if (channel == m1_id_)
    return m1_pos_;
  else if (channel == m2_id_)
    return m2_pos_;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;
  }
}

double RoboteqFbl2360Diff::getMotorAmps(int channel)
{
  if (channel == m1_id_)
    return m1_motor_amps_;
  else if (channel == m2_id_)
    return m2_motor_amps_;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;
  }
}

//int RoboteqFbl2360Diff::getPropulsionBatteryAmps()
//{
//	return m1_battery_amps_;
//}

int RoboteqFbl2360Diff::getRelativePower(int channel)
{
  if (channel == m1_id_)
    return m1_relative_power_;
  else if (channel == m2_id_)
    return m2_relative_power_;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;
  }
}


double RoboteqFbl2360Diff::getPropulsionSpeed(int channel)
{
  double t_speed = 0;

  if (channel == m1_id_)
    t_speed = m1_vel_;
  else if (channel == m2_id_)
    t_speed = m2_vel_;

  return t_speed;

}
double RoboteqFbl2360Diff::getPropulsionPosition(int channel)
{
  return getPosition(channel);
}
// steering status

//int RoboteqFbl2360Diff::getSteeringSpeed()
//{
//  return m2_vel_;
//}

double RoboteqFbl2360Diff::getSteeringPosition(int channel)
{
  return 0.;
}

double RoboteqFbl2360Diff::getSteeringMotorAmps()
{
  return m2_motor_amps_;
}

//int RoboteqFbl2360Diff::getSteeringBatteryAmps()
//{
//	return m2_battery_amps_;
//}

int RoboteqFbl2360Diff::getSteeringRelativePower()
{
  return m2_relative_power_;
}

std::vector<std::string> RoboteqFbl2360Diff::getControllerSetupMap()
{
  std::vector<std::string> r_vector(CONTROLLER_SETUP_MAP,
				    CONTROLLER_SETUP_MAP +  sizeof CONTROLLER_SETUP_MAP / sizeof CONTROLLER_SETUP_MAP[0]);

  return r_vector;
}



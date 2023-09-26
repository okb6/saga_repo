#include <assert.h>
#include "loki_can_devices/RoboteqFbl2360.h"
#include <unistd.h>
#include <angles/angles.h>
#include <cmath>
#include <map>







//-----------------------------------------------
RoboteqFbl2360::RoboteqFbl2360()
{
	//std::cout << "Roboteq2360 constructor" << std::endl;

	// Variables
	//can_ctrl_ = NULL;
	controller_vars_.can_id = -1;
	
	//MODE_DRIVE = MODE_DRIVE;
	//MODE_HOME = 1;
	//MODE_DECOUPLED = 2;
	//MODE_PRE_INITIATION = -99;

    
    // Controller vars

    controller_vars_.name = "--";
    controller_vars_.type = "Roboteq fbl2360 prop/steer";
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

    controller_vars_.status_flags[7].status_name = "controller not ok";
    controller_vars_.status_flags[7].status_value = false;

    
    controller_vars_.motor_vars.resize(2);
    
    controller_vars_.motor_vars[0].type = "propulsion";
    controller_vars_.motor_vars[0].speed = 0.0;
    controller_vars_.motor_vars[0].position = 0.0;
    controller_vars_.motor_vars[0].motor_amps = 0.0;
    controller_vars_.motor_vars[0].relative_power = 0;

    controller_vars_.motor_vars[1].type = "steering";
    controller_vars_.motor_vars[1].speed = 0.0;
    controller_vars_.motor_vars[1].position = 0.0;
    controller_vars_.motor_vars[1].motor_amps = 0.0;
    controller_vars_.motor_vars[1].relative_power = 0;
    

	//homing = false;
	
	
	// controller config
	//controller_vars_.drive_direction = 0;
	//controller_vars_.home_speed = 0;
	//controller_vars_.home_count = 0;
	
	// controller state
	// controller_vars_.controller_mode= MODE_PRE_INITIATION;
	// controller_vars_.battery_volts= 0;
	// controller_vars_.battery_amps= 0;
	// max_temp_= 0;
	// status_flags_.resize(NUMBER_OF_STATUS_FLAGS,0);
	
	// motor 1 state
	//controller_vars_.motor_vars[0].speed = 0;
	//controller_vars_.motor_vars[0].position = 0;
	//controller_vars_.motor_vars[0].motor_amps = 0;
	////m1_controller_vars_.battery_amps = 0;
	//controller_vars_.motor_vars[0].relative_power = 0;
	
	// motor 2 state
	//controller_vars_.motor_vars[1].speed = 0;
	//controller_vars_.motor_vars[1].position = 0;
	//controller_vars_.motor_vars[1].motor_amps= 0;
	//m2_controller_vars_.battery_amps = 0;
	//controller_vars_.motor_vars[1].relative_power = 0;
	
	command_seq_ = 0;
	last_heartbeat_time_ = time(NULL);
	heartbeat_timeout_time_ = 2; // s


    drive_inverted_ = false;

    type_verified_ = false;
    //script_version_ = "?.?.?";

	previous_simulation_timestep_ = rclcpp::Clock().now();  


}

void RoboteqFbl2360::updateWheelPos(double speed, double dt)
{
  controller_vars_.motor_vars[0].position +=  (speed / m1_params_.radius_wheel) * dt;
}



void RoboteqFbl2360::setDriveParams(int channel, std::map<std::string, double> param_map)
{

  //name_ = param_map["name"];

  m1_params_.radius_wheel = param_map["r_wheel"];
  //std::cout << "radius_wheel:" << m1_params_.radius_wheel << std::endl;
  m1_params_.gear_ratio = param_map["prp_gr_rt"];
  //std::cout << "prop_gear:" << m1_params_.gear_ratio << std::endl;
  m1_params_.command_scaling_factor = 1000. / param_map["prp_max_rpm"];
  //std::cout << "prp_scale:" << m1_params_.command_scaling_factor << std::endl;
  m1_params_.sim_a = param_map["prp_sim_a"];
  //std::cout << "sim_a:" << m1_params_.sim_a << std::endl;

  m2_params_.gear_ratio = param_map["str_gr_rt"];
  //std::cout << "5 ";
  m2_params_.encoder_ppr = param_map["str_enc_ppr"];
  //m1_params_.encoder_ppr = 0;
  //m2_params_.encoder_ppr = 0;
  //std::cout << "6 ";
  m2_params_.position_limit = param_map["str_lim"];
  //std::cout << "7 " << std::endl;
  m2_params_.sim_v = param_map["str_sim_v"];
  //std::cout << "sim_v:" << m2_params_.sim_v << std::endl;
  //
  //

}


const std::string RoboteqFbl2360::CONTROLLER_SETUP_MAP[] =  { "print setup map",
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


void RoboteqFbl2360::setCanOpenParam(int node_id)
{
	controller_vars_.can_id = node_id;

	can_headers_.iTxPDO1 = 0x180 + node_id;
	can_headers_.iTxPDO2 = 0x280 + node_id;
	can_headers_.iTxPDO3 = 0x380 + node_id;
	can_headers_.iTxPDO4 = 0x480 + node_id;
	
	can_headers_.iRxPDO1 = 0x200 + node_id;
	can_headers_.iRxPDO2 = 0x300 + node_id;
	can_headers_.iRxPDO3 = 0x400 + node_id;
	can_headers_.iRxPDO4 = 0x500 + node_id;
	
	can_headers_.heartbeat = 0x700 + node_id;

	// SDO
	can_headers_.iTxSDO = 0x580 + node_id;
	can_headers_.iRxSDO = 0x600 + node_id;
	
	
	
}


//bool RoboteqFbl2360::sendsHeartbeat()
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

//bool RoboteqFbl2360::hasCommunicated()
//{
//  bool b_res;
//
//  if (controller_vars_.controller_mode == MODE_PRE_INITIATION)
//    b_res = false;
//  else
//    b_res = true;
//
//  return b_res;
//}


void 
RoboteqFbl2360::simulateDrive(int channel, double speed_command, double position_command, bool invert_as_needed)
{
  rclcpp::Time current_simulation_timestep = rclcpp::Clock().now();
  double dt = (current_simulation_timestep - previous_simulation_timestep_).seconds();
  if (dt > 0.5)
  {
    //std::cout << "timed out" << std::endl;
    dt = 0;
  }


  //std::cout << "DT" << dt << std::endl;

  if(invert_as_needed)
  {
    //std::cout << "inverting" << std::endl;
    double diff = position_command - controller_vars_.motor_vars[1].position;
    if (fabs(position_command) < M_PI / 8 )
      drive_inverted_ = false;
    else if ( (fabs(diff) > M_PI / 2.)  && (!drive_inverted_) )
      drive_inverted_ = true;
    else if (  (fabs(diff) < M_PI /4.) && (drive_inverted_) )
      drive_inverted_ = false;
  

    if (drive_inverted_)
    {
      position_command = angles::normalize_angle(position_command + M_PI);
      speed_command *= -1.;
    }
  }


  // propulsion
  double error_prop = (speed_command - controller_vars_.motor_vars[0].speed);
  if (error_prop != 0)
  {
    if (fabs(error_prop) < m1_params_.sim_a * dt)
    {
      controller_vars_.motor_vars[0].speed = speed_command;
    }
    else
    {
      controller_vars_.motor_vars[0].speed += m1_params_.sim_a * dt * (error_prop/fabs(error_prop));
    }
  }
  
  
  // steering
  double error_steer = position_command - controller_vars_.motor_vars[1].position;
  double max_travel = m2_params_.sim_v * dt; //steering_speeds[i] * dt; //TEST
  if (fabs(error_steer) < max_travel)
  {
    controller_vars_.motor_vars[1].position = position_command;
  }
  else if (error_steer != 0)
  {
    controller_vars_.motor_vars[1].position += max_travel * error_steer/fabs(error_steer);
  }


  updateWheelPos(controller_vars_.motor_vars[0].speed, dt);


  previous_simulation_timestep_ = current_simulation_timestep; 
  //std::cout << "sim" << controller_vars_.can_id << "finished" << std::endl;
}


bool RoboteqFbl2360::evalReceivedMsg(CanFrame& msg)
{
  bool b_ret = false;


  int temp_data1, temp_data2, temp_data3, temp_data4;


  if (msg.getId() == can_headers_.heartbeat)
  {
    last_heartbeat_time_ = time(NULL);
  }

  //-----------------------
  // eval PDO1
  if (msg.getId() == can_headers_.iTxPDO1)
  {
    //test
    rclcpp::Time current_simulation_timestep = rclcpp::Clock().now();
    double dt = (current_simulation_timestep - previous_simulation_timestep_).seconds();
    if (dt > 0.5)
    {
      dt = 0;
    }
    //test

    int m1_vel = (msg.getByte(1) << 8) | (msg.getByte(0) );

    controller_vars_.motor_vars[0].speed = (double)((short)m1_vel) / (m1_params_.gear_ratio) * M_PI/30. * m1_params_.radius_wheel; // * (1. - 2. * drive_inverted_);
    
    updateWheelPos(controller_vars_.motor_vars[0].speed, dt); // test
    previous_simulation_timestep_ = current_simulation_timestep; //test

    int m2_vel = (msg.getByte(3) << 8) | (msg.getByte(2) );

    controller_vars_.motor_vars[1].speed = (short)m2_vel;

    int m2_pos = (msg.getByte(7) << 24) | (msg.getByte(6) << 16)
               | (msg.getByte(5) << 8) | (msg.getByte(4) );

    controller_vars_.motor_vars[1].position = (double)(m2_pos / (m2_params_.encoder_ppr * 4. * m2_params_.gear_ratio) * 2. * M_PI); 

    b_ret = true;
  }

  //-----------------------
  // eval answers from PDO2
  else if (msg.getId() == can_headers_.iTxPDO2)
  {

    controller_vars_.motor_vars[0].motor_amps = (short)((msg.getByte(1) << 8) | (msg.getByte(0) )) / 10.;

    controller_vars_.motor_vars[1].motor_amps = (short)((msg.getByte(3) << 8) | (msg.getByte(2) )) / 10.;

    controller_vars_.motor_vars[0].relative_power = (short)((msg.getByte(5) << 8) | (msg.getByte(4) ));

    controller_vars_.motor_vars[1].relative_power = (short)((msg.getByte(7) << 8) | (msg.getByte(6) ));

    //controller_vars_.motor_vars[0].motor_amps = (short)temp_data1 / 10.;
    //std::cout << "tpdo2_m1_amps: " << controller_vars_.motor_vars[0].motor_amps << "  ";

    //controller_vars_.motor_vars[1].motor_amps = (short)temp_data2 / 10.;
    //std::cout << "tpdo2_m2_amps: " << controller_vars_.motor_vars[1].motor_amps << std::endl;

    //controller_vars_.motor_vars[0].relative_power = (short)temp_data3;
    //std::cout << "tpdo2_m1_power: " << controller_vars_.motor_vars[0].relative_power << "  ";

    //controller_vars_.motor_vars[1].relative_power = (short)temp_data4;
    //std::cout << "tpdo2_m2_power: " << controller_vars_.motor_vars[1].relative_power << std::endl;


    b_ret = true;
  }

  //-----------------------
  // eval PDO3
  else if (msg.getId() == can_headers_.iTxPDO3)
  {

    char flags_char = (signed char)(msg.getByte(0));

    int max_temp = (short)((msg.getByte(3) << 8) | (msg.getByte(2) ));
    controller_vars_.temps[0] = max_temp;

    controller_vars_.battery_amps = (short)( (msg.getByte(5) << 8) | (msg.getByte(4)) ) / 10.;

    controller_vars_.battery_volts = (short)( (msg.getByte(7) << 8) | (msg.getByte(6)) ) / 10.;


    //char flags_char = (signed char)temp_data1;
    //max_temp_ = (short)temp_data2;
    //controller_vars_.battery_amps = (short)temp_data3 / 10.;
    //controller_vars_.battery_volts = (short)temp_data4 / 10.;

    for (int i=0; i<NUMBER_OF_STATUS_FLAGS; i++)
    {
      bool current_flag = flags_char & 0b10000000;
      controller_vars_.status_flags[i].status_value = current_flag;
      flags_char = flags_char << 1;
    }
    controller_vars_.status_flags[7].status_value = !controller_vars_.status_flags[7].status_value;

    b_ret = true;
  }

  //-----------------------
  // eval PDO4
  else if (msg.getId() == can_headers_.iTxPDO4)
  {

    int msg_type = msg.getByte(3);
    //std::cout << "MSGTYPE: " << msg_type << std::endl;

    if (msg_type == 1)
    {
      //controller_vars_.controller_mode = (signed char)msg.getAt;
      controller_vars_.drive_direction = (signed char)msg.getByte(2);
      
      controller_vars_.home_speed = (short) (msg.getByte(1) << 8 | msg.getByte(0) );
      
      controller_vars_.home_count = (msg.getByte(7) << 24) | (msg.getByte(6) << 16)
	              | (msg.getByte(5) << 8)  | (msg.getByte(4) );
    
    }
    else if(msg_type == 2)
    {
     
      int reported_type = msg.getByte(4);
      if (reported_type == TYPE)
      {
        type_verified_ = true;
      }

      std::stringstream script_version_ss;
      script_version_ss << (int)(msg.getByte(7)) << '.' << (int)(msg.getByte(6)) << '.' << (int)(msg.getByte(5));
      controller_vars_.version = script_version_ss.str();


    }

    else if(msg_type == 3)
    {
      // m1_params_.encoder_ppr = (msg.getByte(7) << 8) | (msg.getByte(6));
      // m2_params_.encoder_ppr = (msg.getByte(5) << 8) | (msg.getByte(4));

      //std::cout << "ENCODER1: " << m1_params_.encoder_ppr << " ENCODER2: " << m2_params_.encoder_ppr << std::endl;

    }
     



  ////m2_params_.encoder_ppr = param_map["str_enc_ppr"];

    b_ret = true;
  }

  if (msg.getId() == can_headers_.iTxSDO)
  {
    std::cout << "SDO received, ID: " << msg.getId() << std::endl;
    b_ret = true;
  }

  if (b_ret)
  {
    last_heartbeat_time_ = time(NULL);
    controller_vars_.controller_mode = MODE_ONLINE; 
  }

  return b_ret;
}


//-----------------------------------------------
//NOT USED
void RoboteqFbl2360::sendHeartbeat()
{
  //CanMsg msg;
  //msg.getId()  = 0x700;
  //msg.m_iLen = 5;
  //msg.set(0x00,0,0,0,0,0,0,0);
  //can_ctrl_->transmitMsg(msg);
}


void 
RoboteqFbl2360::setCurrentPosAsZero(std::vector<CanFrame>& msgs)
{
  int pos_counts =controller_vars_.motor_vars[1].position * ( m2_params_.encoder_ppr * 4. * m2_params_.gear_ratio) / (2. * M_PI); 
  int t_home_count = controller_vars_.home_count - pos_counts;
  setupController(msgs, 2, t_home_count);
}

//-----------------------------------------------0x9c 0xff
void RoboteqFbl2360::setupController(std::vector<CanFrame>& msgs, int setup_id, int setup_value)
{
  CanFrame msg;
  sendPDOdownload(msg, can_headers_.iRxPDO2, setup_id, setup_value);
  msgs.push_back(msg);
}


//-----------------------------------------------
bool RoboteqFbl2360::sendDriveCommand(std::vector<CanFrame>& msgs, int channel, double speed, double position, double position_max_speed, bool invert_as_needed)
{
  // REMOVED TEMP
  //if (!type_verified_ || m2_params_.encoder_ppr == 0)
  //  return false;



  if(invert_as_needed)
  {

    double diff = position - controller_vars_.motor_vars[1].position;
    if (fabs(position) < M_PI / 8 )
      drive_inverted_ = false;
    else if ( (fabs(diff) > M_PI / 2.)  && (!drive_inverted_) )
      drive_inverted_ = true;
    else if (  (fabs(diff) < M_PI /4.) && (drive_inverted_) )
      drive_inverted_ = false;
  

    if (drive_inverted_)
    {
      position = angles::normalize_angle(position + M_PI);
      speed *= -1.;
    }
  }



  //std::cout << "speed:" << speed << ",rad_wheel:" << m1_params_.radius_wheel << ", gear_ratio:" << m1_params_.gear_ratio << ", scale:" << m1_params_.command_scaling_factor << std::endl;
  int speed_command = (speed / m1_params_.radius_wheel) * m1_params_.gear_ratio * (30./M_PI) * m1_params_.command_scaling_factor; // RPM/3  M_PI*0.20/(42*30);
  int position_command = 1000. * position / m2_params_.position_limit; //// * m2_params_.encoder_ppr * 4 * m2_params_.gear_ratio / (2 * M_PI);
  int position_max_speed_command = position_max_speed * m2_params_.encoder_ppr * 4 * m2_params_.gear_ratio / (2 * M_PI);
  
  CanFrame msg_1, msg_2;

  //std::cout << "node:" << controller_vars_.can_id << ", speed:" << speed_command << ", position:" <<  position_command << ", pos_max_speed:" << position_max_speed << std::endl;
  sendPDOdownload(msg_1, can_headers_.iRxPDO1, command_seq_, speed_command);
  //std::cout << "pms: " << position_max_speed << ", p: " << position << std::endl;
  sendPDOdownload(msg_2, can_headers_.iRxPDO4, position_max_speed, position_command);

  msgs.resize(2);
  msgs[0] = msg_1;
  msgs[1] = msg_2;

  command_seq_++;

  return true;
}

//-----------------------------------------------
void RoboteqFbl2360::sendDiffDriveCommand(int speed_1, int speed_2)
{

  //CanMsg msg_1, msg_2;
  //sendPDOdownload(msg_1, can_headers_.iRxPDO1, command_seq_, speed_1);
  //sendPDOdownload(msg_2, can_headers_.iRxPDO4, command_seq_, speed_2);
  
  
  ////sendPDOdownload(can_headers_.iRxPDO4, command_seq_, position);
// // std::cout << "pms: " << position_max_speed << ", p: " << position << std::endl;
//  //sendPDOdownload(can_headers_.iRxPDO4, position_max_speed, position);

  command_seq_++;
}

//-----------------------------------------------
void RoboteqFbl2360::driveMode()
{
  std::vector<CanFrame> msgs; // TEMP
  sendModeCommand(msgs, MODE_DRIVE);
}


//-----------------------------------------------
bool RoboteqFbl2360::homeSteering(std::vector<CanFrame>& msgs)
{
  //homing = true;
  sendModeCommand(msgs, MODE_HOME);
  return true;
}

//-----------------------------------------------
void RoboteqFbl2360::decouple()
{
  //sendModeCommand(MODE_DECOUPLED);
}


//-----------------------------------------------
void RoboteqFbl2360::sendModeCommand(std::vector<CanFrame>& msgs, int mode)
{
  std::cout << "Sending mode: %d" << mode << std::endl;
  CanFrame msg;
  sendPDOdownload(msg, can_headers_.iRxPDO3, mode, mode);
  msgs.push_back(msg);
  // SHOULD RETURN MSG SO IT CAN BE SENT
}

/**
* Set acceleration
*/
void RoboteqFbl2360::sendAccelerationSDO(int channel, int value)
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
void RoboteqFbl2360::sendDecelerationSDO(int channel, int value)
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
void RoboteqFbl2360::sendPDOdownload(CanFrame& msg, int msg_id, int data_1, int data_2)
{

	
  CanFrame t_msg;
  //CMsgTr.m_iType = 0;


  

  t_msg.setId(msg_id);
  t_msg.setLength(8);
  //t_msg.data.resize(8);

  //CMsgTr.m_iLen = 8;

  t_msg.setBytes( (uint8_t)(data_1),
                  (uint8_t)(data_1 >> 8),
                  (uint8_t)(data_1 >> 16),
                  (uint8_t)(data_1 >> 24),

                  (uint8_t)(data_2),
                  (uint8_t)(data_2 >> 8),
                  (uint8_t)(data_2 >> 16),
                  (uint8_t)(data_2 >> 24) );


  msg = t_msg;

}

void RoboteqFbl2360::sendPDOdownload(CanFrame& msg, int msg_id, int data_1, int data_2, int data_3, int data_4)
{

  CanFrame t_msg;

  t_msg.setId(msg_id);
  t_msg.setLength(8);
  //t_msg.data.resize(8);

  //CMsgTr.m_iLen = 8;

  t_msg.setBytes( (uint8_t)data_1,
                  (uint8_t)data_1 >> 8,

                  (uint8_t)data_2,
                  (uint8_t)data_2 >> 8,

                  (uint8_t)data_3,
                  (uint8_t)data_3 >> 8,

                  (uint8_t)data_4,
                  (uint8_t)data_4 >> 8 );


  msg = t_msg;
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
void RoboteqFbl2360::sendSDOAbort(int iObjIndex, int iObjSubIndex, unsigned int iErrorCode)
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
  ////can_ctrl_->transmitMsg(CMsgTr);

}



//-----------------------------------------------
void RoboteqFbl2360::sendSDODownload(int iObjIndex, int iObjSubIndex, int iData)
{
  //CanMsg CMsgTr;

  //const int ciInitDownloadReq = 0x20;
  //const int ciNrBytesNoData = 0x00;
  //const int ciExpedited = 0x02;
  //const int ciDataSizeInd = 0x01;

  //CMsgTr.m_iLen = 8;
  //CMsgTr.id =can_headers_.iRxSDO;
  ////std::cout << "SDO = " <<can_headers_.iRxSDO <<std::endl;

  //unsigned char cMsg[8];

  //cMsg[0] = ciInitDownloadReq | (ciNrBytesNoData << 2) | ciExpedited | ciDataSizeInd;
  //cMsg[1] = iObjIndex;
  //cMsg[2] = iObjIndex >> 8;
  //cMsg[3] = iObjSubIndex;
  //cMsg[4] = iData;
  //cMsg[5] = iData >> 8;
  //cMsg[6] = iData >> 16;
  //cMsg[7] = iData >> 24;

  //CMsgTr.set(cMsg[0], cMsg[1], cMsg[2], cMsg[3], cMsg[4], cMsg[5], cMsg[6], cMsg[7]);
  //can_ctrl_->transmitMsg(CMsgTr);
  //std::cout << "Message = " <<  static_cast<unsigned>(cMsg[0])  << " " <<  static_cast<unsigned>(cMsg[1])  << " " << static_cast<unsigned>(cMsg[2])  << " " << static_cast<unsigned>(cMsg[3]) << " "  << static_cast<unsigned>(cMsg[4])  << " " <<  static_cast<unsigned>(cMsg[5])  << " " << static_cast<unsigned>(cMsg[6])  << " " << static_cast<unsigned>(cMsg[7])  <<std::endl;
}

//-----------------------------------------------
void RoboteqFbl2360::sendSDOUpload(int iObjIndex, int iObjSubIndex)
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
  ////can_ctrl_->transmitMsg(CMsgTr);
}



// Controller config


void RoboteqFbl2360::getControllerVars(ControllerVars& controller_vars)
{
  updateControllerMode();
  controller_vars = controller_vars_;
}

std::string RoboteqFbl2360::getName()
{
  return controller_vars_.name;
}

int RoboteqFbl2360::getCanId()
{
  return controller_vars_.can_id;
}

int RoboteqFbl2360::getDriveDirection()
{
  return controller_vars_.drive_direction;
}

int RoboteqFbl2360::getHomeSpeed()
{
  return controller_vars_.home_speed;
}

int RoboteqFbl2360::getHomeCount()
{
  return controller_vars_.home_count;
}

int RoboteqFbl2360::getControllerMode()
{
  updateControllerMode();
  return controller_vars_.controller_mode;
}


// controller status

void RoboteqFbl2360::updateControllerMode()
{
  if (controller_vars_.controller_mode != MODE_PRE_INITIATION)
  {
    time_t now_time = time(NULL);
    double time_since_heartbeat = difftime(now_time, last_heartbeat_time_);

    if (time_since_heartbeat > heartbeat_timeout_time_)
    {
      controller_vars_.controller_mode = MODE_LOST_CONNECTION;
    }
  
  }
}

double RoboteqFbl2360::getBatteryVolts()
{
  return controller_vars_.battery_volts;
}

double RoboteqFbl2360::getBatteryAmps()
{
  return controller_vars_.battery_amps;
}

int RoboteqFbl2360::getMaxTemp()
{
  return controller_vars_.temps[0];
}

std::vector<unsigned char> RoboteqFbl2360::getStatusFlags()
{
  std::vector<unsigned char> status_flags;
  for (int i = 1; i < controller_vars_.status_flags.size(); i ++)
  {
    status_flags.push_back( (unsigned char)controller_vars_.status_flags[i].status_value );
  }

  status_flags.resize(controller_vars_.status_flags.size());

  return status_flags;
}

void RoboteqFbl2360::setControllerIndex(int index)
{
  controller_index_ = index;
}

bool RoboteqFbl2360::hasIndex(int index)
{
  bool t_ret = false;

  if (index == controller_index_)
    t_ret = true;
  else if (index == controller_index_ + 1)
    t_ret = true;

  return t_ret;

}

// propulsion status

double RoboteqFbl2360::getSpeed(int channel)
{
  if (channel == controller_index_)
    return controller_vars_.motor_vars[0].speed;
  else if (channel == controller_index_ + 1)
    return controller_vars_.motor_vars[1].speed;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;

  }
}

double RoboteqFbl2360::getPosition(int channel)
{
  if (channel == controller_index_)
    return controller_vars_.motor_vars[0].position;
  else if (channel == controller_index_ + 1)
    return controller_vars_.motor_vars[1].position;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;
  }
}

double RoboteqFbl2360::getMotorAmps(int channel)
{
  if (channel == controller_index_)
    return controller_vars_.motor_vars[0].motor_amps;
  else if (channel == controller_index_ + 1)
    return controller_vars_.motor_vars[1].motor_amps;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;
  }
}

//int RoboteqFbl2360::getPropulsionBatteryAmps()
//{
//	return m1_controller_vars_.battery_amps;
//}

int RoboteqFbl2360::getRelativePower(int channel)
{
  if (channel == controller_index_)
    return controller_vars_.motor_vars[0].relative_power;
  else if (channel == controller_index_ + 1)
    return controller_vars_.motor_vars[1].relative_power;
  else
  {
    std::cout << "unknown channel" << std::endl;
    return 0;
  }
}


double RoboteqFbl2360::getPropulsionSpeed(int channel)
{
  return controller_vars_.motor_vars[0].speed;
}
double RoboteqFbl2360::getPropulsionPosition(int channel)
{
  return controller_vars_.motor_vars[0].position;
}
// steering status

//int RoboteqFbl2360::getSteeringSpeed()
//{
//  return controller_vars_.motor_vars[1].speed;
//}

double RoboteqFbl2360::getSteeringPosition(int channel)
{
  return controller_vars_.motor_vars[1].position;
}

double RoboteqFbl2360::getSteeringMotorAmps()
{
  return controller_vars_.motor_vars[1].motor_amps;
}

//int RoboteqFbl2360::getSteeringBatteryAmps()
//{
//	return m2_controller_vars_.battery_amps;
//}

int RoboteqFbl2360::getSteeringRelativePower()
{
  return controller_vars_.motor_vars[1].relative_power;
}

std::vector<std::string> RoboteqFbl2360::getControllerSetupMap()
{
  std::vector<std::string> r_vector(CONTROLLER_SETUP_MAP,
				    CONTROLLER_SETUP_MAP +  sizeof CONTROLLER_SETUP_MAP / sizeof CONTROLLER_SETUP_MAP[0]);

  return r_vector;
}



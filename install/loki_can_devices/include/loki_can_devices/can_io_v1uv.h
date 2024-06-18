/****************************************************************
 *
 * Copyright (c) 2020
 *
 * Saga Robotics
 *
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * Project name: loki II
 * ROS package name: loki_can_devices
 * Description: For controlling IO on the V1 UV PCB of the loki mobilde robot
 *								
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *			
 * Author: Lars Grimstad, email:lgrimstad@sagarobotics.com
 *
 * Date of creation: Sep 2020
 *
 *
 ****************************************************************/


#ifndef V1UV_INCLUDEDEF_H
#define V1UV_INCLUDEDEF_H


//-----------------------------------------------
#include "loki_can_devices/can_io_itf.h"
//-----------------------------------------------

/**
 * Driver class for the motor drive of type Roboteq FBL 2360.
 * \ingroup DriversCanModul	
 */
class V1UV : public CanIOItf
{
public:

  V1UV();	

  /**
  * Sets address and other intial values
  * @param io_init_map map of initial values
  */
  bool initIO(std::map<std::string, int> io_init_map, std::vector<CanFrame> &can_frames);

  /**
  * Sets name of IO module
  * @param name name of IO module
  */
  void setName(std::string name);

  /**
  * Returns CAN ID of IO device
  */
  int getID();


  /**
  * Populates map with service names and IDs
  * @param set_bool_map map to be populated
  */
  void getSetBoolServices(std::map<int, std::string> &set_bool_map);

  /**
  * Evals a received message.
  * Only messages with fitting identifiers are evaluated.
  * @param msg message to be evaluated
  */
  bool evalReceivedMsg(CanFrame& msg);

  /**
  * Sets relevant boolean variables
  * @param can_frames CAN frames to populate
  * @param service_id id of service
  * @param value value
  */
  void callSetBoolService(std::vector<CanFrame> &can_frames, int service_id, bool value, bool &success, std::string &message);

  /**
  * Getter for IO module state
  * @param state to be populated with io state
  */
  void getState(IOState &state);

    
protected:

  const std::string IO_TYPE = "V1UV";

  int tpdo_1_;
  int tpdo_2_;
  int tpdo_3_;
  int tpdo_4_;

  int rpdo_1_;
  int rpdo_2_;
  int rpdo_3_;
  int rpdo_4_;

  enum Digitals
  {
    D_LED,
    D_LASER_ENABLED,
    D_MOVEMENT_OK,
    D_BEACON_RED,
    D_BEACON_YEL,
    D_BEACON_GRN,
    D_SAFE_BUZZ,
    D_CONTACTOR,
    D_24V_RL,
    D_AUX_RL0,
    D_AUX_RL1,
    D_DOUT0,
    D_DOUT1,
    D_DOUT2,
    D_UV_RL0,
    D_UV_RL1,
    NUM_DIGITALS
  };
  
  
  struct IO
  {
    std::string io_name;
    std::string service_name;
  };


  const std::map<int, IO> digitals_ = { {D_LED, {.io_name="pcb_led", .service_name=""}},
                                        {D_LASER_ENABLED, {.io_name="laser_enabled", .service_name="set_laser_enabled"}},
                                        {D_MOVEMENT_OK, {.io_name="movement_ok", .service_name="set_movement_ok"}},
	                                {D_BEACON_RED, {.io_name="beacon_red", .service_name="set_beacon_red"}},
	                                {D_BEACON_YEL, {.io_name="beacon_yel", .service_name="set_beacon_yel"}},
	                                {D_BEACON_GRN, {.io_name="beacon_grn", .service_name="set_beacon_grn"}},
	                                {D_SAFE_BUZZ, {.io_name="safe_buzz", .service_name="set_safety_buzzer"}},
	                                {D_CONTACTOR, {.io_name="contactor", .service_name="set_contactor"}},
	                                {D_24V_RL, {.io_name="24V_rl", .service_name="set_24v_rl"}},
	                                {D_AUX_RL0, {.io_name="aux_rl_0", .service_name="set_rl0"}},
	                                {D_AUX_RL1, {.io_name="aux_rl_1", .service_name="set_rl1"}},
	                                {D_DOUT0, {.io_name="dout0", .service_name="set_dout0"}},
	                                {D_DOUT1, {.io_name="dout1", .service_name="set_dout1"}},
	                                {D_DOUT2, {.io_name="dout2", .service_name="set_dout2"}},
	                                {D_UV_RL0, {.io_name="uv_rl_0", .service_name="set_uv_rl0"}},
	                                {D_UV_RL1, {.io_name="uv_rl_1", .service_name="set_uv_rl1"}} };


  /**
  * Creats can frame for switching relays
  * @param can_frame CAN frame to populate
  * @param rl_values relay values
  */
  void createCanFrameDigitals(CanFrame &can_frame, std::vector<bool> values);

  int can_id_;
  std::string name_;
  std::vector<bool> digital_states_desired_;
  IOState latest_state_;









};
//-----------------------------------------------
#endif

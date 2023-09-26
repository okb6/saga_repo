#ifndef V1PCB_INCLUDEDEF_H
#define V1PCB_INCLUDEDEF_H


//-----------------------------------------------
#include "loki_can_devices/can_io_itf.h"
//-----------------------------------------------

/**
 * Driver class for the motor drive of type Roboteq FBL 2360.
 * \ingroup DriversCanModul	
 */
class V1PCB : public CanIOItf
{
public:

  V1PCB();	

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

  const std::string IO_TYPE = "V1PCB";

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
    D_ESTOP,
    D_BUTTON,
    D_CONT_START,
    D_CONT_HOLD,
    D_CONT_COIL,
    D_PC_PWR,
    D_PWR_CTRL,
    D_RL0,
    D_RL1,
    D_PCB_LED,
    NUM_DIGITALS
  };
  
  
  struct IO
  {
    std::string io_name;
    std::string service_name;
  };


  const std::map<int, IO> digitals_ = { {D_ESTOP, {.io_name="estop", .service_name=""}},
                                        {D_BUTTON, {.io_name="button", .service_name=""}},
                                        {D_CONT_START, {.io_name="cont_start", .service_name=""}},
	                                {D_CONT_HOLD, {.io_name="cont_hold", .service_name=""}},
	                                {D_CONT_COIL, {.io_name="cont_coil", .service_name="set_motor_power"}},
	                                {D_PC_PWR, {.io_name="pc_power", .service_name="set_pc_power"}},
	                                {D_PWR_CTRL, {.io_name="power_control", .service_name="set_power_control"}},
	                                {D_RL0, {.io_name="aux_rl_0", .service_name="set_rl0"}},
	                                {D_RL1, {.io_name="aux_rl_1", .service_name="set_rl1"}},
	                                {D_PCB_LED, {.io_name="pcb_led", .service_name=""}} };


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






  //std::vector<short>
  //BatteryVars battery_vars_;





  //virtual bool hasCommunicated() = 0;

  // ------------------------- Parameters



  // ------------------------- Variables

  // controller config
  //int node_id_;

  // controller state
 // int device_mode_;
//  int state_of_charge_;


  //time_t last_heartbeat_time_;
  //double heartbeat_timeout_time_;
  //int next_var_to_update_;  
  //std::map<std::string, double> drive_parameters_;
  



};
//-----------------------------------------------
#endif

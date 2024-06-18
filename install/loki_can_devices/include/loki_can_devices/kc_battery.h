#ifndef KCBATTERY_INCLUDEDEF_H
#define KCBATTERY_INCLUDEDEF_H


//-----------------------------------------------
#include <loki_can_devices/can_battery_itf.h>
#include <time.h>
#include <map>
#include <ctime>
#include "loki_msgs/msg/can_frame.h"
#include "can_frame.h"
#include <stdint.h>
#include <rclcpp/rclcpp.hpp>
//-----------------------------------------------

/**
 * Driver class for the motor drive of type Roboteq FBL 2360.
 * \ingroup DriversCanModul	
 */
class KCBattery : public CanBatteryItf
{
public:


  /**
   * Identifier of the CAN messages.
   */
  struct CanHeaders
  {
    int tpdo_1;
    int tpdo_2;
    int tpdo_3;
  };



  // ------------------------- Interface
  
  /**
   * Default constructor.
   */
  KCBattery();


  /**
   * Sets the CAN interface.
   */
  //void setCanItf(CanItf* pCanItf){can_ctrl_ = pCanItf; }

  /**
   * Sets the drive parameters.
   */
//  void setDeviceParams(std::map<std::string, double> param_map);



  /**
  * Sets CAN PDO addresses
  */
  void setCanParam(int node_id);


  /**
   * Retuns true if the battery is active
   */
  bool hasPulse();

/**
  * Evals a received message.
  * Only messages with fitting identifiers are evaluated.
  * @param msg message to be evaluated.
  */
  bool evalReceivedMsg(CanFrame& msg);

 void getBatteryData(CanBatteryItf::BatteryVars& battery_vars);

 // getters
 int getCanId();
 int getStateOfCharge();
 int getStateOfHealth();
 double getVoltage();
 double getCurrent();
 bool getChargeFet();
 bool getDischargeFet();
 short getCycleCount();
 short getCapacity();
 std::vector<double> getTemps();
 bool getAOverVolt();
 bool getAUnderVolt();
 bool getAOverTemp();
 bool getAUnderTemp();
 bool getAOverCharge();
 bool getAOverDischarge();
 bool getACanFail();
 bool getACellVoltSensFault();
 bool getABmsFail();
 bool getAShortCircuitDischarge();
 bool getATempSensFault();
 bool getAOverVoltFault();
 bool getAUnderVoltFault();
 bool getAPackVoltSensFault();

    
protected:

  CanHeaders can_headers_;


//  struct BatteryVars
//  {
//    short soc;
//    short soh;
//    short voltage;
//    short current;
//    bool charge_fet;
//    bool discharge_fet;
//    short cycle_count;
//    short capacity;
//    std::vector<double> temps;
//    bool a_over_volt;
//    bool a_under_volt;
//    bool a_over_temp;
//    bool a_under_temp;
//    bool a_over_charge;
//    bool a_over_discharge;
//    bool a_can_fail;
//    bool a_cell_volt_sens_fault;
//    bool a_bms_fail;
//    bool a_short_circ_discharge;
//    bool a_temp_sens_fault;
//    bool a_over_volt_fault;
//    bool a_under_volt_fault;
//    bool a_pack_volt_sens_fault;
//
//  };


  //std::vector<short>
  CanBatteryItf::BatteryVars battery_vars_;





//  bool hasCommunicated();

  // ------------------------- Parameters



  // ------------------------- Variables

  // controller config
  int node_id_;

  // controller state
 // int device_mode_;
//  int state_of_charge_;


  time_t last_heartbeat_time_;
  double heartbeat_timeout_time_;
  //int next_var_to_update_;  
  //std::map<std::string, double> drive_parameters_;
  



};
//-----------------------------------------------
#endif

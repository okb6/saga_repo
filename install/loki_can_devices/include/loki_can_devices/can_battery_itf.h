#ifndef CANBATTERYITF_INCLUDEDEF_H
#define CANBATTERYITF_INCLUDEDEF_H

#include <vector>

//-----------------------------------------------
//#include <time.h>
//#include <map>
//#include <ctime>
#include "loki_can_devices/can_frame.h"
//
//Needed?
#include <stdint.h>
//-----------------------------------------------

/**
 * Driver class for the motor drive of type Roboteq FBL 2360.
 * \ingroup DriversCanModul	
 */
class CanBatteryItf
{
public:


  /**
   * Identifier of the CAN messages.
   */
//  struct CanHeaders
//  {
//    int tpdo_1;
//    int tpdo_2;
//    int tpdo_3;
//  };


  struct BatteryVars
  {
    short id;
    short state;
    short soc;
    short soh;
    double voltage;
    double current;
    bool charge_fet;
    bool discharge_fet;
    short cycle_count;
    short capacity;
    std::vector<double> temps;
    bool a_over_volt;
    bool a_under_volt;
    bool a_over_temp;
    bool a_under_temp;
    bool a_over_charge;
    bool a_over_discharge;
    bool a_can_fail;
    bool a_cell_volt_sens_fault;
    bool a_bms_fail;
    bool a_short_circ_discharge;
    bool a_temp_sens_fault;
    bool a_over_volt_fault;
    bool a_under_volt_fault;
    bool a_pack_volt_sens_fault;

  };

  // ------------------------- Interface
  
  /**
   * Default constructor.
   */
  //CanBatteryItf();


  /**
   * Sets the CAN interface.
   */
  //void setCanItf(CanItf* pCanItf){can_ctrl_ = pCanItf; }

  /**
   * Sets the drive parameters.
   */
//  void setDeviceParams(std::map<std::string, double> param_map);



  /**
  * Sets CAN PDO addresses from battery id
  */
  virtual void setCanParam(int battery_id) = 0;


  /**
   * Retuns true if the battery is active
   */
  virtual bool hasPulse() = 0;

/**
  * Evals a received message.
  * Only messages with fitting identifiers are evaluated.
  * @param msg message to be evaluated.
  */
  virtual bool evalReceivedMsg(CanFrame& msg) = 0;

 // getters
// int getCanId();
// int getStateOfCharge();
// int getStateOfHealth();
// double getVoltage();
// double getCurrent();
// bool getChargeFet();
// bool getDischargeFet();
// short getCycleCount();
// short getCapacity();
// std::vector<double> getTemps();
// bool getAOverVolt();
// bool getAUnderVolt();
// bool getAOverTemp();
// bool getAUnderTemp();
// bool getAOverCharge();
// bool getAOverDischarge();
// bool getACanFail();
// bool getACellVoltSensFault();
// bool getABmsFail();
// bool getAShortCircuitDischarge();
// bool getATempSensFault();
// bool getAOverVoltFault();
// bool getAUnderVoltFault();
// bool getAPackVoltSensFault();

virtual void getBatteryData(CanBatteryItf::BatteryVars& battery_data) = 0;
    
protected:

  //CanHeaders can_headers_;




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

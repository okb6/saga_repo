#include <assert.h>
#include "loki_can_devices/kc_battery.h"
#include <unistd.h>
#include <cmath>
#include <map>
//#include <bitset>







//-----------------------------------------------
KCBattery::KCBattery()
{


	// Variables
	//can_ctrl_ = NULL;
	node_id_ = -1;
	
	//device_mode_.pre_initiation = -99;



	
	// battery state
        //battery_mode_= device_mode_.pre_initiation;
//	state_of_charge_ = 0;
	
    //battery_vars_.resize(VAR_COUNT);	

  //  next_var_to_update_ = 0;	
	last_heartbeat_time_ = time(NULL);
	heartbeat_timeout_time_ = 2; // s




    battery_vars_.soc = -99;
    battery_vars_.soh = 0;
    battery_vars_.voltage = 0;
    battery_vars_.current = 0;
    battery_vars_.charge_fet = false;
    battery_vars_.discharge_fet = false;
    battery_vars_.cycle_count = 0;
    battery_vars_.capacity = 0;
    battery_vars_.temps.resize(7);
    battery_vars_.a_over_volt = false;
    battery_vars_.a_under_volt = false;
    battery_vars_.a_over_temp = false;
    battery_vars_.a_under_temp = false;
    battery_vars_.a_over_charge = false;
    battery_vars_.a_over_discharge = false;
    battery_vars_.a_can_fail = false;
    battery_vars_.a_cell_volt_sens_fault = false;
    battery_vars_.a_bms_fail = false;
    battery_vars_.a_short_circ_discharge = false;
    battery_vars_.a_temp_sens_fault = false;
    battery_vars_.a_over_volt_fault = false;
    battery_vars_.a_under_volt_fault = false;
    battery_vars_.a_pack_volt_sens_fault = false;



  //can_ctrl_->transmitMsg(can_0header_);

}


/*

//uint8_t KCBattery::crc8(uint8_t offset) {
//  uint8_t length = 0x02;
//  uint8_t data_2[] = {0x00, offset, 0x00, 0x00, 0x00, length}; //, 0x05, 0x06, 0x07}; //, 0x08, 0x09, 0x0a};
//  uint8_t *first_byte_p = &data_2[0];
//  uint8_t crc = 0x00;
 
  for (uint8_t i = 0; i < 6; i++) {
    crc = crc8_update(crc ^ *first_byte_p++);
  }
  return crc;
}

uint8_t KCBattery::crc8_update(uint8_t dat) {
  uint8_t crc_table[16] = { 0x00, 0x07, 0x0E, 0x09, 0x1C, 0x1B, 0x12, 0x15,
  	0x38, 0x3F, 0x36, 0x31, 0x24, 0x23, 0x2A, 0x2D, };
  uint8_t crc = 0x00, da = 0x00;
  da = dat >> 4;
  crc = crc_table[da];
  da = (crc >> 4) ^ (dat & 0x0f);
  crc <<= 4;
  crc ^= crc_table[da];
  return crc;
}

*/


/*
void KCBattery::setDeviceParams(std::map<std::string, double> param_map)
{

}
*/
/*
void KCBattery::requestNextParams(int params_to_update)
{
  //for (int i = 0; i < params_to_update; i++)
  //{
  //  std::cout << "updating: " << std::hex << next_var_to_update_ << std::endl;
  //  requestParamViaCan(battery_vars_[next_var_to_update_].offset, battery_vars_[next_var_to_update_].checksum);
  //  next_var_to_update_ = (next_var_to_update_ + 1) % VAR_COUNT;
  //}

    requestParamViaCan(battery_vars_[VAR_ABSOLUTE_STATE_OF_CHARGE].offset, battery_vars_[VAR_ABSOLUTE_STATE_OF_CHARGE].checksum);
    

  //  requestParamViaCan(battery_vars_[VAR_RELATIVE_STATE_OF_CHARGE].offset, battery_vars_[VAR_RELATIVE_STATE_OF_CHARGE].checksum);
}
//-----------------------------------------------
*/

void KCBattery::setCanParam(int battery_id)
{
  battery_vars_.id = battery_id;
  can_headers_.tpdo_1 = 0x3c0 + battery_id;
  can_headers_.tpdo_2 = 0x3d0 + battery_id;
  can_headers_.tpdo_3 = 0x3e0 + battery_id;	
}


bool KCBattery::hasPulse()
{
  bool has_heartbeat;

  time_t now_time = time(NULL);
  double time_since_heartbeat = difftime(now_time, last_heartbeat_time_);

  if (time_since_heartbeat > heartbeat_timeout_time_)
    has_heartbeat = false;
  else
    has_heartbeat = true;

  return has_heartbeat;

}

//bool KCBattery::hasCommunicated()
//{
//  bool b_res;
//
//  if (controller_mode_ == device_mode_.pre_initiation)
//    b_res = false;
//  else
//    b_res = true;
//
//    return b_res;
//}



bool KCBattery::evalReceivedMsg(CanFrame& msg)
{
  bool b_ret = false;

  //last_can_msg_ = msg;

  if (msg.getId() == can_headers_.tpdo_1)
  {
    char t_byte_1 = msg.getByte(1);
    battery_vars_.charge_fet = t_byte_1 & 1;
    battery_vars_.discharge_fet = t_byte_1 & (1 << 1);
    
    battery_vars_.voltage = (short)((msg.getByte(3) << 8) | (msg.getByte(2)) ) / 100.;
    
    short t_byte_4_5 = (msg.getByte(5) << 8) | (msg.getByte(4) );
    battery_vars_.a_over_volt = t_byte_4_5 & 1;
    battery_vars_.a_under_volt = t_byte_4_5 & (1 << 1);
    battery_vars_.a_over_temp = t_byte_4_5 & (1 << 2);
    battery_vars_.a_under_temp = t_byte_4_5 & (1 << 3);
    battery_vars_.a_over_charge = t_byte_4_5 & (1 << 4);
    battery_vars_.a_over_discharge = t_byte_4_5 & (1 << 5);
    battery_vars_.a_can_fail = t_byte_4_5 & (1 << 7);
    battery_vars_.a_cell_volt_sens_fault = t_byte_4_5 & (1 << 9);
    battery_vars_.a_bms_fail = t_byte_4_5 & (1 << 10);
    battery_vars_.a_short_circ_discharge = t_byte_4_5 & (1 << 11);
    battery_vars_.a_temp_sens_fault = t_byte_4_5 & (1 << 12);
    battery_vars_.a_over_volt_fault = t_byte_4_5 & (1 << 13);
    battery_vars_.a_under_volt_fault = t_byte_4_5 & (1 << 14);
    battery_vars_.a_pack_volt_sens_fault = t_byte_4_5 & (1 << 15);
    
    battery_vars_.temps[0] = msg.getByte(6);
    battery_vars_.temps[1] = msg.getByte(7);

  }
  else if (msg.getId() == can_headers_.tpdo_2)
  {
    battery_vars_.temps[2] = msg.getByte(0);
    battery_vars_.temps[3] = msg.getByte(1);
    battery_vars_.temps[4] = msg.getByte(2);
    battery_vars_.temps[5] = msg.getByte(3);
    battery_vars_.current = (short)((msg.getByte(5) << 8) | (msg.getByte(4)) ) / 100.;
    battery_vars_.temps[6] = msg.getByte(6);
  }

  else if (msg.getId() == can_headers_.tpdo_3)
  {
    //std::cout << "TPDO3" << std::endl;
    battery_vars_.soc = msg.getByte(0);
    //std::cout << "SOC: " << battery_vars_.soc << std::endl;

    battery_vars_.soh = msg.getByte(1);
    //std::cout << "SOH: " << battery_vars_.soh << std::endl;
    

    // THIS LOOKS WRONG WHY ARE THESE THE SAME
    battery_vars_.cycle_count = (msg.getByte(3) << 8) | (msg.getByte(2) );
    battery_vars_.capacity = (msg.getByte(3) << 8) | (msg.getByte(2) );

    b_ret = true;
  }

  //-----------------------
  // eval answers from PDO2
  else if (msg.getId() == can_headers_.tpdo_1)
  {
/*
    temp_data1 = (msg.getAt(1) << 8) | (msg.getAt(0) );

    temp_data2 = (msg.getAt(3) << 8) | (msg.getAt(2) );

    temp_data3 = (msg.getAt(5) << 8) | (msg.getAt(4) );

    temp_data4 = (msg.getAt(7) << 8) | (msg.getAt(6) );

    m1_motor_amps_ = (short)temp_data1 / 10.;
    //std::cout << "tpdo2_m1_amps: " << m1_motor_amps_ << "  ";

    m2_motor_amps_ = (short)temp_data2 / 10.;
    //std::cout << "tpdo2_m2_amps: " << m2_motor_amps_ << std::endl;

    m1_relative_power_ = (short)temp_data3;
    //std::cout << "tpdo2_m1_power: " << m1_relative_power_ << "  ";

    m2_relative_power_ = (short)temp_data4;
    //std::cout << "tpdo2_m2_power: " << m2_relative_power_ << std::endl;



*/
}
  return b_ret;
}



/*
void KCBattery::requestParamViaCan(char offset, char checksum)
{

  char request_chars[] = {offset, 0x00, 0x00, 0x00, 0x02, checksum, 0x00, 0x00};
  CanMsg can_request_msg;
  can_request_msg.m_iType = 2; //MSGTYPE_EXTENDED;
  can_request_msg.getId() = 0x321;
  can_request_msg.m_iLen = 6;
  can_request_msg.set(request_chars[0], request_chars[1], request_chars[2], request_chars[3], request_chars[4], request_chars[5], request_chars[6], request_chars[7]);

  //can_ctrl_->transmitMsg(can_0header_);
  can_ctrl_->transmitMsg(can_header_);
  can_ctrl_->transmitMsg(can_request_msg);
  //usleep(100000);

}

*/
// Controller config
//



void KCBattery::getBatteryData(CanBatteryItf::BatteryVars& battery_vars)
{
  battery_vars = battery_vars_;
}


int KCBattery::getCanId()
{
  return node_id_;
}

int KCBattery::getStateOfCharge()
{
  return battery_vars_.soc;
}

int KCBattery::getStateOfHealth()
{
  return battery_vars_.soh;
}

double KCBattery::getVoltage()
{
  return battery_vars_.voltage;
}

double KCBattery::getCurrent()
{
  return battery_vars_.current;
}


bool KCBattery::getChargeFet()
{
  return battery_vars_.charge_fet;
}
 
bool KCBattery::getDischargeFet()
{
  return battery_vars_.discharge_fet;
}

short KCBattery::getCycleCount()
{
  return battery_vars_.cycle_count;
}

short KCBattery::getCapacity()
{
  return battery_vars_.capacity;
}

std::vector<double> KCBattery::getTemps()
{
  return battery_vars_.temps;
}
 
bool KCBattery::getAOverVolt()
{
  return battery_vars_.a_over_volt;
}
 

bool KCBattery::getAUnderVolt()
{
  return battery_vars_.a_under_volt;
}
 
bool KCBattery::getAOverTemp()
{
  return battery_vars_.a_over_temp;
}
 
bool KCBattery::getAUnderTemp()
{
  return battery_vars_.a_under_temp;
}
 
bool KCBattery::getAOverCharge()
{
  return battery_vars_.a_over_charge;
}
 
bool KCBattery::getAOverDischarge()
{
  return battery_vars_.a_over_discharge;
}
 
bool KCBattery::getACanFail()
{
  return battery_vars_.a_can_fail;
}
 
bool KCBattery::getACellVoltSensFault()
{
  return battery_vars_.a_cell_volt_sens_fault;
}
 
bool KCBattery::getABmsFail()
{
  return battery_vars_.a_bms_fail;
}
 
bool KCBattery::getAShortCircuitDischarge()
{
  return battery_vars_.a_short_circ_discharge;
}
 
bool KCBattery::getATempSensFault()
{
  return battery_vars_.a_temp_sens_fault;
}
 
bool KCBattery::getAOverVoltFault()
{
  return battery_vars_.a_over_volt_fault;
}
 
bool KCBattery::getAUnderVoltFault()
{
  return battery_vars_.a_under_volt_fault;
}
 
bool KCBattery::getAPackVoltSensFault()
{
  return battery_vars_.a_pack_volt_sens_fault;
}
 
  
/*  
int KCBattery::getManufacturerAccess()
{
  return battery_vars_[VAR_MANUFACTURER_ACCESS].last_known_value;
}

int KCBattery::getRemainingCapacityAlarm()
{
  return battery_vars_[VAR_REMAINING_CAPACITY_ALARM].last_known_value;
}

int KCBattery::getRemainingTimeAlarm()
{
  return battery_vars_[VAR_REMAINING_TIME_ALARM].last_known_value;
}

int KCBattery::getBatteryMode()
{
  return battery_vars_[VAR_BATTERY_MODE].last_known_value;
}

int KCBattery::getAtRate()
{
  return battery_vars_[VAR_AT_RATE].last_known_value;
}

int KCBattery::getAtRateTimeToFull()
{
  return battery_vars_[VAR_AT_RATE_TIME_TO_FULL].last_known_value;
}

int KCBattery::getAtRateTimeToEmpty()
{
  return battery_vars_[VAR_AT_RATE_TIME_TO_EMPTY].last_known_value;
}

int KCBattery::getAtRateOK()
{
  return battery_vars_[VAR_AT_RATE_OK].last_known_value;
}

double KCBattery::getTemperature()
{
  double ret = battery_vars_[VAR_TEMPERATURE].last_known_value;
  ret = roundf(ret) / 100;
  return ret;
}
*/
/*
int KCBattery::getAverageCurrent()
{
  return battery_vars_[VAR_AVERAGE_CURRENT].last_known_value;
}

int KCBattery::getMaxError()
{
  return battery_vars_[VAR_MAX_ERROR].last_known_value;
}
*/


/*

int KCBattery::getAbsoluteStateOfCharge()
{
  return battery_vars_[VAR_ABSOLUTE_STATE_OF_CHARGE].last_known_value;
}

double KCBattery::getRemainingCapacity()
{
  return battery_vars_[VAR_REMAINING_CAPACITY].last_known_value / 10.;
}

double KCBattery::getFullChargeCapacity()
{
  return battery_vars_[VAR_FULL_CHARGE_CAPACITY].last_known_value / 10.;
}

int KCBattery::getRunTimeToEmpty()
{
  return battery_vars_[VAR_RUN_TIME_TO_EMPTY].last_known_value;
}

int KCBattery::getAverageTimeToEmpty()
{
  return battery_vars_[VAR_AVERAGE_TIME_TO_EMPTY].last_known_value;
}

int KCBattery::getAverageTimeToFull()
{
  return battery_vars_[VAR_AVEREAGE_TIME_TO_FULL].last_known_value;
}

int KCBattery::getChargingCurrent()
{
  return battery_vars_[VAR_CHARGING_CURRENT].last_known_value;
}

int KCBattery::getChargingVoltage()
{
  return battery_vars_[VAR_CHARGING_VOLTAGE].last_known_value;
}

int KCBattery::getBatteryStatus()
{
  return battery_vars_[VAR_BATTERY_STATUS].last_known_value;
}

int KCBattery::getCycleCount()
{
  return battery_vars_[VAR_CYCLE_COUNT].last_known_value;
}

int KCBattery::getDesignCapacity()
{
  return battery_vars_[VAR_DESIGN_CAPACITY].last_known_value;
}

int KCBattery::getDesignVoltage()
{
  return battery_vars_[VAR_DESIGN_VOLTAGE].last_known_value;
}

int KCBattery::getSpecificationInfo()
{
  //short spec = battery_vars_[VAR_SPECIFICATION_INFO].last_known_value;
  //std::bitset<16> spec_bit(spec);
  //std::cout << "spec: " << spec_bit << std::endl;
  return battery_vars_[VAR_SPECIFICATION_INFO].last_known_value;
}

int KCBattery::getManufacturerDate()
{
  return battery_vars_[VAR_MANUFACTURER_DATE].last_known_value;
}

int KCBattery::getSerialNumber()
{
    return battery_vars_[VAR_SERIAL_NUMBER].last_known_value;
}
*/


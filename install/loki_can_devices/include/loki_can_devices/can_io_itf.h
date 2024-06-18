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
 * Description: This is an interface for communicating with IO modules of the loki mobile robot
 *								
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *			
 * Author: Lars Grimstad, email:lgrimstad@sagarobotics.com
 *
 * Date of creation: Sep 2020
 * ToDo: - Clean up
 *
 *
 ****************************************************************/


#ifndef CANIOITF_INCLUDEDEF_H
#define CANIOITF_INCLUDEDEF_H

//#include <vector>

//-----------------------------------------------
//#include <time.h>
#include <map>
//#include <ctime>
#include "loki_can_devices/can_frame.h"
#include <boost/array.hpp>
//
//Needed?
//#include <stdint.h>
//-----------------------------------------------

/**
 * Class for communicating with IO modules of the loki mobile robot
 */
class CanIOItf
{
public:

  struct IMU //Changed not sure if tis works
  {
    boost::array<double, 4> orientation;
    boost::array<double, 9> orientation_covariance;
    boost::array<double, 3> angular_velocity;
    boost::array<double, 9> angular_velocity_covariance;
    boost::array<double, 3> linear_acceleration;
    boost::array<double, 9> linear_acceleration_covariance;
  };

  struct IOState
  {
    int id;
    std::string name;
    std::string version;
    std::vector<std::string> digital_names;
    std::vector<bool> digital_values;
    std::vector<std::string> analog_names;
    std::vector<int> analog_values;
    std::vector<double> ranges;
    std::vector<double> temps;
    std::vector<double> humidities;
    IMU imu;
  };


  /**
  * Sets address and other intial values
  * @param io_init_map map of initial values
  * @param can_frames can frames to set up device
  */
  virtual bool initIO(std::map<std::string, int> io_init_map, std::vector<CanFrame> &can_frames) = 0;
  
  
  /**
  * Sets name of IO module
  * @param name name of IO module
  */
  virtual void setName(std::string name) = 0;


  /**
  * Returns CAN ID of IO device
  */
  virtual int getID() = 0;


  /**
  * Populates map with service names and IDs
  * @param set_bool_map map to be populated
  */
  virtual void getSetBoolServices(std::map<int, std::string> &set_bool_map) = 0;

  /**
  * Evals a received message.
  * Only messages with fitting identifiers are evaluated.
  * @param msg message to be evaluated
  */
  virtual bool evalReceivedMsg(CanFrame& msg) = 0;

  /**
  * Sets relevant boolean variables
  * @param can_frames CAN frames to populate
  * @param service_id id of service
  * @param value value to set
  * @param success to store result
  * @param message to result message
  */
  virtual void callSetBoolService(std::vector<CanFrame> &can_frames, int service_id, bool value, bool &success, std::string &message) = 0;

  
  /**
  * Getter for IO module state
  * @param state to be populated with io state
  */
  virtual void getState(IOState &state) = 0;

    
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

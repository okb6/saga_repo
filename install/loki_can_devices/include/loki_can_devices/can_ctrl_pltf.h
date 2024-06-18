#ifndef CANCTRLPLTF_INCLUDEDEF_H
#define CANCTRLPLTF_INCLUDEDEF_H

#include <loki_can_devices/can_line_itf.h>
#include <loki_can_devices/can_line_socketcan.h>
#include <loki_can_devices/can_line_dummy.h>

#include <loki_can_devices/CanDriveItf.h>
#include <loki_can_devices/can_battery_itf.h>
#include <loki_can_devices/can_io_itf.h>

#include <loki_can_devices/RoboteqFbl2360.h>
#include <loki_can_devices/RoboteqFbl2360Diff.h>
#include <loki_can_devices/kc_battery.h>
#include <loki_can_devices/can_io_v1pcb.h>
#include <loki_can_devices/can_io_v1uv.h>
#include <loki_msgs/msg/can_frame.h>
#include <loki_can_devices/can_frame.h>
#include <loki_msgs/msg/controller_array.h>
#include <loki_msgs/msg/battery_array.h>
#include <map>
#include <boost/thread/mutex.hpp>
#include <rclcpp/rclcpp.hpp>


/** 
 *  \brief     Implements nodes on arbritary CAN network
 *  \details   This class is used to communicate with can devices on the Thorvald II robotic platform
 *  \author    Lars Grimstad
 *  \version   2.0
 *  \date      2017-2018
 *  \copyright LGRM, all rights reserved.
 */
class CanCtrlPltf // : public CanCtrlPltfItf
{
public:

 /**
  * Default constructor.
  */
  CanCtrlPltf();
 /**
  * Default destructor.
  */
  ~CanCtrlPltf();
 /**
  * Selection of available CAN adaptors
  */
  enum CanAdapters
  {
    CAN_ITF_NONE,
    CAN_ITF_SOCKETCAN
  };
 /**
  * TODO: add description
  */ 
  struct BaseState
  {
    int drive_mode;
    std::vector<double> prop_speed;
    std::vector<double> prop_pos;
    std::vector<double> steer_speed;
    std::vector<double> steer_pos;
    std::vector<double> steer_max_speed;
    std::vector<int> channel;
  };

  struct IOSetBool
  {
    int io_idx;
    int io_service_id;
    std::string service_name; 
  };

 /**
  * Initializes all platform CAN nodes specified in argument
  * \param can_interface_type
  * \param can_interface_name
  * \param motor_drives A vector of module parameter maps
  * \param battery_map
  */
  bool init_can();

  bool initPltf(int can_interface_type, std::string can_interface_name, 
                std::vector<std::map<std::string, double> > motor_drives, 
                std::vector<std::map<std::string, double> > battery_map,
                std::vector<std::map<std::string, int> > io_map);
 /**
  * Set module parameters
  * \param motor_drives A vector of moudule parameter maps
  */
  void setParams(std::vector<std::map<std::string, double> > motor_drives);
 /**
  * Sets parameter for a given module
  * \param node_id The CAN node ID of drive
  * \param params A map of module parameters
  */
  void setDriveParams(int node_id, std::map<std::string, double> params);
 /**
  * Sends commands to all motor drives
  * \param commands The commands
  */
  void sendCommandsToAllDrives(BaseState commands);
 /**
  * Sends commands to all motor drives
  * \param commands The commands
  */
  int sendDeviceCommand(CanFrame can_frame);
 /**
  * Will ask all motor drives to simulate feedback from commands
  * \param commands The commands
  */
  void simulateAllDrives(BaseState commands);
 /**
  * Sends commands to drive
  * \param drive_index The drive index
  * \param node_id The CAN node ID
  * \param speed The speed command
  * \param position The steering position command
  * \param pos_max_vel The maximum speed of steering (currently not used by any modules)
  */
  int setCommand(int drive_index, int node_id, double speed, double position, double pos_max_vel);
 /**
  * Gets state of all batteries
  */
  // WHATS THIS?
  void getAllBatteryVars();
 /**
  * Sets motor controller parameter
  * \param can_id The CAN node ID
  * \param setup_id The ID of the parameter tho change
  * \param setup_value The new value of the parameter
  */
  void setupMotorController(int can_id, int setup_id, int setup_value);
 /**
  * Permanently redefines steering zero position to all steering position
  */
  void setCurrentPosAsZeroAll();
 /**
  * Permanently redefines steering zero position to current steering position
  * \param can_id The CAN node ID
  */
  void setCurrentPosAsZero(int can_id);
 /**
  * Starts homing of steering motors
  */
  bool homeSteeringAll();
 /**
  * Starts homing of steering motors
  * \param can_id The CAN node ID
  */
  bool homeSteering(int can_id);
 /**
  * Triggers an evaluation of the can-buffer.
  * \called by: void BaseDriver::evalCanBuffer()
  * \param can_msgs_base A vector for publishing CAN frames from base 
  * \param can_msgs_device A vector for publishing CAN frames from device 
  */
  void evalCanBuffer(std::vector<CanFrame>& can_msgs_base,
                     std::vector<CanFrame>& can_msgs_device);
 /**
  * Gets motor drive CAN ID from index.
  * \param index
  */
  int getMotorControllerCanId(int index);
 /**
  * Gets motor drive index from CAN ID.
  * \param can_id
  */
  int getMotorControllerIndex(int can_id);
 /**
  * Gets state of joints
  * \param base_state The output base state message
  */
  void getBaseState(BaseState& base_state);
 /**
  * Gets state of motor controllers
  * \param controller_array_out The output controller array message
  */
  void getControllerArray(std::vector<CanDriveItf::ControllerVars>& controller_vars_out);
 /**
  * Gets setup map of controller
  * \param can_id
  * \param setup_map The output setup map
  */
  void getControllerSetupMap(int can_id, std::vector<std::string> &setup_map);
  
  /**
   * TODO: Functions below??
   */  
  //TEMP
  int getBatteryStateOfCharge();
  void getAllBatteryVars(std::vector<CanBatteryItf::BatteryVars>& batt_array_in);

  void getSetBoolServices(std::map<int, std::string> &set_bool_map);
  void callSetBoolService(int unique_service_id, bool value, bool &success, std::string &message);
  void getIOStates(std::vector<CanIOItf::IOState> &io_states);


protected:
/**
 * TODO: variables below - description ... 
 */ 

  //--------------------------------- internal functions
  void initMotorDrives(std::vector<std::map<std::string, double> > drive_map);
  void initBatteries(std::vector<std::map<std::string, double> > battery_map);
  void initIOs(std::vector<std::map<std::string, int> > io_map);
  
  std::vector<CanFrame> can_frames_tx_;
 

 /**
  * Reads configuration of can node and components from Inifile
  * (should be adapted to use ROS-Parameter file)
  */
  std::string sIniDirectory;                      ///< TODO: <description>
  std::string sComposed;                          ///< TODO: <description>


  //--------------------------------- Variables
  boost::mutex mutex_;                            ///< TODO: <description>

  //--------------------------------- Components
  // Can-Interface

  int number_of_motor_controllers_;               ///< TODO: <description>  

  // pointer to each motors Can-Itf
  can_line_itf::CanLineItf *can_line_;            ///< TODO: <description>
  std::vector<CanDriveItf*> motor_controllers_;   ///< TODO: <description>
  std::vector<CanBatteryItf*> batteries_;         ///< TODO: <description>
  std::vector<CanIOItf*> ios_;         ///< TODO: <description>
  std::vector<int> motor_controllers_index_;      ///< Vector for storing the index of the motor_controllers_ used for motor_controllers_ as in initMotorDrives()

  std::map<int, IOSetBool> set_bool_services_;
};
//-----------------------------------------------
#endif

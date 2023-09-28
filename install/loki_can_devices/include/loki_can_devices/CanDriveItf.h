#ifndef CANDRIVEITF_INCLUDEDEF_H
#define CANDRIVEITF_INCLUDEDEF_H

//-----------------------------------------------
#include <loki_can_devices/can_frame.h>
#include <map>
#include <vector>
#include <string>
//-----------------------------------------------

/**
 * Interface for a drive.
 *  \ingroup DriversCanModul	
 */


class CanDriveItf
{
public:



  enum ControllerType
  {
    TYPE_PROP_STEER = 0,
    TYPE_PROP_PROP = 1,

  };


  enum ModuleMode
  {
    MODE_DRIVE = 0,
    MODE_HOME = 1,
    MODE_DECOUPLED = 2,
    MODE_ONLINE = 98,
    MODE_PRE_INITIATION = -99,
    MODE_LOST_CONNECTION = -98,
    MODE_INITIALISING = -97
  };

  struct MotorVars
  {
    std::string type;
    double speed;
    double position;
    double motor_amps;
    int relative_power;
  };

  struct StatusFlag
  {
    std::string status_name;
    bool status_value;
  };

  struct ControllerVars
  {
    std::string name;
    std::string type;
    std::string version;
    int can_id;
    int drive_direction;
    int home_speed;
    int home_count;

    int controller_mode;
    double battery_volts;
    double battery_amps;
    std::vector<short> temps;

    std::vector<StatusFlag> status_flags;

    std::vector<MotorVars> motor_vars;
  };


//bool[] status_flags
//    MODE_DRIVE = 0,
//    MODE_HOME = 1,
//    MODE_DECOUPLED = 2,
//    MODE_PRE_INITIATION = -99,
//    MODE_LOST_CONNECTION = -98,
//    MODE_INITIALISING = -97
//  };


 /**
  * Sets the drive parameters.
  */
  virtual void setDriveParams(int channel, std::map<std::string, double> param_map) = 0;
 /**
  * Sets CAN PDO addresses
  */
  virtual void setCanOpenParam(int node_id) = 0;
 /**
  * Sends setup message to controller
  */
  virtual void setupController(std::vector<CanFrame>& msgs, int setup_id, int setup_value) = 0;
 /**
  * Sets home count so that current position is zero
  */
  virtual void setCurrentPosAsZero(std::vector<CanFrame>& msgs) = 0;
 /**
  * Sends speed and position command to controller
  */
  virtual bool sendDriveCommand(std::vector<CanFrame>& msgs, int channel, double speed, double position, double position_max_speed, bool invert_as_needed = true) = 0;
 /**
  * Evaluate received CAN message
  */
  virtual bool evalReceivedMsg(CanFrame& msg) = 0; 
 /**
  * Simulate drive
  */
  virtual void simulateDrive(int channel, double speed_command, double position_command, bool invert_as_needed = true) = 0; 
 /**
  * Get drive name
  */
  virtual void getControllerVars(ControllerVars& controller_vars) = 0;
 /**
  * Get drive name
  */
  virtual std::string getName() = 0;
 /**
  * Get CAN id
  */
  virtual int getCanId() = 0;
 /**
  * Get drive direction
  */
  virtual int getDriveDirection() = 0;
 /**
  * Get home speed
  */ 
  virtual int getHomeSpeed() = 0;
 /**
  * Get home count
  */ 
  virtual int getHomeCount() = 0;
 /**
  * Get controller mode
  */ 
  virtual int getControllerMode() = 0;  
 /**
  * Get drive input volts
  */ 
  virtual double getBatteryVolts() = 0;  
 /**
  * Get drive input amps
  */ 
  virtual double getBatteryAmps() = 0;    
 /**
  * Get temperature
  */ 
  virtual int getMaxTemp() = 0;
 /**
  * Get drive status flags
  */ 
  virtual std::vector<unsigned char> getStatusFlags() = 0;
 /**
  * Check if drive has channel
  */ 
  virtual bool hasIndex(int index) = 0;  
 /**
  * Get channel speed
  */ 
  virtual double getSpeed(int channel) = 0;  
 /**
  * Get channel position
  */ 
  virtual double getPosition(int channel) = 0;  
 /**
  * Get motor current
  */ 
  virtual double getMotorAmps(int channel) = 0;  
 /**
  * Get power relative to max
  */ 
  virtual int getRelativePower(int channel) = 0;
 /**
  * Get propulsion speed
  */ 
  virtual double getPropulsionSpeed(int channel) = 0;  
 /**
  * Get propulsion position
  */ 
  virtual double getPropulsionPosition(int channel) = 0;
 /**
  * Get steering speed
  */ 
  //virtual int getSteeringSpeed(int channel) = 0; 
 /**
  * Get steering position
  */ 
  virtual double getSteeringPosition(int channel) = 0;
 /**
  * Get controller setup map
  */ 
  virtual std::vector<std::string> getControllerSetupMap() = 0;
 /**
  * Send heartbeat (used?)
  */ 
  //virtual bool sendsHeartbeat() = 0;  
 /**
  * Checks if drive has communicated
  */ 
  //virtual bool hasCommunicated() = 0;
 /**
  * Home steering
  */ 
  virtual bool homeSteering(std::vector<CanFrame>& msgs) = 0;
};
//-----------------------------------------------
#endif


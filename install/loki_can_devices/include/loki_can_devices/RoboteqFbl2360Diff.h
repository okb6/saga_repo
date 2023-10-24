#ifndef ROBOTEQFBL2360_DIFF_INCLUDEDEF_H
#define ROBOTEQFBL2360_DIFF_INCLUDEDEF_H


//-----------------------------------------------
#include "loki_can_devices/CanDriveItf.h"
#include "loki_msgs/msg/can_frame.h"
#include "loki_can_devices/can_frame.h"
#include <time.h>
#include <map>
#include <ctime>
#include <rclcpp/rclcpp.hpp>
//-----------------------------------------------

/**
 * Driver class for the motor drive of type Roboteq FBL 2360.
 * \ingroup DriversCanModul	
 */
class RoboteqFbl2360Diff : public CanDriveItf
{
public:
  enum StatusFlagTypes
  {
    IND_FEEDBACK_SPEED_ERROR,
    IND_FEEDBACK_POS_ERROR,
    IND_ALIGNMENT_ERROR,
    IND_POWER_STAGE_OFF,
    IND_STALL_DETECTED,
    IND_HOMING_REACHED_MAX_COUNT,
    IND_ILLEGAL_COMMAND,
    IND_CONTROLLER_OK,
    NUMBER_OF_STATUS_FLAGS
  };

  /**
   * Identifier of the CAN messages.
   */
  struct CanHeaders
  {
    int iTxPDO1;
    int iTxPDO2;
    int iTxPDO3;
    int iTxPDO4;

    int iRxPDO1;
    int iRxPDO2;
    int iRxPDO3;
    int iRxPDO4;

    int heartbeat;

    // SDO server upload and download request identifier
    int iTxSDO;
    int iRxSDO;


  };

  /**
  * Possible controller modes
  */
  //struct ModuleMode
  //{
  //  int drive;
  //  int home;
  //  int decouple;
  //  int pre_initiation;
  //};


  struct DriveParam
  {
    double radius_wheel;
    double command_scaling_factor;
    double position_limit;
    double gear_ratio;
    double encoder_ppr;
    double sim_a;
    double sim_v;
  };

  // ------------------------- Interface
  /**
   * Sets the CAN interface.
   */
  //void setCanItf(CanItf* pCanItf){can_ctrl_ = pCanItf; }

  /**
   * Sets the drive parameters.
   */
  void setDriveParams(int channel, std::map<std::string, double> param_map);


  /**
   * Default constructor.
   */
  RoboteqFbl2360Diff();

  /**
  * Sets CAN PDO addresses
  */
  void setCanOpenParam(int node_id);

  /**
  * Sends setup PDO to controller
  */
  void setupController(std::vector<CanFrame>& msgs, int setup_id, int setup_value);
 /**
  * Sets home count so that current position is zero
  */
  void setCurrentPosAsZero(std::vector<CanFrame>& msgs);

  /**
  * Sets the controller in drive mode
  */
  void driveMode();

  /**
  * Start homing of steering motor
  */
  bool homeSteering(std::vector<CanFrame>& msgs);

  /**
  * Sets motors in open loop speed mode.
  */
  void decouple();

  /**
  * Sends speed and position command to controller
  */
  //void sendDriveCommand(int speed, int position, int position_max_speed);
  
  /**
  * Sends speed and position command to controller
  */
  bool sendDriveCommand(std::vector<CanFrame>& msgs, int channel, double speed, double position, double position_max_speed, bool invert_as_needed = true);

  /**
  * Sends speed commands to controller in diff drive robot
  */
  //void sendDiffDriveCommand(int speed_1, int speed_2);

  /**
  * Set acceleration
  */
  void sendAccelerationSDO(int channel, int value);

  /**
  * Set deceleration
  */
  void sendDecelerationSDO(int channel, int value);

  /**
   * Sends a heartbeat to the CAN-network to keep all listening watchdogs sleeping
   * NOT USED
   */
  void sendHeartbeat();

/**
  * Evals a received message.
  * Only messages with fitting identifiers are evaluated.
  * @param msg message to be evaluated.
  */
  bool evalReceivedMsg(CanFrame& msg);


  void simulateDrive(int channel, double speed_command, double position_command, bool invert_as_needed = true);

  
  void setChannelOneId(int id);

  // getters
  void getControllerVars(ControllerVars& controller_vars);
  std::string getName();
  int getCanId();
  int getDriveDirection();
  int getHomeSpeed();
  int getHomeCount();

  int getControllerMode();
  double getBatteryVolts();
  double getBatteryAmps();
  int getMaxTemp();
  std::vector<unsigned char> getStatusFlags();

  bool hasIndex(int index);
  double getSpeed(int channel);
  double getPosition(int channel);
  double getMotorAmps(int channel);
  // int getPropulsionBatteryAmps();
  int getRelativePower(int channel);

  double getPropulsionSpeed(int channel);
  double getPropulsionPosition(int channel);

  //int getSteeringSpeed(int channel);
  double getSteeringPosition(int channel);
  double getSteeringMotorAmps();
  // int getSteeringBatteryAmps();
  int getSteeringRelativePower();

  std::vector<std::string> getControllerSetupMap();

  //bool sendsHeartbeat();
  //bool hasCommunicated();

	
	
    
protected:

    // controller setup map
    const static std::string CONTROLLER_SETUP_MAP[];

    // ------------------------- Parameters
    CanHeaders can_headers_;
    //ModuleMode module_mode_;
    DriveParam m1_params_;
    DriveParam m2_params_;
    //DriveParam m_DriveParam;
    //bool m_bLimitSwitchEnabled;
    //ParamType m_Param;

    // ------------------------- Variables
    //CanItf*can_ctrl_;
    //CanMsg last_can_msg_;

    ControllerVars controller_vars_;



    // controller config
    std::string name_;
    int node_id_;
    int drive_direction_;
    int home_speed_;
    int home_count_;

    // controller state
    int controller_mode_;
    double battery_volts_;
    double battery_amps_;
    int max_temp_;
    std::vector<unsigned char> status_flags_;
    char status_flags_old_;

    // motor 1 state
    int m1_id_;
    double m1_vel_;
    double m1_pos_;
    double m1_motor_amps_;
    //int m1_battery_amps_;
    int m1_relative_power_;
    bool m1_sim_command_received_;
    bool m1_command_received_;
    double m1_latest_sim_command_;
    double m1_latest_command_;

    // motor 2 state
    int m2_id_;
    double m2_vel_;
    double m2_pos_;
    double m2_motor_amps_;
    //int m2_battery_amps_;
    int m2_relative_power_;
    bool m2_sim_command_received_;
    bool m2_command_received_;
    double m2_latest_sim_command_;
    double m2_latest_command_;

    time_t last_heartbeat_time_;
    double heartbeat_timeout_time_;

    bool drive_inverted_;
    //bool homing;


    //std::string m_sErrorMessage;

    std::map<std::string, double> drive_parameters_;
    rclcpp::Time previous_simulation_timestep_;
    void updateWheelPos(double speed_1, double speed_2, double dt);

    int command_seq_;

  //	segData seg_Data;


    // ------------------------- Member functions

    /**
    * Sets controller in selected mode
    */
    void sendModeCommand(int mode);

    /**
     * Sends selected PDO with two integer values.
     */
    void sendPDOdownload(int pdoNum, int iData1, int iData2);

    /**
    * Sends selected PDO with four integer values.
    */
    void sendPDOdownload(int pdoNum, int iData1, int iData2, int iData3, int iData4);

    /**
     * CANopen: This protocol cancels an active segmented transmission due to the given Error Code
     */
    void sendSDOAbort(int iObjIndex, int iObjSubIndex, unsigned int iErrorCode);

    /**
     * CANopen: Downloads a service data object (master to device). (in expedited transfer mode, means in only one message)
     */
    void sendSDODownload(int iObjIndex, int iObjSub, int iData);

    /**
     * CANopen: Request a service data object (device to master).
     */
    void sendSDOUpload(int iObjIndex, int iObjSubIndex);



};
//-----------------------------------------------
#endif

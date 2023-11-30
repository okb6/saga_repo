cmake_minimum_required(VERSION 3.8)
project(loki_msgs)

find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME} 
  "msg/ThorvaldIO.msg"
  "msg/DriveInverted.msg"
  "msg/BaseState.msg"
  "msg/BatteryAlarms.msg"
  "msg/BatteryArray.msg"
  "msg/BatteryData.msg"
  "msg/CANFrame.msg"
  "msg/ControllerArray.msg"
  "msg/ControllerConfig.msg"
  "msg/ControllerData.msg"
  "msg/ControllerInfo.msg"
  "msg/ControllerState.msg"
  "msg/DriveParam.msg"
  "msg/EnclosureState.msg"
  "msg/IOArray.msg"
  "msg/IOState.msg"
  "msg/MotorState.msg"
  "msg/ControllerStatusFlag.msg"
  "srv/DigitalWrite.srv"
  "srv/CanID.srv"
  "srv/DriveParams.srv"
  "srv/MotorControllerSetup.srv"
  "srv/SwitchBool.srv"
  "srv/BatteryVars.srv"
  "srv/ContArray.srv"
  "srv/CotMap.srv"
  "srv/DeviceCmds.srv"
  "srv/DriveCmds.srv"
  "srv/EvalCanBuffer.srv"
  "srv/GetSetBool.srv"
  "srv/HomesteeringAll.srv"
  "srv/InitPltf.srv"
  "srv/MotCot.srv"
  "srv/PosZero.srv"
  "srv/PosZeroAll.srv"
  "srv/SetBools.srv"
  "srv/SimDrive.srv"
  "srv/StateBase.srv"
  "srv/StatesOfIO.srv"
  "srv/Params.srv"
  "srv/HomeS.srv"

  DEPENDENCIES 
  std_msgs
  sensor_msgs 
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/MotorControllerSetup.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__MOTOR_CONTROLLER_SETUP__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__MOTOR_CONTROLLER_SETUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/motor_controller_setup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorControllerSetup_Request_setup_value
{
public:
  explicit Init_MotorControllerSetup_Request_setup_value(::loki_msgs::srv::MotorControllerSetup_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::MotorControllerSetup_Request setup_value(::loki_msgs::srv::MotorControllerSetup_Request::_setup_value_type arg)
  {
    msg_.setup_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::MotorControllerSetup_Request msg_;
};

class Init_MotorControllerSetup_Request_setup_id
{
public:
  explicit Init_MotorControllerSetup_Request_setup_id(::loki_msgs::srv::MotorControllerSetup_Request & msg)
  : msg_(msg)
  {}
  Init_MotorControllerSetup_Request_setup_value setup_id(::loki_msgs::srv::MotorControllerSetup_Request::_setup_id_type arg)
  {
    msg_.setup_id = std::move(arg);
    return Init_MotorControllerSetup_Request_setup_value(msg_);
  }

private:
  ::loki_msgs::srv::MotorControllerSetup_Request msg_;
};

class Init_MotorControllerSetup_Request_can_id
{
public:
  Init_MotorControllerSetup_Request_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControllerSetup_Request_setup_id can_id(::loki_msgs::srv::MotorControllerSetup_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_MotorControllerSetup_Request_setup_id(msg_);
  }

private:
  ::loki_msgs::srv::MotorControllerSetup_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::MotorControllerSetup_Request>()
{
  return loki_msgs::srv::builder::Init_MotorControllerSetup_Request_can_id();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorControllerSetup_Response_status
{
public:
  explicit Init_MotorControllerSetup_Response_status(::loki_msgs::srv::MotorControllerSetup_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::MotorControllerSetup_Response status(::loki_msgs::srv::MotorControllerSetup_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::MotorControllerSetup_Response msg_;
};

class Init_MotorControllerSetup_Response_message
{
public:
  Init_MotorControllerSetup_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControllerSetup_Response_status message(::loki_msgs::srv::MotorControllerSetup_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MotorControllerSetup_Response_status(msg_);
  }

private:
  ::loki_msgs::srv::MotorControllerSetup_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::MotorControllerSetup_Response>()
{
  return loki_msgs::srv::builder::Init_MotorControllerSetup_Response_message();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__MOTOR_CONTROLLER_SETUP__BUILDER_HPP_

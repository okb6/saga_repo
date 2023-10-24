// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/controller_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerData_motor_state
{
public:
  explicit Init_ControllerData_motor_state(::loki_msgs::msg::ControllerData & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ControllerData motor_state(::loki_msgs::msg::ControllerData::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ControllerData msg_;
};

class Init_ControllerData_controller_state
{
public:
  explicit Init_ControllerData_controller_state(::loki_msgs::msg::ControllerData & msg)
  : msg_(msg)
  {}
  Init_ControllerData_motor_state controller_state(::loki_msgs::msg::ControllerData::_controller_state_type arg)
  {
    msg_.controller_state = std::move(arg);
    return Init_ControllerData_motor_state(msg_);
  }

private:
  ::loki_msgs::msg::ControllerData msg_;
};

class Init_ControllerData_controller_config
{
public:
  Init_ControllerData_controller_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerData_controller_state controller_config(::loki_msgs::msg::ControllerData::_controller_config_type arg)
  {
    msg_.controller_config = std::move(arg);
    return Init_ControllerData_controller_state(msg_);
  }

private:
  ::loki_msgs::msg::ControllerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ControllerData>()
{
  return loki_msgs::msg::builder::Init_ControllerData_controller_config();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__BUILDER_HPP_

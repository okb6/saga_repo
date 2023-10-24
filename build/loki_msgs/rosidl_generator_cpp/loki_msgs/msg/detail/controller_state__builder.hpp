// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/controller_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerState_status_flags
{
public:
  explicit Init_ControllerState_status_flags(::loki_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ControllerState status_flags(::loki_msgs::msg::ControllerState::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_temps
{
public:
  explicit Init_ControllerState_temps(::loki_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_status_flags temps(::loki_msgs::msg::ControllerState::_temps_type arg)
  {
    msg_.temps = std::move(arg);
    return Init_ControllerState_status_flags(msg_);
  }

private:
  ::loki_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_battery_amps
{
public:
  explicit Init_ControllerState_battery_amps(::loki_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_temps battery_amps(::loki_msgs::msg::ControllerState::_battery_amps_type arg)
  {
    msg_.battery_amps = std::move(arg);
    return Init_ControllerState_temps(msg_);
  }

private:
  ::loki_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_battery_volts
{
public:
  explicit Init_ControllerState_battery_volts(::loki_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_battery_amps battery_volts(::loki_msgs::msg::ControllerState::_battery_volts_type arg)
  {
    msg_.battery_volts = std::move(arg);
    return Init_ControllerState_battery_amps(msg_);
  }

private:
  ::loki_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_controller_mode
{
public:
  Init_ControllerState_controller_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerState_battery_volts controller_mode(::loki_msgs::msg::ControllerState::_controller_mode_type arg)
  {
    msg_.controller_mode = std::move(arg);
    return Init_ControllerState_battery_volts(msg_);
  }

private:
  ::loki_msgs::msg::ControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ControllerState>()
{
  return loki_msgs::msg::builder::Init_ControllerState_controller_mode();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_

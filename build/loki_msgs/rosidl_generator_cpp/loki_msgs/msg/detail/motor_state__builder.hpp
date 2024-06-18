// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorState_relative_power
{
public:
  explicit Init_MotorState_relative_power(::loki_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::MotorState relative_power(::loki_msgs::msg::MotorState::_relative_power_type arg)
  {
    msg_.relative_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::MotorState msg_;
};

class Init_MotorState_motor_amps
{
public:
  explicit Init_MotorState_motor_amps(::loki_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_relative_power motor_amps(::loki_msgs::msg::MotorState::_motor_amps_type arg)
  {
    msg_.motor_amps = std::move(arg);
    return Init_MotorState_relative_power(msg_);
  }

private:
  ::loki_msgs::msg::MotorState msg_;
};

class Init_MotorState_position
{
public:
  explicit Init_MotorState_position(::loki_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_motor_amps position(::loki_msgs::msg::MotorState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorState_motor_amps(msg_);
  }

private:
  ::loki_msgs::msg::MotorState msg_;
};

class Init_MotorState_speed
{
public:
  explicit Init_MotorState_speed(::loki_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_position speed(::loki_msgs::msg::MotorState::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorState_position(msg_);
  }

private:
  ::loki_msgs::msg::MotorState msg_;
};

class Init_MotorState_type
{
public:
  Init_MotorState_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_speed type(::loki_msgs::msg::MotorState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MotorState_speed(msg_);
  }

private:
  ::loki_msgs::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::MotorState>()
{
  return loki_msgs::msg::builder::Init_MotorState_type();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

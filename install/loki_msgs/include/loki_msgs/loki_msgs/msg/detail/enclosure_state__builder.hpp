// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/enclosure_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_EnclosureState_analog_pin_values
{
public:
  explicit Init_EnclosureState_analog_pin_values(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::EnclosureState analog_pin_values(::loki_msgs::msg::EnclosureState::_analog_pin_values_type arg)
  {
    msg_.analog_pin_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_analog_pin_numbers
{
public:
  explicit Init_EnclosureState_analog_pin_numbers(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_analog_pin_values analog_pin_numbers(::loki_msgs::msg::EnclosureState::_analog_pin_numbers_type arg)
  {
    msg_.analog_pin_numbers = std::move(arg);
    return Init_EnclosureState_analog_pin_values(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_digital_pin_values
{
public:
  explicit Init_EnclosureState_digital_pin_values(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_analog_pin_numbers digital_pin_values(::loki_msgs::msg::EnclosureState::_digital_pin_values_type arg)
  {
    msg_.digital_pin_values = std::move(arg);
    return Init_EnclosureState_analog_pin_numbers(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_digital_pin_numbers
{
public:
  explicit Init_EnclosureState_digital_pin_numbers(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_digital_pin_values digital_pin_numbers(::loki_msgs::msg::EnclosureState::_digital_pin_numbers_type arg)
  {
    msg_.digital_pin_numbers = std::move(arg);
    return Init_EnclosureState_digital_pin_values(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_rl5_on
{
public:
  explicit Init_EnclosureState_rl5_on(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_digital_pin_numbers rl5_on(::loki_msgs::msg::EnclosureState::_rl5_on_type arg)
  {
    msg_.rl5_on = std::move(arg);
    return Init_EnclosureState_digital_pin_numbers(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_rl3_on
{
public:
  explicit Init_EnclosureState_rl3_on(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_rl5_on rl3_on(::loki_msgs::msg::EnclosureState::_rl3_on_type arg)
  {
    msg_.rl3_on = std::move(arg);
    return Init_EnclosureState_rl5_on(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_motor_power_control_on
{
public:
  explicit Init_EnclosureState_motor_power_control_on(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_rl3_on motor_power_control_on(::loki_msgs::msg::EnclosureState::_motor_power_control_on_type arg)
  {
    msg_.motor_power_control_on = std::move(arg);
    return Init_EnclosureState_rl3_on(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_contactors_on
{
public:
  explicit Init_EnclosureState_contactors_on(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_motor_power_control_on contactors_on(::loki_msgs::msg::EnclosureState::_contactors_on_type arg)
  {
    msg_.contactors_on = std::move(arg);
    return Init_EnclosureState_motor_power_control_on(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_esd_ok
{
public:
  explicit Init_EnclosureState_esd_ok(::loki_msgs::msg::EnclosureState & msg)
  : msg_(msg)
  {}
  Init_EnclosureState_contactors_on esd_ok(::loki_msgs::msg::EnclosureState::_esd_ok_type arg)
  {
    msg_.esd_ok = std::move(arg);
    return Init_EnclosureState_contactors_on(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

class Init_EnclosureState_communication_state
{
public:
  Init_EnclosureState_communication_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnclosureState_esd_ok communication_state(::loki_msgs::msg::EnclosureState::_communication_state_type arg)
  {
    msg_.communication_state = std::move(arg);
    return Init_EnclosureState_esd_ok(msg_);
  }

private:
  ::loki_msgs::msg::EnclosureState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::EnclosureState>()
{
  return loki_msgs::msg::builder::Init_EnclosureState_communication_state();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_IOState_imu
{
public:
  explicit Init_IOState_imu(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::IOState imu(::loki_msgs::msg::IOState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_humidities
{
public:
  explicit Init_IOState_humidities(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_imu humidities(::loki_msgs::msg::IOState::_humidities_type arg)
  {
    msg_.humidities = std::move(arg);
    return Init_IOState_imu(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_temps
{
public:
  explicit Init_IOState_temps(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_humidities temps(::loki_msgs::msg::IOState::_temps_type arg)
  {
    msg_.temps = std::move(arg);
    return Init_IOState_humidities(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_ranges
{
public:
  explicit Init_IOState_ranges(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_temps ranges(::loki_msgs::msg::IOState::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return Init_IOState_temps(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_digital_values
{
public:
  explicit Init_IOState_digital_values(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_ranges digital_values(::loki_msgs::msg::IOState::_digital_values_type arg)
  {
    msg_.digital_values = std::move(arg);
    return Init_IOState_ranges(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_digital_names
{
public:
  explicit Init_IOState_digital_names(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_digital_values digital_names(::loki_msgs::msg::IOState::_digital_names_type arg)
  {
    msg_.digital_names = std::move(arg);
    return Init_IOState_digital_values(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_analog_values
{
public:
  explicit Init_IOState_analog_values(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_digital_names analog_values(::loki_msgs::msg::IOState::_analog_values_type arg)
  {
    msg_.analog_values = std::move(arg);
    return Init_IOState_digital_names(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_analog_names
{
public:
  explicit Init_IOState_analog_names(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_analog_values analog_names(::loki_msgs::msg::IOState::_analog_names_type arg)
  {
    msg_.analog_names = std::move(arg);
    return Init_IOState_analog_values(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_version
{
public:
  explicit Init_IOState_version(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_analog_names version(::loki_msgs::msg::IOState::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_IOState_analog_names(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_name
{
public:
  explicit Init_IOState_name(::loki_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_version name(::loki_msgs::msg::IOState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IOState_version(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

class Init_IOState_id
{
public:
  Init_IOState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOState_name id(::loki_msgs::msg::IOState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IOState_name(msg_);
  }

private:
  ::loki_msgs::msg::IOState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::IOState>()
{
  return loki_msgs::msg::builder::Init_IOState_id();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ControllerConfig.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/controller_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerConfig_home_count
{
public:
  explicit Init_ControllerConfig_home_count(::loki_msgs::msg::ControllerConfig & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ControllerConfig home_count(::loki_msgs::msg::ControllerConfig::_home_count_type arg)
  {
    msg_.home_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

class Init_ControllerConfig_home_speed
{
public:
  explicit Init_ControllerConfig_home_speed(::loki_msgs::msg::ControllerConfig & msg)
  : msg_(msg)
  {}
  Init_ControllerConfig_home_count home_speed(::loki_msgs::msg::ControllerConfig::_home_speed_type arg)
  {
    msg_.home_speed = std::move(arg);
    return Init_ControllerConfig_home_count(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

class Init_ControllerConfig_drive_direction
{
public:
  explicit Init_ControllerConfig_drive_direction(::loki_msgs::msg::ControllerConfig & msg)
  : msg_(msg)
  {}
  Init_ControllerConfig_home_speed drive_direction(::loki_msgs::msg::ControllerConfig::_drive_direction_type arg)
  {
    msg_.drive_direction = std::move(arg);
    return Init_ControllerConfig_home_speed(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

class Init_ControllerConfig_can_id
{
public:
  explicit Init_ControllerConfig_can_id(::loki_msgs::msg::ControllerConfig & msg)
  : msg_(msg)
  {}
  Init_ControllerConfig_drive_direction can_id(::loki_msgs::msg::ControllerConfig::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_ControllerConfig_drive_direction(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

class Init_ControllerConfig_version
{
public:
  explicit Init_ControllerConfig_version(::loki_msgs::msg::ControllerConfig & msg)
  : msg_(msg)
  {}
  Init_ControllerConfig_can_id version(::loki_msgs::msg::ControllerConfig::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_ControllerConfig_can_id(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

class Init_ControllerConfig_type
{
public:
  explicit Init_ControllerConfig_type(::loki_msgs::msg::ControllerConfig & msg)
  : msg_(msg)
  {}
  Init_ControllerConfig_version type(::loki_msgs::msg::ControllerConfig::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ControllerConfig_version(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

class Init_ControllerConfig_name
{
public:
  Init_ControllerConfig_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerConfig_type name(::loki_msgs::msg::ControllerConfig::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerConfig_type(msg_);
  }

private:
  ::loki_msgs::msg::ControllerConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ControllerConfig>()
{
  return loki_msgs::msg::builder::Init_ControllerConfig_name();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__BUILDER_HPP_

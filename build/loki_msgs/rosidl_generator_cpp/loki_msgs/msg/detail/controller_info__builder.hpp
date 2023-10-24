// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/controller_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerInfo_home_counts
{
public:
  explicit Init_ControllerInfo_home_counts(::loki_msgs::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ControllerInfo home_counts(::loki_msgs::msg::ControllerInfo::_home_counts_type arg)
  {
    msg_.home_counts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_drive_directions
{
public:
  Init_ControllerInfo_drive_directions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerInfo_home_counts drive_directions(::loki_msgs::msg::ControllerInfo::_drive_directions_type arg)
  {
    msg_.drive_directions = std::move(arg);
    return Init_ControllerInfo_home_counts(msg_);
  }

private:
  ::loki_msgs::msg::ControllerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ControllerInfo>()
{
  return loki_msgs::msg::builder::Init_ControllerInfo_drive_directions();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_

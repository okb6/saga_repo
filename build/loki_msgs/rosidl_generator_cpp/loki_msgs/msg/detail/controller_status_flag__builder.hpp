// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ControllerStatusFlag.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/controller_status_flag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerStatusFlag_status_value
{
public:
  explicit Init_ControllerStatusFlag_status_value(::loki_msgs::msg::ControllerStatusFlag & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ControllerStatusFlag status_value(::loki_msgs::msg::ControllerStatusFlag::_status_value_type arg)
  {
    msg_.status_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ControllerStatusFlag msg_;
};

class Init_ControllerStatusFlag_status_name
{
public:
  Init_ControllerStatusFlag_status_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerStatusFlag_status_value status_name(::loki_msgs::msg::ControllerStatusFlag::_status_name_type arg)
  {
    msg_.status_name = std::move(arg);
    return Init_ControllerStatusFlag_status_value(msg_);
  }

private:
  ::loki_msgs::msg::ControllerStatusFlag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ControllerStatusFlag>()
{
  return loki_msgs::msg::builder::Init_ControllerStatusFlag_status_name();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__BUILDER_HPP_

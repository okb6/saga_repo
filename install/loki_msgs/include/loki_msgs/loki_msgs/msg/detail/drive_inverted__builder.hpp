// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/DriveInverted.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/drive_inverted__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveInverted_drive
{
public:
  Init_DriveInverted_drive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::msg::DriveInverted drive(::loki_msgs::msg::DriveInverted::_drive_type arg)
  {
    msg_.drive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::DriveInverted msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::DriveInverted>()
{
  return loki_msgs::msg::builder::Init_DriveInverted_drive();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/CANFrame.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/can_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_CANFrame_data
{
public:
  explicit Init_CANFrame_data(::loki_msgs::msg::CANFrame & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::CANFrame data(::loki_msgs::msg::CANFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::CANFrame msg_;
};

class Init_CANFrame_length
{
public:
  explicit Init_CANFrame_length(::loki_msgs::msg::CANFrame & msg)
  : msg_(msg)
  {}
  Init_CANFrame_data length(::loki_msgs::msg::CANFrame::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_CANFrame_data(msg_);
  }

private:
  ::loki_msgs::msg::CANFrame msg_;
};

class Init_CANFrame_id
{
public:
  Init_CANFrame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANFrame_length id(::loki_msgs::msg::CANFrame::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CANFrame_length(msg_);
  }

private:
  ::loki_msgs::msg::CANFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::CANFrame>()
{
  return loki_msgs::msg::builder::Init_CANFrame_id();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CAN_FRAME__BUILDER_HPP_

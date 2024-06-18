// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ControllerArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_ARRAY__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/controller_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerArray_controller_data
{
public:
  explicit Init_ControllerArray_controller_data(::loki_msgs::msg::ControllerArray & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ControllerArray controller_data(::loki_msgs::msg::ControllerArray::_controller_data_type arg)
  {
    msg_.controller_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ControllerArray msg_;
};

class Init_ControllerArray_header
{
public:
  Init_ControllerArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerArray_controller_data header(::loki_msgs::msg::ControllerArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControllerArray_controller_data(msg_);
  }

private:
  ::loki_msgs::msg::ControllerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ControllerArray>()
{
  return loki_msgs::msg::builder::Init_ControllerArray_header();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_ARRAY__BUILDER_HPP_

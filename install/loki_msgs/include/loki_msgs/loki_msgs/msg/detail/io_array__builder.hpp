// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/IOArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_ARRAY__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__IO_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/io_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_IOArray_io_states
{
public:
  explicit Init_IOArray_io_states(::loki_msgs::msg::IOArray & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::IOArray io_states(::loki_msgs::msg::IOArray::_io_states_type arg)
  {
    msg_.io_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::IOArray msg_;
};

class Init_IOArray_header
{
public:
  Init_IOArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOArray_io_states header(::loki_msgs::msg::IOArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IOArray_io_states(msg_);
  }

private:
  ::loki_msgs::msg::IOArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::IOArray>()
{
  return loki_msgs::msg::builder::Init_IOArray_header();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__IO_ARRAY__BUILDER_HPP_

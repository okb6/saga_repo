// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/ThorvaldIO.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__THORVALD_IO__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__THORVALD_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/thorvald_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_ThorvaldIO_ranges
{
public:
  explicit Init_ThorvaldIO_ranges(::loki_msgs::msg::ThorvaldIO & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::ThorvaldIO ranges(::loki_msgs::msg::ThorvaldIO::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::ThorvaldIO msg_;
};

class Init_ThorvaldIO_digitals
{
public:
  explicit Init_ThorvaldIO_digitals(::loki_msgs::msg::ThorvaldIO & msg)
  : msg_(msg)
  {}
  Init_ThorvaldIO_ranges digitals(::loki_msgs::msg::ThorvaldIO::_digitals_type arg)
  {
    msg_.digitals = std::move(arg);
    return Init_ThorvaldIO_ranges(msg_);
  }

private:
  ::loki_msgs::msg::ThorvaldIO msg_;
};

class Init_ThorvaldIO_analogs
{
public:
  explicit Init_ThorvaldIO_analogs(::loki_msgs::msg::ThorvaldIO & msg)
  : msg_(msg)
  {}
  Init_ThorvaldIO_digitals analogs(::loki_msgs::msg::ThorvaldIO::_analogs_type arg)
  {
    msg_.analogs = std::move(arg);
    return Init_ThorvaldIO_digitals(msg_);
  }

private:
  ::loki_msgs::msg::ThorvaldIO msg_;
};

class Init_ThorvaldIO_header
{
public:
  Init_ThorvaldIO_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThorvaldIO_analogs header(::loki_msgs::msg::ThorvaldIO::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ThorvaldIO_analogs(msg_);
  }

private:
  ::loki_msgs::msg::ThorvaldIO msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::ThorvaldIO>()
{
  return loki_msgs::msg::builder::Init_ThorvaldIO_header();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__THORVALD_IO__BUILDER_HPP_

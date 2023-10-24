// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/DriveParam.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/drive_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveParam_value
{
public:
  explicit Init_DriveParam_value(::loki_msgs::msg::DriveParam & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::DriveParam value(::loki_msgs::msg::DriveParam::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::DriveParam msg_;
};

class Init_DriveParam_type
{
public:
  explicit Init_DriveParam_type(::loki_msgs::msg::DriveParam & msg)
  : msg_(msg)
  {}
  Init_DriveParam_value type(::loki_msgs::msg::DriveParam::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DriveParam_value(msg_);
  }

private:
  ::loki_msgs::msg::DriveParam msg_;
};

class Init_DriveParam_index
{
public:
  Init_DriveParam_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveParam_type index(::loki_msgs::msg::DriveParam::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DriveParam_type(msg_);
  }

private:
  ::loki_msgs::msg::DriveParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::DriveParam>()
{
  return loki_msgs::msg::builder::Init_DriveParam_index();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__BUILDER_HPP_

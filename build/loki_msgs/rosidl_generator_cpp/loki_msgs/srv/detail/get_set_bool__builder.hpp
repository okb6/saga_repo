// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/GetSetBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/get_set_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::GetSetBool_Request>()
{
  return ::loki_msgs::srv::GetSetBool_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_GetSetBool_Response_set_bool_values
{
public:
  explicit Init_GetSetBool_Response_set_bool_values(::loki_msgs::srv::GetSetBool_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::GetSetBool_Response set_bool_values(::loki_msgs::srv::GetSetBool_Response::_set_bool_values_type arg)
  {
    msg_.set_bool_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::GetSetBool_Response msg_;
};

class Init_GetSetBool_Response_set_bool_strings
{
public:
  Init_GetSetBool_Response_set_bool_strings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSetBool_Response_set_bool_values set_bool_strings(::loki_msgs::srv::GetSetBool_Response::_set_bool_strings_type arg)
  {
    msg_.set_bool_strings = std::move(arg);
    return Init_GetSetBool_Response_set_bool_values(msg_);
  }

private:
  ::loki_msgs::srv::GetSetBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::GetSetBool_Response>()
{
  return loki_msgs::srv::builder::Init_GetSetBool_Response_set_bool_strings();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__BUILDER_HPP_

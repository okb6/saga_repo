// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/SwitchBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/switch_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchBool_Request_on
{
public:
  Init_SwitchBool_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::SwitchBool_Request on(::loki_msgs::srv::SwitchBool_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::SwitchBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::SwitchBool_Request>()
{
  return loki_msgs::srv::builder::Init_SwitchBool_Request_on();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchBool_Response_status
{
public:
  explicit Init_SwitchBool_Response_status(::loki_msgs::srv::SwitchBool_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::SwitchBool_Response status(::loki_msgs::srv::SwitchBool_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::SwitchBool_Response msg_;
};

class Init_SwitchBool_Response_message
{
public:
  Init_SwitchBool_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchBool_Response_status message(::loki_msgs::srv::SwitchBool_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SwitchBool_Response_status(msg_);
  }

private:
  ::loki_msgs::srv::SwitchBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::SwitchBool_Response>()
{
  return loki_msgs::srv::builder::Init_SwitchBool_Response_message();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__BUILDER_HPP_

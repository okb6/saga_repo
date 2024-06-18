// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/SetBools.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SET_BOOLS__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__SET_BOOLS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/set_bools__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBools_Request_message
{
public:
  explicit Init_SetBools_Request_message(::loki_msgs::srv::SetBools_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::SetBools_Request message(::loki_msgs::srv::SetBools_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::SetBools_Request msg_;
};

class Init_SetBools_Request_success
{
public:
  explicit Init_SetBools_Request_success(::loki_msgs::srv::SetBools_Request & msg)
  : msg_(msg)
  {}
  Init_SetBools_Request_message success(::loki_msgs::srv::SetBools_Request::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetBools_Request_message(msg_);
  }

private:
  ::loki_msgs::srv::SetBools_Request msg_;
};

class Init_SetBools_Request_value
{
public:
  explicit Init_SetBools_Request_value(::loki_msgs::srv::SetBools_Request & msg)
  : msg_(msg)
  {}
  Init_SetBools_Request_success value(::loki_msgs::srv::SetBools_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_SetBools_Request_success(msg_);
  }

private:
  ::loki_msgs::srv::SetBools_Request msg_;
};

class Init_SetBools_Request_unique_service_id
{
public:
  Init_SetBools_Request_unique_service_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBools_Request_value unique_service_id(::loki_msgs::srv::SetBools_Request::_unique_service_id_type arg)
  {
    msg_.unique_service_id = std::move(arg);
    return Init_SetBools_Request_value(msg_);
  }

private:
  ::loki_msgs::srv::SetBools_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::SetBools_Request>()
{
  return loki_msgs::srv::builder::Init_SetBools_Request_unique_service_id();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_SetBools_Response_message
{
public:
  explicit Init_SetBools_Response_message(::loki_msgs::srv::SetBools_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::SetBools_Response message(::loki_msgs::srv::SetBools_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::SetBools_Response msg_;
};

class Init_SetBools_Response_success
{
public:
  Init_SetBools_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetBools_Response_message success(::loki_msgs::srv::SetBools_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetBools_Response_message(msg_);
  }

private:
  ::loki_msgs::srv::SetBools_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::SetBools_Response>()
{
  return loki_msgs::srv::builder::Init_SetBools_Response_success();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__SET_BOOLS__BUILDER_HPP_

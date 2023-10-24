// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/CanID.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__CAN_ID__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__CAN_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/can_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_CanID_Request_can_id
{
public:
  Init_CanID_Request_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::CanID_Request can_id(::loki_msgs::srv::CanID_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::CanID_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::CanID_Request>()
{
  return loki_msgs::srv::builder::Init_CanID_Request_can_id();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_CanID_Response_success
{
public:
  explicit Init_CanID_Response_success(::loki_msgs::srv::CanID_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::CanID_Response success(::loki_msgs::srv::CanID_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::CanID_Response msg_;
};

class Init_CanID_Response_message
{
public:
  Init_CanID_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanID_Response_success message(::loki_msgs::srv::CanID_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CanID_Response_success(msg_);
  }

private:
  ::loki_msgs::srv::CanID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::CanID_Response>()
{
  return loki_msgs::srv::builder::Init_CanID_Response_message();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__CAN_ID__BUILDER_HPP_

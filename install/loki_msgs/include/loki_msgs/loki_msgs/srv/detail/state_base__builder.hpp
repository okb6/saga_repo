// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/StateBase.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__STATE_BASE__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__STATE_BASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/state_base__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_StateBase_Request_base_state
{
public:
  Init_StateBase_Request_base_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::StateBase_Request base_state(::loki_msgs::srv::StateBase_Request::_base_state_type arg)
  {
    msg_.base_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::StateBase_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::StateBase_Request>()
{
  return loki_msgs::srv::builder::Init_StateBase_Request_base_state();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_StateBase_Response_success
{
public:
  Init_StateBase_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::StateBase_Response success(::loki_msgs::srv::StateBase_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::StateBase_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::StateBase_Response>()
{
  return loki_msgs::srv::builder::Init_StateBase_Response_success();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__STATE_BASE__BUILDER_HPP_

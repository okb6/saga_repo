// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/HomesteeringAll.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__HOMESTEERING_ALL__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__HOMESTEERING_ALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/homesteering_all__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_HomesteeringAll_Request_homesteering
{
public:
  Init_HomesteeringAll_Request_homesteering()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::HomesteeringAll_Request homesteering(::loki_msgs::srv::HomesteeringAll_Request::_homesteering_type arg)
  {
    msg_.homesteering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::HomesteeringAll_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::HomesteeringAll_Request>()
{
  return loki_msgs::srv::builder::Init_HomesteeringAll_Request_homesteering();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_HomesteeringAll_Response_success
{
public:
  Init_HomesteeringAll_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::HomesteeringAll_Response success(::loki_msgs::srv::HomesteeringAll_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::HomesteeringAll_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::HomesteeringAll_Response>()
{
  return loki_msgs::srv::builder::Init_HomesteeringAll_Response_success();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__HOMESTEERING_ALL__BUILDER_HPP_

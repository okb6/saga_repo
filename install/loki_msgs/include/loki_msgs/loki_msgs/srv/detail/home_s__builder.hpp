// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/HomeS.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__HOME_S__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__HOME_S__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/home_s__struct.hpp"
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
auto build<::loki_msgs::srv::HomeS_Request>()
{
  return ::loki_msgs::srv::HomeS_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_HomeS_Response_message
{
public:
  explicit Init_HomeS_Response_message(::loki_msgs::srv::HomeS_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::HomeS_Response message(::loki_msgs::srv::HomeS_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::HomeS_Response msg_;
};

class Init_HomeS_Response_success
{
public:
  Init_HomeS_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomeS_Response_message success(::loki_msgs::srv::HomeS_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HomeS_Response_message(msg_);
  }

private:
  ::loki_msgs::srv::HomeS_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::HomeS_Response>()
{
  return loki_msgs::srv::builder::Init_HomeS_Response_success();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__HOME_S__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/Params.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__PARAMS__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/params__struct.hpp"
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
auto build<::loki_msgs::srv::Params_Request>()
{
  return ::loki_msgs::srv::Params_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_Params_Response_response
{
public:
  Init_Params_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::Params_Response response(::loki_msgs::srv::Params_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::Params_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::Params_Response>()
{
  return loki_msgs::srv::builder::Init_Params_Response_response();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__PARAMS__BUILDER_HPP_

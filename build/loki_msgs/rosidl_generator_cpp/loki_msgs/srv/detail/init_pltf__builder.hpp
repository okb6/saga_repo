// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/InitPltf.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__INIT_PLTF__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__INIT_PLTF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/init_pltf__struct.hpp"
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
auto build<::loki_msgs::srv::InitPltf_Request>()
{
  return ::loki_msgs::srv::InitPltf_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_InitPltf_Response_initpltf
{
public:
  Init_InitPltf_Response_initpltf()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::InitPltf_Response initpltf(::loki_msgs::srv::InitPltf_Response::_initpltf_type arg)
  {
    msg_.initpltf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::InitPltf_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::InitPltf_Response>()
{
  return loki_msgs::srv::builder::Init_InitPltf_Response_initpltf();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__INIT_PLTF__BUILDER_HPP_

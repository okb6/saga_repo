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

namespace builder
{

class Init_InitPltf_Request_can_interface_name
{
public:
  explicit Init_InitPltf_Request_can_interface_name(::loki_msgs::srv::InitPltf_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::InitPltf_Request can_interface_name(::loki_msgs::srv::InitPltf_Request::_can_interface_name_type arg)
  {
    msg_.can_interface_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::InitPltf_Request msg_;
};

class Init_InitPltf_Request_can_interface_type
{
public:
  Init_InitPltf_Request_can_interface_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitPltf_Request_can_interface_name can_interface_type(::loki_msgs::srv::InitPltf_Request::_can_interface_type_type arg)
  {
    msg_.can_interface_type = std::move(arg);
    return Init_InitPltf_Request_can_interface_name(msg_);
  }

private:
  ::loki_msgs::srv::InitPltf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::InitPltf_Request>()
{
  return loki_msgs::srv::builder::Init_InitPltf_Request_can_interface_type();
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

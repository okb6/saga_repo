// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/CotMap.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__COT_MAP__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__COT_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/cot_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_CotMap_Request_setup_map
{
public:
  explicit Init_CotMap_Request_setup_map(::loki_msgs::srv::CotMap_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::CotMap_Request setup_map(::loki_msgs::srv::CotMap_Request::_setup_map_type arg)
  {
    msg_.setup_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::CotMap_Request msg_;
};

class Init_CotMap_Request_can_id
{
public:
  Init_CotMap_Request_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CotMap_Request_setup_map can_id(::loki_msgs::srv::CotMap_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CotMap_Request_setup_map(msg_);
  }

private:
  ::loki_msgs::srv::CotMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::CotMap_Request>()
{
  return loki_msgs::srv::builder::Init_CotMap_Request_can_id();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_CotMap_Response_setup_map
{
public:
  Init_CotMap_Response_setup_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::CotMap_Response setup_map(::loki_msgs::srv::CotMap_Response::_setup_map_type arg)
  {
    msg_.setup_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::CotMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::CotMap_Response>()
{
  return loki_msgs::srv::builder::Init_CotMap_Response_setup_map();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__COT_MAP__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/PosZero.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__POS_ZERO__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__POS_ZERO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/pos_zero__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_PosZero_Request_can_id
{
public:
  Init_PosZero_Request_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::PosZero_Request can_id(::loki_msgs::srv::PosZero_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::PosZero_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::PosZero_Request>()
{
  return loki_msgs::srv::builder::Init_PosZero_Request_can_id();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::PosZero_Response>()
{
  return ::loki_msgs::srv::PosZero_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__POS_ZERO__BUILDER_HPP_

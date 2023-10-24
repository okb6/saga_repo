// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/PosZeroAll.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__POS_ZERO_ALL__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__POS_ZERO_ALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/pos_zero_all__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_PosZeroAll_Request_zeroall
{
public:
  Init_PosZeroAll_Request_zeroall()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::PosZeroAll_Request zeroall(::loki_msgs::srv::PosZeroAll_Request::_zeroall_type arg)
  {
    msg_.zeroall = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::PosZeroAll_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::PosZeroAll_Request>()
{
  return loki_msgs::srv::builder::Init_PosZeroAll_Request_zeroall();
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
auto build<::loki_msgs::srv::PosZeroAll_Response>()
{
  return ::loki_msgs::srv::PosZeroAll_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__POS_ZERO_ALL__BUILDER_HPP_

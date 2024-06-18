// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/BatteryVars.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__BATTERY_VARS__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__BATTERY_VARS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/battery_vars__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_BatteryVars_Request_batt
{
public:
  Init_BatteryVars_Request_batt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::BatteryVars_Request batt(::loki_msgs::srv::BatteryVars_Request::_batt_type arg)
  {
    msg_.batt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::BatteryVars_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::BatteryVars_Request>()
{
  return loki_msgs::srv::builder::Init_BatteryVars_Request_batt();
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
auto build<::loki_msgs::srv::BatteryVars_Response>()
{
  return ::loki_msgs::srv::BatteryVars_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__BATTERY_VARS__BUILDER_HPP_

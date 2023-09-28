// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/BatteryArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ARRAY__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/battery_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryArray_battery_data
{
public:
  explicit Init_BatteryArray_battery_data(::loki_msgs::msg::BatteryArray & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::BatteryArray battery_data(::loki_msgs::msg::BatteryArray::_battery_data_type arg)
  {
    msg_.battery_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::BatteryArray msg_;
};

class Init_BatteryArray_header
{
public:
  Init_BatteryArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryArray_battery_data header(::loki_msgs::msg::BatteryArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BatteryArray_battery_data(msg_);
  }

private:
  ::loki_msgs::msg::BatteryArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::BatteryArray>()
{
  return loki_msgs::msg::builder::Init_BatteryArray_header();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ARRAY__BUILDER_HPP_

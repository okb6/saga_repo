// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/BatteryArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ARRAY__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/battery_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'battery_data'
#include "loki_msgs/msg/detail/battery_data__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: battery_data
  {
    if (msg.battery_data.size() == 0) {
      out << "battery_data: []";
    } else {
      out << "battery_data: [";
      size_t pending_items = msg.battery_data.size();
      for (auto item : msg.battery_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: battery_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery_data.size() == 0) {
      out << "battery_data: []\n";
    } else {
      out << "battery_data:\n";
      for (auto item : msg.battery_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace loki_msgs

namespace rosidl_generator_traits
{

[[deprecated("use loki_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const loki_msgs::msg::BatteryArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::BatteryArray & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::BatteryArray>()
{
  return "loki_msgs::msg::BatteryArray";
}

template<>
inline const char * name<loki_msgs::msg::BatteryArray>()
{
  return "loki_msgs/msg/BatteryArray";
}

template<>
struct has_fixed_size<loki_msgs::msg::BatteryArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::BatteryArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::BatteryArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ARRAY__TRAITS_HPP_

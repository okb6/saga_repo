// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/ControllerStatusFlag.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/controller_status_flag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerStatusFlag & msg,
  std::ostream & out)
{
  out << "{";
  // member: status_name
  {
    out << "status_name: ";
    rosidl_generator_traits::value_to_yaml(msg.status_name, out);
    out << ", ";
  }

  // member: status_value
  {
    out << "status_value: ";
    rosidl_generator_traits::value_to_yaml(msg.status_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerStatusFlag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_name: ";
    rosidl_generator_traits::value_to_yaml(msg.status_name, out);
    out << "\n";
  }

  // member: status_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_value: ";
    rosidl_generator_traits::value_to_yaml(msg.status_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerStatusFlag & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::ControllerStatusFlag & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::ControllerStatusFlag & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::ControllerStatusFlag>()
{
  return "loki_msgs::msg::ControllerStatusFlag";
}

template<>
inline const char * name<loki_msgs::msg::ControllerStatusFlag>()
{
  return "loki_msgs/msg/ControllerStatusFlag";
}

template<>
struct has_fixed_size<loki_msgs::msg::ControllerStatusFlag>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::ControllerStatusFlag>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::ControllerStatusFlag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__TRAITS_HPP_

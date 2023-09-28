// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/controller_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'controller_config'
#include "loki_msgs/msg/detail/controller_config__traits.hpp"
// Member 'controller_state'
#include "loki_msgs/msg/detail/controller_state__traits.hpp"
// Member 'motor_state'
#include "loki_msgs/msg/detail/motor_state__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerData & msg,
  std::ostream & out)
{
  out << "{";
  // member: controller_config
  {
    out << "controller_config: ";
    to_flow_style_yaml(msg.controller_config, out);
    out << ", ";
  }

  // member: controller_state
  {
    out << "controller_state: ";
    to_flow_style_yaml(msg.controller_state, out);
    out << ", ";
  }

  // member: motor_state
  {
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []";
    } else {
      out << "motor_state: [";
      size_t pending_items = msg.motor_state.size();
      for (auto item : msg.motor_state) {
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
  const ControllerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: controller_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_config:\n";
    to_block_style_yaml(msg.controller_config, out, indentation + 2);
  }

  // member: controller_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_state:\n";
    to_block_style_yaml(msg.controller_state, out, indentation + 2);
  }

  // member: motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []\n";
    } else {
      out << "motor_state:\n";
      for (auto item : msg.motor_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerData & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::ControllerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::ControllerData & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::ControllerData>()
{
  return "loki_msgs::msg::ControllerData";
}

template<>
inline const char * name<loki_msgs::msg::ControllerData>()
{
  return "loki_msgs/msg/ControllerData";
}

template<>
struct has_fixed_size<loki_msgs::msg::ControllerData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::ControllerData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::ControllerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__TRAITS_HPP_

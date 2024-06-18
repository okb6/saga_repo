// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status_flags'
#include "loki_msgs/msg/detail/controller_status_flag__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: controller_mode
  {
    out << "controller_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_mode, out);
    out << ", ";
  }

  // member: battery_volts
  {
    out << "battery_volts: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_volts, out);
    out << ", ";
  }

  // member: battery_amps
  {
    out << "battery_amps: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_amps, out);
    out << ", ";
  }

  // member: temps
  {
    if (msg.temps.size() == 0) {
      out << "temps: []";
    } else {
      out << "temps: [";
      size_t pending_items = msg.temps.size();
      for (auto item : msg.temps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_flags
  {
    if (msg.status_flags.size() == 0) {
      out << "status_flags: []";
    } else {
      out << "status_flags: [";
      size_t pending_items = msg.status_flags.size();
      for (auto item : msg.status_flags) {
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
  const ControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: controller_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_mode, out);
    out << "\n";
  }

  // member: battery_volts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_volts: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_volts, out);
    out << "\n";
  }

  // member: battery_amps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_amps: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_amps, out);
    out << "\n";
  }

  // member: temps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temps.size() == 0) {
      out << "temps: []\n";
    } else {
      out << "temps:\n";
      for (auto item : msg.temps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_flags.size() == 0) {
      out << "status_flags: []\n";
    } else {
      out << "status_flags:\n";
      for (auto item : msg.status_flags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerState & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::ControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::ControllerState & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::ControllerState>()
{
  return "loki_msgs::msg::ControllerState";
}

template<>
inline const char * name<loki_msgs::msg::ControllerState>()
{
  return "loki_msgs/msg/ControllerState";
}

template<>
struct has_fixed_size<loki_msgs::msg::ControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::ControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::ControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/ControllerConfig.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/controller_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: drive_direction
  {
    out << "drive_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_direction, out);
    out << ", ";
  }

  // member: home_speed
  {
    out << "home_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.home_speed, out);
    out << ", ";
  }

  // member: home_count
  {
    out << "home_count: ";
    rosidl_generator_traits::value_to_yaml(msg.home_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: drive_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_direction, out);
    out << "\n";
  }

  // member: home_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.home_speed, out);
    out << "\n";
  }

  // member: home_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_count: ";
    rosidl_generator_traits::value_to_yaml(msg.home_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerConfig & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::ControllerConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::ControllerConfig & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::ControllerConfig>()
{
  return "loki_msgs::msg::ControllerConfig";
}

template<>
inline const char * name<loki_msgs::msg::ControllerConfig>()
{
  return "loki_msgs/msg/ControllerConfig";
}

template<>
struct has_fixed_size<loki_msgs::msg::ControllerConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::ControllerConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::ControllerConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__TRAITS_HPP_

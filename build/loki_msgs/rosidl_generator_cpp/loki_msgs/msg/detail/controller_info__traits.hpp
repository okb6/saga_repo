// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/controller_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: drive_directions
  {
    if (msg.drive_directions.size() == 0) {
      out << "drive_directions: []";
    } else {
      out << "drive_directions: [";
      size_t pending_items = msg.drive_directions.size();
      for (auto item : msg.drive_directions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: home_counts
  {
    if (msg.home_counts.size() == 0) {
      out << "home_counts: []";
    } else {
      out << "home_counts: [";
      size_t pending_items = msg.home_counts.size();
      for (auto item : msg.home_counts) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ControllerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drive_directions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drive_directions.size() == 0) {
      out << "drive_directions: []\n";
    } else {
      out << "drive_directions:\n";
      for (auto item : msg.drive_directions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: home_counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.home_counts.size() == 0) {
      out << "home_counts: []\n";
    } else {
      out << "home_counts:\n";
      for (auto item : msg.home_counts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerInfo & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::ControllerInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::ControllerInfo & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::ControllerInfo>()
{
  return "loki_msgs::msg::ControllerInfo";
}

template<>
inline const char * name<loki_msgs::msg::ControllerInfo>()
{
  return "loki_msgs/msg/ControllerInfo";
}

template<>
struct has_fixed_size<loki_msgs::msg::ControllerInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::ControllerInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::ControllerInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_

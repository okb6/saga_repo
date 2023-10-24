// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/ThorvaldIO.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__THORVALD_IO__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__THORVALD_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/thorvald_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThorvaldIO & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: analogs
  {
    if (msg.analogs.size() == 0) {
      out << "analogs: []";
    } else {
      out << "analogs: [";
      size_t pending_items = msg.analogs.size();
      for (auto item : msg.analogs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digitals
  {
    if (msg.digitals.size() == 0) {
      out << "digitals: []";
    } else {
      out << "digitals: [";
      size_t pending_items = msg.digitals.size();
      for (auto item : msg.digitals) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
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
  const ThorvaldIO & msg,
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

  // member: analogs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analogs.size() == 0) {
      out << "analogs: []\n";
    } else {
      out << "analogs:\n";
      for (auto item : msg.analogs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digitals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digitals.size() == 0) {
      out << "digitals: []\n";
    } else {
      out << "digitals:\n";
      for (auto item : msg.digitals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
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

inline std::string to_yaml(const ThorvaldIO & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::ThorvaldIO & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::ThorvaldIO & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::ThorvaldIO>()
{
  return "loki_msgs::msg::ThorvaldIO";
}

template<>
inline const char * name<loki_msgs::msg::ThorvaldIO>()
{
  return "loki_msgs/msg/ThorvaldIO";
}

template<>
struct has_fixed_size<loki_msgs::msg::ThorvaldIO>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::ThorvaldIO>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::ThorvaldIO>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__THORVALD_IO__TRAITS_HPP_

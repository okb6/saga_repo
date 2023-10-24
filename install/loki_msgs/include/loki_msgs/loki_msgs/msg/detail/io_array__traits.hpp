// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/IOArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_ARRAY__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__IO_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/io_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'io_states'
#include "loki_msgs/msg/detail/io_state__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: io_states
  {
    if (msg.io_states.size() == 0) {
      out << "io_states: []";
    } else {
      out << "io_states: [";
      size_t pending_items = msg.io_states.size();
      for (auto item : msg.io_states) {
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
  const IOArray & msg,
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

  // member: io_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.io_states.size() == 0) {
      out << "io_states: []\n";
    } else {
      out << "io_states:\n";
      for (auto item : msg.io_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOArray & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::IOArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::IOArray & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::IOArray>()
{
  return "loki_msgs::msg::IOArray";
}

template<>
inline const char * name<loki_msgs::msg::IOArray>()
{
  return "loki_msgs/msg/IOArray";
}

template<>
struct has_fixed_size<loki_msgs::msg::IOArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::IOArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::IOArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__IO_ARRAY__TRAITS_HPP_

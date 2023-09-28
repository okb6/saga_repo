// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:srv/GetSetBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__TRAITS_HPP_
#define LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/srv/detail/get_set_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSetBool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_bool
  {
    out << "set_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.set_bool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.set_bool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSetBool_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace loki_msgs

namespace rosidl_generator_traits
{

[[deprecated("use loki_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const loki_msgs::srv::GetSetBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::GetSetBool_Request & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::GetSetBool_Request>()
{
  return "loki_msgs::srv::GetSetBool_Request";
}

template<>
inline const char * name<loki_msgs::srv::GetSetBool_Request>()
{
  return "loki_msgs/srv/GetSetBool_Request";
}

template<>
struct has_fixed_size<loki_msgs::srv::GetSetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::srv::GetSetBool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::srv::GetSetBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSetBool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_bool_strings
  {
    if (msg.set_bool_strings.size() == 0) {
      out << "set_bool_strings: []";
    } else {
      out << "set_bool_strings: [";
      size_t pending_items = msg.set_bool_strings.size();
      for (auto item : msg.set_bool_strings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: set_bool_values
  {
    if (msg.set_bool_values.size() == 0) {
      out << "set_bool_values: []";
    } else {
      out << "set_bool_values: [";
      size_t pending_items = msg.set_bool_values.size();
      for (auto item : msg.set_bool_values) {
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
  const GetSetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_bool_strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.set_bool_strings.size() == 0) {
      out << "set_bool_strings: []\n";
    } else {
      out << "set_bool_strings:\n";
      for (auto item : msg.set_bool_strings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: set_bool_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.set_bool_values.size() == 0) {
      out << "set_bool_values: []\n";
    } else {
      out << "set_bool_values:\n";
      for (auto item : msg.set_bool_values) {
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

inline std::string to_yaml(const GetSetBool_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace loki_msgs

namespace rosidl_generator_traits
{

[[deprecated("use loki_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const loki_msgs::srv::GetSetBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::GetSetBool_Response & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::GetSetBool_Response>()
{
  return "loki_msgs::srv::GetSetBool_Response";
}

template<>
inline const char * name<loki_msgs::srv::GetSetBool_Response>()
{
  return "loki_msgs/srv/GetSetBool_Response";
}

template<>
struct has_fixed_size<loki_msgs::srv::GetSetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::srv::GetSetBool_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::srv::GetSetBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<loki_msgs::srv::GetSetBool>()
{
  return "loki_msgs::srv::GetSetBool";
}

template<>
inline const char * name<loki_msgs::srv::GetSetBool>()
{
  return "loki_msgs/srv/GetSetBool";
}

template<>
struct has_fixed_size<loki_msgs::srv::GetSetBool>
  : std::integral_constant<
    bool,
    has_fixed_size<loki_msgs::srv::GetSetBool_Request>::value &&
    has_fixed_size<loki_msgs::srv::GetSetBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<loki_msgs::srv::GetSetBool>
  : std::integral_constant<
    bool,
    has_bounded_size<loki_msgs::srv::GetSetBool_Request>::value &&
    has_bounded_size<loki_msgs::srv::GetSetBool_Response>::value
  >
{
};

template<>
struct is_service<loki_msgs::srv::GetSetBool>
  : std::true_type
{
};

template<>
struct is_service_request<loki_msgs::srv::GetSetBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<loki_msgs::srv::GetSetBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__SRV__DETAIL__GET_SET_BOOL__TRAITS_HPP_

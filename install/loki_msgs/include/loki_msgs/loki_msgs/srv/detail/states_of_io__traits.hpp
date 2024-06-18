// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:srv/StatesOfIO.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__STATES_OF_IO__TRAITS_HPP_
#define LOKI_MSGS__SRV__DETAIL__STATES_OF_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/srv/detail/states_of_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StatesOfIO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: states
  {
    out << "states: ";
    rosidl_generator_traits::value_to_yaml(msg.states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatesOfIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "states: ";
    rosidl_generator_traits::value_to_yaml(msg.states, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatesOfIO_Request & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::StatesOfIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::StatesOfIO_Request & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::StatesOfIO_Request>()
{
  return "loki_msgs::srv::StatesOfIO_Request";
}

template<>
inline const char * name<loki_msgs::srv::StatesOfIO_Request>()
{
  return "loki_msgs/srv/StatesOfIO_Request";
}

template<>
struct has_fixed_size<loki_msgs::srv::StatesOfIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::srv::StatesOfIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::srv::StatesOfIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StatesOfIO_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatesOfIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatesOfIO_Response & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::StatesOfIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::StatesOfIO_Response & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::StatesOfIO_Response>()
{
  return "loki_msgs::srv::StatesOfIO_Response";
}

template<>
inline const char * name<loki_msgs::srv::StatesOfIO_Response>()
{
  return "loki_msgs/srv/StatesOfIO_Response";
}

template<>
struct has_fixed_size<loki_msgs::srv::StatesOfIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::srv::StatesOfIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::srv::StatesOfIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<loki_msgs::srv::StatesOfIO>()
{
  return "loki_msgs::srv::StatesOfIO";
}

template<>
inline const char * name<loki_msgs::srv::StatesOfIO>()
{
  return "loki_msgs/srv/StatesOfIO";
}

template<>
struct has_fixed_size<loki_msgs::srv::StatesOfIO>
  : std::integral_constant<
    bool,
    has_fixed_size<loki_msgs::srv::StatesOfIO_Request>::value &&
    has_fixed_size<loki_msgs::srv::StatesOfIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<loki_msgs::srv::StatesOfIO>
  : std::integral_constant<
    bool,
    has_bounded_size<loki_msgs::srv::StatesOfIO_Request>::value &&
    has_bounded_size<loki_msgs::srv::StatesOfIO_Response>::value
  >
{
};

template<>
struct is_service<loki_msgs::srv::StatesOfIO>
  : std::true_type
{
};

template<>
struct is_service_request<loki_msgs::srv::StatesOfIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<loki_msgs::srv::StatesOfIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__SRV__DETAIL__STATES_OF_IO__TRAITS_HPP_

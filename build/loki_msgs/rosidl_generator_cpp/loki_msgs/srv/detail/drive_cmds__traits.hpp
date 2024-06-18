// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:srv/DriveCmds.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__DRIVE_CMDS__TRAITS_HPP_
#define LOKI_MSGS__SRV__DETAIL__DRIVE_CMDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/srv/detail/drive_cmds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DriveCmds_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: commands
  {
    out << "commands: ";
    rosidl_generator_traits::value_to_yaml(msg.commands, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveCmds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commands: ";
    rosidl_generator_traits::value_to_yaml(msg.commands, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveCmds_Request & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::DriveCmds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::DriveCmds_Request & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::DriveCmds_Request>()
{
  return "loki_msgs::srv::DriveCmds_Request";
}

template<>
inline const char * name<loki_msgs::srv::DriveCmds_Request>()
{
  return "loki_msgs/srv/DriveCmds_Request";
}

template<>
struct has_fixed_size<loki_msgs::srv::DriveCmds_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::srv::DriveCmds_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::srv::DriveCmds_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DriveCmds_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveCmds_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveCmds_Response & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::DriveCmds_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::DriveCmds_Response & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::DriveCmds_Response>()
{
  return "loki_msgs::srv::DriveCmds_Response";
}

template<>
inline const char * name<loki_msgs::srv::DriveCmds_Response>()
{
  return "loki_msgs/srv/DriveCmds_Response";
}

template<>
struct has_fixed_size<loki_msgs::srv::DriveCmds_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::srv::DriveCmds_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::srv::DriveCmds_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<loki_msgs::srv::DriveCmds>()
{
  return "loki_msgs::srv::DriveCmds";
}

template<>
inline const char * name<loki_msgs::srv::DriveCmds>()
{
  return "loki_msgs/srv/DriveCmds";
}

template<>
struct has_fixed_size<loki_msgs::srv::DriveCmds>
  : std::integral_constant<
    bool,
    has_fixed_size<loki_msgs::srv::DriveCmds_Request>::value &&
    has_fixed_size<loki_msgs::srv::DriveCmds_Response>::value
  >
{
};

template<>
struct has_bounded_size<loki_msgs::srv::DriveCmds>
  : std::integral_constant<
    bool,
    has_bounded_size<loki_msgs::srv::DriveCmds_Request>::value &&
    has_bounded_size<loki_msgs::srv::DriveCmds_Response>::value
  >
{
};

template<>
struct is_service<loki_msgs::srv::DriveCmds>
  : std::true_type
{
};

template<>
struct is_service_request<loki_msgs::srv::DriveCmds_Request>
  : std::true_type
{
};

template<>
struct is_service_response<loki_msgs::srv::DriveCmds_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__SRV__DETAIL__DRIVE_CMDS__TRAITS_HPP_

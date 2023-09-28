// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: motor_amps
  {
    out << "motor_amps: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_amps, out);
    out << ", ";
  }

  // member: relative_power
  {
    out << "relative_power: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: motor_amps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_amps: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_amps, out);
    out << "\n";
  }

  // member: relative_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_power: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorState & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::MotorState & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::MotorState>()
{
  return "loki_msgs::msg::MotorState";
}

template<>
inline const char * name<loki_msgs::msg::MotorState>()
{
  return "loki_msgs/msg/MotorState";
}

template<>
struct has_fixed_size<loki_msgs::msg::MotorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::MotorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

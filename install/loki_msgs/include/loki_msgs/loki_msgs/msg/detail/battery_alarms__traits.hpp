// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/battery_alarms__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryAlarms & msg,
  std::ostream & out)
{
  out << "{";
  // member: over_voltage_protection
  {
    out << "over_voltage_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.over_voltage_protection, out);
    out << ", ";
  }

  // member: under_voltage_protection
  {
    out << "under_voltage_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.under_voltage_protection, out);
    out << ", ";
  }

  // member: over_temperature_protection
  {
    out << "over_temperature_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.over_temperature_protection, out);
    out << ", ";
  }

  // member: under_temperature_protection
  {
    out << "under_temperature_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.under_temperature_protection, out);
    out << ", ";
  }

  // member: over_charge_current
  {
    out << "over_charge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.over_charge_current, out);
    out << ", ";
  }

  // member: over_discharge_current
  {
    out << "over_discharge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.over_discharge_current, out);
    out << ", ";
  }

  // member: can_communication_fail
  {
    out << "can_communication_fail: ";
    rosidl_generator_traits::value_to_yaml(msg.can_communication_fail, out);
    out << ", ";
  }

  // member: cell_voltage_sensing_fault
  {
    out << "cell_voltage_sensing_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_voltage_sensing_fault, out);
    out << ", ";
  }

  // member: bms_fail
  {
    out << "bms_fail: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_fail, out);
    out << ", ";
  }

  // member: short_circuit_discharge
  {
    out << "short_circuit_discharge: ";
    rosidl_generator_traits::value_to_yaml(msg.short_circuit_discharge, out);
    out << ", ";
  }

  // member: temperature_sensing_fault
  {
    out << "temperature_sensing_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_sensing_fault, out);
    out << ", ";
  }

  // member: over_voltage_fault
  {
    out << "over_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.over_voltage_fault, out);
    out << ", ";
  }

  // member: under_voltage_fault
  {
    out << "under_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.under_voltage_fault, out);
    out << ", ";
  }

  // member: pack_voltage_sensing_fault
  {
    out << "pack_voltage_sensing_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.pack_voltage_sensing_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryAlarms & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: over_voltage_protection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_voltage_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.over_voltage_protection, out);
    out << "\n";
  }

  // member: under_voltage_protection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "under_voltage_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.under_voltage_protection, out);
    out << "\n";
  }

  // member: over_temperature_protection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_temperature_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.over_temperature_protection, out);
    out << "\n";
  }

  // member: under_temperature_protection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "under_temperature_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.under_temperature_protection, out);
    out << "\n";
  }

  // member: over_charge_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_charge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.over_charge_current, out);
    out << "\n";
  }

  // member: over_discharge_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_discharge_current: ";
    rosidl_generator_traits::value_to_yaml(msg.over_discharge_current, out);
    out << "\n";
  }

  // member: can_communication_fail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_communication_fail: ";
    rosidl_generator_traits::value_to_yaml(msg.can_communication_fail, out);
    out << "\n";
  }

  // member: cell_voltage_sensing_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_voltage_sensing_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_voltage_sensing_fault, out);
    out << "\n";
  }

  // member: bms_fail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bms_fail: ";
    rosidl_generator_traits::value_to_yaml(msg.bms_fail, out);
    out << "\n";
  }

  // member: short_circuit_discharge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "short_circuit_discharge: ";
    rosidl_generator_traits::value_to_yaml(msg.short_circuit_discharge, out);
    out << "\n";
  }

  // member: temperature_sensing_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_sensing_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_sensing_fault, out);
    out << "\n";
  }

  // member: over_voltage_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "over_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.over_voltage_fault, out);
    out << "\n";
  }

  // member: under_voltage_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "under_voltage_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.under_voltage_fault, out);
    out << "\n";
  }

  // member: pack_voltage_sensing_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pack_voltage_sensing_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.pack_voltage_sensing_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryAlarms & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::BatteryAlarms & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::BatteryAlarms & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::BatteryAlarms>()
{
  return "loki_msgs::msg::BatteryAlarms";
}

template<>
inline const char * name<loki_msgs::msg::BatteryAlarms>()
{
  return "loki_msgs/msg/BatteryAlarms";
}

template<>
struct has_fixed_size<loki_msgs::msg::BatteryAlarms>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<loki_msgs::msg::BatteryAlarms>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<loki_msgs::msg::BatteryAlarms>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__TRAITS_HPP_

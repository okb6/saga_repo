// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/battery_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'battery_alarms'
#include "loki_msgs/msg/detail/battery_alarms__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryData & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_id
  {
    out << "battery_id: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_id, out);
    out << ", ";
  }

  // member: battery_state
  {
    out << "battery_state: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_state, out);
    out << ", ";
  }

  // member: temperatures
  {
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []";
    } else {
      out << "temperatures: [";
      size_t pending_items = msg.temperatures.size();
      for (auto item : msg.temperatures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: battery_alarms
  {
    out << "battery_alarms: ";
    to_flow_style_yaml(msg.battery_alarms, out);
    out << ", ";
  }

  // member: charge_fet_on
  {
    out << "charge_fet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_fet_on, out);
    out << ", ";
  }

  // member: discharge_fet_on
  {
    out << "discharge_fet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.discharge_fet_on, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: battery_current
  {
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << ", ";
  }

  // member: state_of_charge
  {
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << ", ";
  }

  // member: state_of_health
  {
    out << "state_of_health: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_health, out);
    out << ", ";
  }

  // member: cycle_count
  {
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << ", ";
  }

  // member: battery_capacity
  {
    out << "battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_capacity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_id: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_id, out);
    out << "\n";
  }

  // member: battery_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_state: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_state, out);
    out << "\n";
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: battery_alarms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_alarms:\n";
    to_block_style_yaml(msg.battery_alarms, out, indentation + 2);
  }

  // member: charge_fet_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_fet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_fet_on, out);
    out << "\n";
  }

  // member: discharge_fet_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharge_fet_on: ";
    rosidl_generator_traits::value_to_yaml(msg.discharge_fet_on, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << "\n";
  }

  // member: state_of_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << "\n";
  }

  // member: state_of_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_health: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_health, out);
    out << "\n";
  }

  // member: cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_count, out);
    out << "\n";
  }

  // member: battery_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_capacity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryData & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::BatteryData & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::BatteryData & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::BatteryData>()
{
  return "loki_msgs::msg::BatteryData";
}

template<>
inline const char * name<loki_msgs::msg::BatteryData>()
{
  return "loki_msgs/msg/BatteryData";
}

template<>
struct has_fixed_size<loki_msgs::msg::BatteryData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::BatteryData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::BatteryData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__TRAITS_HPP_

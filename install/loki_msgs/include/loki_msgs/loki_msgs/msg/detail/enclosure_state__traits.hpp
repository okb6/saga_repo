// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/enclosure_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnclosureState & msg,
  std::ostream & out)
{
  out << "{";
  // member: communication_state
  {
    out << "communication_state: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_state, out);
    out << ", ";
  }

  // member: esd_ok
  {
    out << "esd_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.esd_ok, out);
    out << ", ";
  }

  // member: contactors_on
  {
    out << "contactors_on: ";
    rosidl_generator_traits::value_to_yaml(msg.contactors_on, out);
    out << ", ";
  }

  // member: motor_power_control_on
  {
    out << "motor_power_control_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_power_control_on, out);
    out << ", ";
  }

  // member: rl3_on
  {
    out << "rl3_on: ";
    rosidl_generator_traits::value_to_yaml(msg.rl3_on, out);
    out << ", ";
  }

  // member: rl5_on
  {
    out << "rl5_on: ";
    rosidl_generator_traits::value_to_yaml(msg.rl5_on, out);
    out << ", ";
  }

  // member: digital_pin_numbers
  {
    if (msg.digital_pin_numbers.size() == 0) {
      out << "digital_pin_numbers: []";
    } else {
      out << "digital_pin_numbers: [";
      size_t pending_items = msg.digital_pin_numbers.size();
      for (auto item : msg.digital_pin_numbers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digital_pin_values
  {
    if (msg.digital_pin_values.size() == 0) {
      out << "digital_pin_values: []";
    } else {
      out << "digital_pin_values: [";
      size_t pending_items = msg.digital_pin_values.size();
      for (auto item : msg.digital_pin_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: analog_pin_numbers
  {
    if (msg.analog_pin_numbers.size() == 0) {
      out << "analog_pin_numbers: []";
    } else {
      out << "analog_pin_numbers: [";
      size_t pending_items = msg.analog_pin_numbers.size();
      for (auto item : msg.analog_pin_numbers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: analog_pin_values
  {
    if (msg.analog_pin_values.size() == 0) {
      out << "analog_pin_values: []";
    } else {
      out << "analog_pin_values: [";
      size_t pending_items = msg.analog_pin_values.size();
      for (auto item : msg.analog_pin_values) {
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
  const EnclosureState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: communication_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "communication_state: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_state, out);
    out << "\n";
  }

  // member: esd_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esd_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.esd_ok, out);
    out << "\n";
  }

  // member: contactors_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contactors_on: ";
    rosidl_generator_traits::value_to_yaml(msg.contactors_on, out);
    out << "\n";
  }

  // member: motor_power_control_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_power_control_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_power_control_on, out);
    out << "\n";
  }

  // member: rl3_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl3_on: ";
    rosidl_generator_traits::value_to_yaml(msg.rl3_on, out);
    out << "\n";
  }

  // member: rl5_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl5_on: ";
    rosidl_generator_traits::value_to_yaml(msg.rl5_on, out);
    out << "\n";
  }

  // member: digital_pin_numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_pin_numbers.size() == 0) {
      out << "digital_pin_numbers: []\n";
    } else {
      out << "digital_pin_numbers:\n";
      for (auto item : msg.digital_pin_numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digital_pin_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_pin_values.size() == 0) {
      out << "digital_pin_values: []\n";
    } else {
      out << "digital_pin_values:\n";
      for (auto item : msg.digital_pin_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: analog_pin_numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analog_pin_numbers.size() == 0) {
      out << "analog_pin_numbers: []\n";
    } else {
      out << "analog_pin_numbers:\n";
      for (auto item : msg.analog_pin_numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: analog_pin_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analog_pin_values.size() == 0) {
      out << "analog_pin_values: []\n";
    } else {
      out << "analog_pin_values:\n";
      for (auto item : msg.analog_pin_values) {
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

inline std::string to_yaml(const EnclosureState & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::EnclosureState & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::EnclosureState & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::EnclosureState>()
{
  return "loki_msgs::msg::EnclosureState";
}

template<>
inline const char * name<loki_msgs::msg::EnclosureState>()
{
  return "loki_msgs/msg/EnclosureState";
}

template<>
struct has_fixed_size<loki_msgs::msg::EnclosureState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::EnclosureState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::EnclosureState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__TRAITS_HPP_

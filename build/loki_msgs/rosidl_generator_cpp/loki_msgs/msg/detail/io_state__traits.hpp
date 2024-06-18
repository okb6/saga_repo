// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_STATE__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__IO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: analog_names
  {
    if (msg.analog_names.size() == 0) {
      out << "analog_names: []";
    } else {
      out << "analog_names: [";
      size_t pending_items = msg.analog_names.size();
      for (auto item : msg.analog_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: analog_values
  {
    if (msg.analog_values.size() == 0) {
      out << "analog_values: []";
    } else {
      out << "analog_values: [";
      size_t pending_items = msg.analog_values.size();
      for (auto item : msg.analog_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digital_names
  {
    if (msg.digital_names.size() == 0) {
      out << "digital_names: []";
    } else {
      out << "digital_names: [";
      size_t pending_items = msg.digital_names.size();
      for (auto item : msg.digital_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digital_values
  {
    if (msg.digital_values.size() == 0) {
      out << "digital_values: []";
    } else {
      out << "digital_values: [";
      size_t pending_items = msg.digital_values.size();
      for (auto item : msg.digital_values) {
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
    out << ", ";
  }

  // member: temps
  {
    if (msg.temps.size() == 0) {
      out << "temps: []";
    } else {
      out << "temps: [";
      size_t pending_items = msg.temps.size();
      for (auto item : msg.temps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: humidities
  {
    if (msg.humidities.size() == 0) {
      out << "humidities: []";
    } else {
      out << "humidities: [";
      size_t pending_items = msg.humidities.size();
      for (auto item : msg.humidities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: analog_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analog_names.size() == 0) {
      out << "analog_names: []\n";
    } else {
      out << "analog_names:\n";
      for (auto item : msg.analog_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: analog_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analog_values.size() == 0) {
      out << "analog_values: []\n";
    } else {
      out << "analog_values:\n";
      for (auto item : msg.analog_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digital_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_names.size() == 0) {
      out << "digital_names: []\n";
    } else {
      out << "digital_names:\n";
      for (auto item : msg.digital_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digital_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_values.size() == 0) {
      out << "digital_values: []\n";
    } else {
      out << "digital_values:\n";
      for (auto item : msg.digital_values) {
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

  // member: temps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temps.size() == 0) {
      out << "temps: []\n";
    } else {
      out << "temps:\n";
      for (auto item : msg.temps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: humidities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.humidities.size() == 0) {
      out << "humidities: []\n";
    } else {
      out << "humidities:\n";
      for (auto item : msg.humidities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOState & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::IOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::IOState & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::IOState>()
{
  return "loki_msgs::msg::IOState";
}

template<>
inline const char * name<loki_msgs::msg::IOState>()
{
  return "loki_msgs/msg/IOState";
}

template<>
struct has_fixed_size<loki_msgs::msg::IOState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::IOState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::IOState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__IO_STATE__TRAITS_HPP_

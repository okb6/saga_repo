// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BASE_STATE__TRAITS_HPP_
#define LOKI_MSGS__MSG__DETAIL__BASE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/msg/detail/base_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace loki_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BaseState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drive_mode
  {
    out << "drive_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_mode, out);
    out << ", ";
  }

  // member: prop_speed
  {
    if (msg.prop_speed.size() == 0) {
      out << "prop_speed: []";
    } else {
      out << "prop_speed: [";
      size_t pending_items = msg.prop_speed.size();
      for (auto item : msg.prop_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prop_pos
  {
    if (msg.prop_pos.size() == 0) {
      out << "prop_pos: []";
    } else {
      out << "prop_pos: [";
      size_t pending_items = msg.prop_pos.size();
      for (auto item : msg.prop_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_speed
  {
    if (msg.steer_speed.size() == 0) {
      out << "steer_speed: []";
    } else {
      out << "steer_speed: [";
      size_t pending_items = msg.steer_speed.size();
      for (auto item : msg.steer_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_pos
  {
    if (msg.steer_pos.size() == 0) {
      out << "steer_pos: []";
    } else {
      out << "steer_pos: [";
      size_t pending_items = msg.steer_pos.size();
      for (auto item : msg.steer_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_max_speed
  {
    if (msg.steer_max_speed.size() == 0) {
      out << "steer_max_speed: []";
    } else {
      out << "steer_max_speed: [";
      size_t pending_items = msg.steer_max_speed.size();
      for (auto item : msg.steer_max_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channel
  {
    if (msg.channel.size() == 0) {
      out << "channel: []";
    } else {
      out << "channel: [";
      size_t pending_items = msg.channel.size();
      for (auto item : msg.channel) {
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
  const BaseState & msg,
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

  // member: drive_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_mode, out);
    out << "\n";
  }

  // member: prop_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prop_speed.size() == 0) {
      out << "prop_speed: []\n";
    } else {
      out << "prop_speed:\n";
      for (auto item : msg.prop_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prop_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prop_pos.size() == 0) {
      out << "prop_pos: []\n";
    } else {
      out << "prop_pos:\n";
      for (auto item : msg.prop_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_speed.size() == 0) {
      out << "steer_speed: []\n";
    } else {
      out << "steer_speed:\n";
      for (auto item : msg.steer_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_pos.size() == 0) {
      out << "steer_pos: []\n";
    } else {
      out << "steer_pos:\n";
      for (auto item : msg.steer_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_max_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_max_speed.size() == 0) {
      out << "steer_max_speed: []\n";
    } else {
      out << "steer_max_speed:\n";
      for (auto item : msg.steer_max_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel.size() == 0) {
      out << "channel: []\n";
    } else {
      out << "channel:\n";
      for (auto item : msg.channel) {
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

inline std::string to_yaml(const BaseState & msg, bool use_flow_style = false)
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
  const loki_msgs::msg::BaseState & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::msg::BaseState & msg)
{
  return loki_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::msg::BaseState>()
{
  return "loki_msgs::msg::BaseState";
}

template<>
inline const char * name<loki_msgs::msg::BaseState>()
{
  return "loki_msgs/msg/BaseState";
}

template<>
struct has_fixed_size<loki_msgs::msg::BaseState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::msg::BaseState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::msg::BaseState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__MSG__DETAIL__BASE_STATE__TRAITS_HPP_

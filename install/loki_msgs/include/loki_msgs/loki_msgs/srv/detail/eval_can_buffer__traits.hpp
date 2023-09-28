// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:srv/EvalCanBuffer.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__TRAITS_HPP_
#define LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/srv/detail/eval_can_buffer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'can_msgs_base'
// Member 'can_msgs_device'
#include "loki_msgs/msg/detail/can_frame__traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvalCanBuffer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_msgs_base
  {
    if (msg.can_msgs_base.size() == 0) {
      out << "can_msgs_base: []";
    } else {
      out << "can_msgs_base: [";
      size_t pending_items = msg.can_msgs_base.size();
      for (auto item : msg.can_msgs_base) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: can_msgs_device
  {
    if (msg.can_msgs_device.size() == 0) {
      out << "can_msgs_device: []";
    } else {
      out << "can_msgs_device: [";
      size_t pending_items = msg.can_msgs_device.size();
      for (auto item : msg.can_msgs_device) {
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
  const EvalCanBuffer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_msgs_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.can_msgs_base.size() == 0) {
      out << "can_msgs_base: []\n";
    } else {
      out << "can_msgs_base:\n";
      for (auto item : msg.can_msgs_base) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: can_msgs_device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.can_msgs_device.size() == 0) {
      out << "can_msgs_device: []\n";
    } else {
      out << "can_msgs_device:\n";
      for (auto item : msg.can_msgs_device) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvalCanBuffer_Request & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::EvalCanBuffer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::EvalCanBuffer_Request & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::EvalCanBuffer_Request>()
{
  return "loki_msgs::srv::EvalCanBuffer_Request";
}

template<>
inline const char * name<loki_msgs::srv::EvalCanBuffer_Request>()
{
  return "loki_msgs/srv/EvalCanBuffer_Request";
}

template<>
struct has_fixed_size<loki_msgs::srv::EvalCanBuffer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::srv::EvalCanBuffer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::srv::EvalCanBuffer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'can_msgs_base'
// Member 'can_msgs_device'
// already included above
// #include "loki_msgs/msg/detail/can_frame__traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvalCanBuffer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_msgs_base
  {
    if (msg.can_msgs_base.size() == 0) {
      out << "can_msgs_base: []";
    } else {
      out << "can_msgs_base: [";
      size_t pending_items = msg.can_msgs_base.size();
      for (auto item : msg.can_msgs_base) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: can_msgs_device
  {
    if (msg.can_msgs_device.size() == 0) {
      out << "can_msgs_device: []";
    } else {
      out << "can_msgs_device: [";
      size_t pending_items = msg.can_msgs_device.size();
      for (auto item : msg.can_msgs_device) {
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
  const EvalCanBuffer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_msgs_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.can_msgs_base.size() == 0) {
      out << "can_msgs_base: []\n";
    } else {
      out << "can_msgs_base:\n";
      for (auto item : msg.can_msgs_base) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: can_msgs_device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.can_msgs_device.size() == 0) {
      out << "can_msgs_device: []\n";
    } else {
      out << "can_msgs_device:\n";
      for (auto item : msg.can_msgs_device) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvalCanBuffer_Response & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::EvalCanBuffer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::EvalCanBuffer_Response & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::EvalCanBuffer_Response>()
{
  return "loki_msgs::srv::EvalCanBuffer_Response";
}

template<>
inline const char * name<loki_msgs::srv::EvalCanBuffer_Response>()
{
  return "loki_msgs/srv/EvalCanBuffer_Response";
}

template<>
struct has_fixed_size<loki_msgs::srv::EvalCanBuffer_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::srv::EvalCanBuffer_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::srv::EvalCanBuffer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<loki_msgs::srv::EvalCanBuffer>()
{
  return "loki_msgs::srv::EvalCanBuffer";
}

template<>
inline const char * name<loki_msgs::srv::EvalCanBuffer>()
{
  return "loki_msgs/srv/EvalCanBuffer";
}

template<>
struct has_fixed_size<loki_msgs::srv::EvalCanBuffer>
  : std::integral_constant<
    bool,
    has_fixed_size<loki_msgs::srv::EvalCanBuffer_Request>::value &&
    has_fixed_size<loki_msgs::srv::EvalCanBuffer_Response>::value
  >
{
};

template<>
struct has_bounded_size<loki_msgs::srv::EvalCanBuffer>
  : std::integral_constant<
    bool,
    has_bounded_size<loki_msgs::srv::EvalCanBuffer_Request>::value &&
    has_bounded_size<loki_msgs::srv::EvalCanBuffer_Response>::value
  >
{
};

template<>
struct is_service<loki_msgs::srv::EvalCanBuffer>
  : std::true_type
{
};

template<>
struct is_service_request<loki_msgs::srv::EvalCanBuffer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<loki_msgs::srv::EvalCanBuffer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__TRAITS_HPP_

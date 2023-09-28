// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from loki_msgs:srv/CotMap.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__COT_MAP__TRAITS_HPP_
#define LOKI_MSGS__SRV__DETAIL__COT_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "loki_msgs/srv/detail/cot_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CotMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: setup_map
  {
    if (msg.setup_map.size() == 0) {
      out << "setup_map: []";
    } else {
      out << "setup_map: [";
      size_t pending_items = msg.setup_map.size();
      for (auto item : msg.setup_map) {
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
  const CotMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: setup_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.setup_map.size() == 0) {
      out << "setup_map: []\n";
    } else {
      out << "setup_map:\n";
      for (auto item : msg.setup_map) {
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

inline std::string to_yaml(const CotMap_Request & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::CotMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::CotMap_Request & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::CotMap_Request>()
{
  return "loki_msgs::srv::CotMap_Request";
}

template<>
inline const char * name<loki_msgs::srv::CotMap_Request>()
{
  return "loki_msgs/srv/CotMap_Request";
}

template<>
struct has_fixed_size<loki_msgs::srv::CotMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::srv::CotMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::srv::CotMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace loki_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CotMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: setup_map
  {
    if (msg.setup_map.size() == 0) {
      out << "setup_map: []";
    } else {
      out << "setup_map: [";
      size_t pending_items = msg.setup_map.size();
      for (auto item : msg.setup_map) {
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
  const CotMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: setup_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.setup_map.size() == 0) {
      out << "setup_map: []\n";
    } else {
      out << "setup_map:\n";
      for (auto item : msg.setup_map) {
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

inline std::string to_yaml(const CotMap_Response & msg, bool use_flow_style = false)
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
  const loki_msgs::srv::CotMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  loki_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use loki_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const loki_msgs::srv::CotMap_Response & msg)
{
  return loki_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<loki_msgs::srv::CotMap_Response>()
{
  return "loki_msgs::srv::CotMap_Response";
}

template<>
inline const char * name<loki_msgs::srv::CotMap_Response>()
{
  return "loki_msgs/srv/CotMap_Response";
}

template<>
struct has_fixed_size<loki_msgs::srv::CotMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<loki_msgs::srv::CotMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<loki_msgs::srv::CotMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<loki_msgs::srv::CotMap>()
{
  return "loki_msgs::srv::CotMap";
}

template<>
inline const char * name<loki_msgs::srv::CotMap>()
{
  return "loki_msgs/srv/CotMap";
}

template<>
struct has_fixed_size<loki_msgs::srv::CotMap>
  : std::integral_constant<
    bool,
    has_fixed_size<loki_msgs::srv::CotMap_Request>::value &&
    has_fixed_size<loki_msgs::srv::CotMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<loki_msgs::srv::CotMap>
  : std::integral_constant<
    bool,
    has_bounded_size<loki_msgs::srv::CotMap_Request>::value &&
    has_bounded_size<loki_msgs::srv::CotMap_Response>::value
  >
{
};

template<>
struct is_service<loki_msgs::srv::CotMap>
  : std::true_type
{
};

template<>
struct is_service_request<loki_msgs::srv::CotMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<loki_msgs::srv::CotMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LOKI_MSGS__SRV__DETAIL__COT_MAP__TRAITS_HPP_

// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from loki_msgs:srv/SetBools.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "loki_msgs/srv/detail/set_bools__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetBools_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBools_Request_type_support_ids_t;

static const _SetBools_Request_type_support_ids_t _SetBools_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetBools_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBools_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBools_Request_type_support_symbol_names_t _SetBools_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, loki_msgs, srv, SetBools_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, srv, SetBools_Request)),
  }
};

typedef struct _SetBools_Request_type_support_data_t
{
  void * data[2];
} _SetBools_Request_type_support_data_t;

static _SetBools_Request_type_support_data_t _SetBools_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBools_Request_message_typesupport_map = {
  2,
  "loki_msgs",
  &_SetBools_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetBools_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetBools_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBools_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBools_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace loki_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<loki_msgs::srv::SetBools_Request>()
{
  return &::loki_msgs::srv::rosidl_typesupport_cpp::SetBools_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, loki_msgs, srv, SetBools_Request)() {
  return get_message_type_support_handle<loki_msgs::srv::SetBools_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "loki_msgs/srv/detail/set_bools__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetBools_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBools_Response_type_support_ids_t;

static const _SetBools_Response_type_support_ids_t _SetBools_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetBools_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBools_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBools_Response_type_support_symbol_names_t _SetBools_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, loki_msgs, srv, SetBools_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, srv, SetBools_Response)),
  }
};

typedef struct _SetBools_Response_type_support_data_t
{
  void * data[2];
} _SetBools_Response_type_support_data_t;

static _SetBools_Response_type_support_data_t _SetBools_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBools_Response_message_typesupport_map = {
  2,
  "loki_msgs",
  &_SetBools_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetBools_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetBools_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBools_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBools_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace loki_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<loki_msgs::srv::SetBools_Response>()
{
  return &::loki_msgs::srv::rosidl_typesupport_cpp::SetBools_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, loki_msgs, srv, SetBools_Response)() {
  return get_message_type_support_handle<loki_msgs::srv::SetBools_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "loki_msgs/srv/detail/set_bools__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetBools_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBools_type_support_ids_t;

static const _SetBools_type_support_ids_t _SetBools_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetBools_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBools_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBools_type_support_symbol_names_t _SetBools_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, loki_msgs, srv, SetBools)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, loki_msgs, srv, SetBools)),
  }
};

typedef struct _SetBools_type_support_data_t
{
  void * data[2];
} _SetBools_type_support_data_t;

static _SetBools_type_support_data_t _SetBools_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBools_service_typesupport_map = {
  2,
  "loki_msgs",
  &_SetBools_service_typesupport_ids.typesupport_identifier[0],
  &_SetBools_service_typesupport_symbol_names.symbol_name[0],
  &_SetBools_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetBools_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBools_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace loki_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<loki_msgs::srv::SetBools>()
{
  return &::loki_msgs::srv::rosidl_typesupport_cpp::SetBools_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

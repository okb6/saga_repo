// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/DriveParams.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__DRIVE_PARAMS__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__DRIVE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/drive_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_DriveParams_Request_can_id
{
public:
  explicit Init_DriveParams_Request_can_id(::loki_msgs::srv::DriveParams_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::DriveParams_Request can_id(::loki_msgs::srv::DriveParams_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::DriveParams_Request msg_;
};

class Init_DriveParams_Request_params
{
public:
  Init_DriveParams_Request_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveParams_Request_can_id params(::loki_msgs::srv::DriveParams_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_DriveParams_Request_can_id(msg_);
  }

private:
  ::loki_msgs::srv::DriveParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::DriveParams_Request>()
{
  return loki_msgs::srv::builder::Init_DriveParams_Request_params();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_DriveParams_Response_status
{
public:
  explicit Init_DriveParams_Response_status(::loki_msgs::srv::DriveParams_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::DriveParams_Response status(::loki_msgs::srv::DriveParams_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::DriveParams_Response msg_;
};

class Init_DriveParams_Response_message
{
public:
  Init_DriveParams_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveParams_Response_status message(::loki_msgs::srv::DriveParams_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DriveParams_Response_status(msg_);
  }

private:
  ::loki_msgs::srv::DriveParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::DriveParams_Response>()
{
  return loki_msgs::srv::builder::Init_DriveParams_Response_message();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__DRIVE_PARAMS__BUILDER_HPP_

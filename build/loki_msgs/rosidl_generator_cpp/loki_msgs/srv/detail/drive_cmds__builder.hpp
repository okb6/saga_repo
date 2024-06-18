// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/DriveCmds.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__DRIVE_CMDS__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__DRIVE_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/drive_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_DriveCmds_Request_commands
{
public:
  Init_DriveCmds_Request_commands()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::DriveCmds_Request commands(::loki_msgs::srv::DriveCmds_Request::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::DriveCmds_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::DriveCmds_Request>()
{
  return loki_msgs::srv::builder::Init_DriveCmds_Request_commands();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::DriveCmds_Response>()
{
  return ::loki_msgs::srv::DriveCmds_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__DRIVE_CMDS__BUILDER_HPP_

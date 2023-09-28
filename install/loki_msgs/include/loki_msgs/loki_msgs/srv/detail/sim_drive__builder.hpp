// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/SimDrive.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SIM_DRIVE__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__SIM_DRIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/sim_drive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_SimDrive_Request_commands
{
public:
  Init_SimDrive_Request_commands()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::SimDrive_Request commands(::loki_msgs::srv::SimDrive_Request::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::SimDrive_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::SimDrive_Request>()
{
  return loki_msgs::srv::builder::Init_SimDrive_Request_commands();
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
auto build<::loki_msgs::srv::SimDrive_Response>()
{
  return ::loki_msgs::srv::SimDrive_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__SIM_DRIVE__BUILDER_HPP_

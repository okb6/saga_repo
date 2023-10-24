// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/StatesOfIO.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__STATES_OF_IO__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__STATES_OF_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/states_of_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_StatesOfIO_Request_states
{
public:
  Init_StatesOfIO_Request_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::StatesOfIO_Request states(::loki_msgs::srv::StatesOfIO_Request::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::StatesOfIO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::StatesOfIO_Request>()
{
  return loki_msgs::srv::builder::Init_StatesOfIO_Request_states();
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
auto build<::loki_msgs::srv::StatesOfIO_Response>()
{
  return ::loki_msgs::srv::StatesOfIO_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__STATES_OF_IO__BUILDER_HPP_

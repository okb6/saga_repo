// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/ContArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__CONT_ARRAY__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__CONT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/cont_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_ContArray_Request_on
{
public:
  Init_ContArray_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::ContArray_Request on(::loki_msgs::srv::ContArray_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::ContArray_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::ContArray_Request>()
{
  return loki_msgs::srv::builder::Init_ContArray_Request_on();
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
auto build<::loki_msgs::srv::ContArray_Response>()
{
  return ::loki_msgs::srv::ContArray_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__CONT_ARRAY__BUILDER_HPP_

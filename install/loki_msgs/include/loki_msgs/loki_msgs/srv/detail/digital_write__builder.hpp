// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/DigitalWrite.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__DIGITAL_WRITE__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__DIGITAL_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/digital_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_DigitalWrite_Request_data
{
public:
  explicit Init_DigitalWrite_Request_data(::loki_msgs::srv::DigitalWrite_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::DigitalWrite_Request data(::loki_msgs::srv::DigitalWrite_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::DigitalWrite_Request msg_;
};

class Init_DigitalWrite_Request_pin
{
public:
  Init_DigitalWrite_Request_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DigitalWrite_Request_data pin(::loki_msgs::srv::DigitalWrite_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_DigitalWrite_Request_data(msg_);
  }

private:
  ::loki_msgs::srv::DigitalWrite_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::DigitalWrite_Request>()
{
  return loki_msgs::srv::builder::Init_DigitalWrite_Request_pin();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_DigitalWrite_Response_success
{
public:
  explicit Init_DigitalWrite_Response_success(::loki_msgs::srv::DigitalWrite_Response & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::DigitalWrite_Response success(::loki_msgs::srv::DigitalWrite_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::DigitalWrite_Response msg_;
};

class Init_DigitalWrite_Response_message
{
public:
  Init_DigitalWrite_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DigitalWrite_Response_success message(::loki_msgs::srv::DigitalWrite_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DigitalWrite_Response_success(msg_);
  }

private:
  ::loki_msgs::srv::DigitalWrite_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::DigitalWrite_Response>()
{
  return loki_msgs::srv::builder::Init_DigitalWrite_Response_message();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__DIGITAL_WRITE__BUILDER_HPP_

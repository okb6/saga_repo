// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:srv/MotCot.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__MOT_COT__BUILDER_HPP_
#define LOKI_MSGS__SRV__DETAIL__MOT_COT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/srv/detail/mot_cot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_MotCot_Request_setup_value
{
public:
  explicit Init_MotCot_Request_setup_value(::loki_msgs::srv::MotCot_Request & msg)
  : msg_(msg)
  {}
  ::loki_msgs::srv::MotCot_Request setup_value(::loki_msgs::srv::MotCot_Request::_setup_value_type arg)
  {
    msg_.setup_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::MotCot_Request msg_;
};

class Init_MotCot_Request_setup_id
{
public:
  explicit Init_MotCot_Request_setup_id(::loki_msgs::srv::MotCot_Request & msg)
  : msg_(msg)
  {}
  Init_MotCot_Request_setup_value setup_id(::loki_msgs::srv::MotCot_Request::_setup_id_type arg)
  {
    msg_.setup_id = std::move(arg);
    return Init_MotCot_Request_setup_value(msg_);
  }

private:
  ::loki_msgs::srv::MotCot_Request msg_;
};

class Init_MotCot_Request_can_id
{
public:
  Init_MotCot_Request_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotCot_Request_setup_id can_id(::loki_msgs::srv::MotCot_Request::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_MotCot_Request_setup_id(msg_);
  }

private:
  ::loki_msgs::srv::MotCot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::MotCot_Request>()
{
  return loki_msgs::srv::builder::Init_MotCot_Request_can_id();
}

}  // namespace loki_msgs


namespace loki_msgs
{

namespace srv
{

namespace builder
{

class Init_MotCot_Response_setup
{
public:
  Init_MotCot_Response_setup()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::loki_msgs::srv::MotCot_Response setup(::loki_msgs::srv::MotCot_Response::_setup_type arg)
  {
    msg_.setup = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::srv::MotCot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::srv::MotCot_Response>()
{
  return loki_msgs::srv::builder::Init_MotCot_Response_setup();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__MOT_COT__BUILDER_HPP_

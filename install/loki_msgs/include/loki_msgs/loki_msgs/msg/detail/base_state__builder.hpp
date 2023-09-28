// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BASE_STATE__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__BASE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/base_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_BaseState_channel
{
public:
  explicit Init_BaseState_channel(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::BaseState channel(::loki_msgs::msg::BaseState::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_steer_max_speed
{
public:
  explicit Init_BaseState_steer_max_speed(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  Init_BaseState_channel steer_max_speed(::loki_msgs::msg::BaseState::_steer_max_speed_type arg)
  {
    msg_.steer_max_speed = std::move(arg);
    return Init_BaseState_channel(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_steer_pos
{
public:
  explicit Init_BaseState_steer_pos(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  Init_BaseState_steer_max_speed steer_pos(::loki_msgs::msg::BaseState::_steer_pos_type arg)
  {
    msg_.steer_pos = std::move(arg);
    return Init_BaseState_steer_max_speed(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_steer_speed
{
public:
  explicit Init_BaseState_steer_speed(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  Init_BaseState_steer_pos steer_speed(::loki_msgs::msg::BaseState::_steer_speed_type arg)
  {
    msg_.steer_speed = std::move(arg);
    return Init_BaseState_steer_pos(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_prop_pos
{
public:
  explicit Init_BaseState_prop_pos(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  Init_BaseState_steer_speed prop_pos(::loki_msgs::msg::BaseState::_prop_pos_type arg)
  {
    msg_.prop_pos = std::move(arg);
    return Init_BaseState_steer_speed(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_prop_speed
{
public:
  explicit Init_BaseState_prop_speed(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  Init_BaseState_prop_pos prop_speed(::loki_msgs::msg::BaseState::_prop_speed_type arg)
  {
    msg_.prop_speed = std::move(arg);
    return Init_BaseState_prop_pos(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_drive_mode
{
public:
  explicit Init_BaseState_drive_mode(::loki_msgs::msg::BaseState & msg)
  : msg_(msg)
  {}
  Init_BaseState_prop_speed drive_mode(::loki_msgs::msg::BaseState::_drive_mode_type arg)
  {
    msg_.drive_mode = std::move(arg);
    return Init_BaseState_prop_speed(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

class Init_BaseState_header
{
public:
  Init_BaseState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseState_drive_mode header(::loki_msgs::msg::BaseState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BaseState_drive_mode(msg_);
  }

private:
  ::loki_msgs::msg::BaseState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::BaseState>()
{
  return loki_msgs::msg::builder::Init_BaseState_header();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BASE_STATE__BUILDER_HPP_

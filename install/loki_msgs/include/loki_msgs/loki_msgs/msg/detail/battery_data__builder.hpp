// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/battery_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryData_battery_capacity
{
public:
  explicit Init_BatteryData_battery_capacity(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::BatteryData battery_capacity(::loki_msgs::msg::BatteryData::_battery_capacity_type arg)
  {
    msg_.battery_capacity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_cycle_count
{
public:
  explicit Init_BatteryData_cycle_count(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_battery_capacity cycle_count(::loki_msgs::msg::BatteryData::_cycle_count_type arg)
  {
    msg_.cycle_count = std::move(arg);
    return Init_BatteryData_battery_capacity(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_state_of_health
{
public:
  explicit Init_BatteryData_state_of_health(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_cycle_count state_of_health(::loki_msgs::msg::BatteryData::_state_of_health_type arg)
  {
    msg_.state_of_health = std::move(arg);
    return Init_BatteryData_cycle_count(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_state_of_charge
{
public:
  explicit Init_BatteryData_state_of_charge(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_state_of_health state_of_charge(::loki_msgs::msg::BatteryData::_state_of_charge_type arg)
  {
    msg_.state_of_charge = std::move(arg);
    return Init_BatteryData_state_of_health(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_battery_current
{
public:
  explicit Init_BatteryData_battery_current(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_state_of_charge battery_current(::loki_msgs::msg::BatteryData::_battery_current_type arg)
  {
    msg_.battery_current = std::move(arg);
    return Init_BatteryData_state_of_charge(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_battery_voltage
{
public:
  explicit Init_BatteryData_battery_voltage(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_battery_current battery_voltage(::loki_msgs::msg::BatteryData::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_BatteryData_battery_current(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_discharge_fet_on
{
public:
  explicit Init_BatteryData_discharge_fet_on(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_battery_voltage discharge_fet_on(::loki_msgs::msg::BatteryData::_discharge_fet_on_type arg)
  {
    msg_.discharge_fet_on = std::move(arg);
    return Init_BatteryData_battery_voltage(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_charge_fet_on
{
public:
  explicit Init_BatteryData_charge_fet_on(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_discharge_fet_on charge_fet_on(::loki_msgs::msg::BatteryData::_charge_fet_on_type arg)
  {
    msg_.charge_fet_on = std::move(arg);
    return Init_BatteryData_discharge_fet_on(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_battery_alarms
{
public:
  explicit Init_BatteryData_battery_alarms(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_charge_fet_on battery_alarms(::loki_msgs::msg::BatteryData::_battery_alarms_type arg)
  {
    msg_.battery_alarms = std::move(arg);
    return Init_BatteryData_charge_fet_on(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_temperatures
{
public:
  explicit Init_BatteryData_temperatures(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_battery_alarms temperatures(::loki_msgs::msg::BatteryData::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return Init_BatteryData_battery_alarms(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_battery_state
{
public:
  explicit Init_BatteryData_battery_state(::loki_msgs::msg::BatteryData & msg)
  : msg_(msg)
  {}
  Init_BatteryData_temperatures battery_state(::loki_msgs::msg::BatteryData::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return Init_BatteryData_temperatures(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

class Init_BatteryData_battery_id
{
public:
  Init_BatteryData_battery_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryData_battery_state battery_id(::loki_msgs::msg::BatteryData::_battery_id_type arg)
  {
    msg_.battery_id = std::move(arg);
    return Init_BatteryData_battery_state(msg_);
  }

private:
  ::loki_msgs::msg::BatteryData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::BatteryData>()
{
  return loki_msgs::msg::builder::Init_BatteryData_battery_id();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__BUILDER_HPP_

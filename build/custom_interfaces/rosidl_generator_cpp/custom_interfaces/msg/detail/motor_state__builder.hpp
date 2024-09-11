// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorState_actual_torque
{
public:
  explicit Init_MotorState_actual_torque(::custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::MotorState actual_torque(::custom_interfaces::msg::MotorState::_actual_torque_type arg)
  {
    msg_.actual_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_actual_acceleration
{
public:
  explicit Init_MotorState_actual_acceleration(::custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_actual_torque actual_acceleration(::custom_interfaces::msg::MotorState::_actual_acceleration_type arg)
  {
    msg_.actual_acceleration = std::move(arg);
    return Init_MotorState_actual_torque(msg_);
  }

private:
  ::custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_actual_velocity
{
public:
  explicit Init_MotorState_actual_velocity(::custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_actual_acceleration actual_velocity(::custom_interfaces::msg::MotorState::_actual_velocity_type arg)
  {
    msg_.actual_velocity = std::move(arg);
    return Init_MotorState_actual_acceleration(msg_);
  }

private:
  ::custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_actual_position
{
public:
  explicit Init_MotorState_actual_position(::custom_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_actual_velocity actual_position(::custom_interfaces::msg::MotorState::_actual_position_type arg)
  {
    msg_.actual_position = std::move(arg);
    return Init_MotorState_actual_velocity(msg_);
  }

private:
  ::custom_interfaces::msg::MotorState msg_;
};

class Init_MotorState_header
{
public:
  Init_MotorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_actual_position header(::custom_interfaces::msg::MotorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorState_actual_position(msg_);
  }

private:
  ::custom_interfaces::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::MotorState>()
{
  return custom_interfaces::msg::builder::Init_MotorState_header();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

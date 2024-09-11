// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_target_velocity_profile
{
public:
  explicit Init_MotorCommand_target_velocity_profile(::custom_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::MotorCommand target_velocity_profile(::custom_interfaces::msg::MotorCommand::_target_velocity_profile_type arg)
  {
    msg_.target_velocity_profile = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_target_position
{
public:
  explicit Init_MotorCommand_target_position(::custom_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_target_velocity_profile target_position(::custom_interfaces::msg::MotorCommand::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_MotorCommand_target_velocity_profile(msg_);
  }

private:
  ::custom_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_header
{
public:
  Init_MotorCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_target_position header(::custom_interfaces::msg::MotorCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorCommand_target_position(msg_);
  }

private:
  ::custom_interfaces::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::MotorCommand>()
{
  return custom_interfaces::msg::builder::Init_MotorCommand_header();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

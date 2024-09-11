// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/MoveMotorDirect.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MOVE_MOTOR_DIRECT__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__MOVE_MOTOR_DIRECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/move_motor_direct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveMotorDirect_Request_target_velocity_profile
{
public:
  explicit Init_MoveMotorDirect_Request_target_velocity_profile(::custom_interfaces::srv::MoveMotorDirect_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::MoveMotorDirect_Request target_velocity_profile(::custom_interfaces::srv::MoveMotorDirect_Request::_target_velocity_profile_type arg)
  {
    msg_.target_velocity_profile = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::MoveMotorDirect_Request msg_;
};

class Init_MoveMotorDirect_Request_target_position
{
public:
  explicit Init_MoveMotorDirect_Request_target_position(::custom_interfaces::srv::MoveMotorDirect_Request & msg)
  : msg_(msg)
  {}
  Init_MoveMotorDirect_Request_target_velocity_profile target_position(::custom_interfaces::srv::MoveMotorDirect_Request::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_MoveMotorDirect_Request_target_velocity_profile(msg_);
  }

private:
  ::custom_interfaces::srv::MoveMotorDirect_Request msg_;
};

class Init_MoveMotorDirect_Request_index_motor
{
public:
  Init_MoveMotorDirect_Request_index_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveMotorDirect_Request_target_position index_motor(::custom_interfaces::srv::MoveMotorDirect_Request::_index_motor_type arg)
  {
    msg_.index_motor = std::move(arg);
    return Init_MoveMotorDirect_Request_target_position(msg_);
  }

private:
  ::custom_interfaces::srv::MoveMotorDirect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::MoveMotorDirect_Request>()
{
  return custom_interfaces::srv::builder::Init_MoveMotorDirect_Request_index_motor();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveMotorDirect_Response_success
{
public:
  Init_MoveMotorDirect_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::MoveMotorDirect_Response success(::custom_interfaces::srv::MoveMotorDirect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::MoveMotorDirect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::MoveMotorDirect_Response>()
{
  return custom_interfaces::srv::builder::Init_MoveMotorDirect_Response_success();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MOVE_MOTOR_DIRECT__BUILDER_HPP_

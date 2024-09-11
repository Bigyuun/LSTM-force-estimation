// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/MoveToolAngle.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__MOVE_TOOL_ANGLE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__MOVE_TOOL_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/move_tool_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToolAngle_Request_mode
{
public:
  explicit Init_MoveToolAngle_Request_mode(::custom_interfaces::srv::MoveToolAngle_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::MoveToolAngle_Request mode(::custom_interfaces::srv::MoveToolAngle_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::MoveToolAngle_Request msg_;
};

class Init_MoveToolAngle_Request_gripangle
{
public:
  explicit Init_MoveToolAngle_Request_gripangle(::custom_interfaces::srv::MoveToolAngle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToolAngle_Request_mode gripangle(::custom_interfaces::srv::MoveToolAngle_Request::_gripangle_type arg)
  {
    msg_.gripangle = std::move(arg);
    return Init_MoveToolAngle_Request_mode(msg_);
  }

private:
  ::custom_interfaces::srv::MoveToolAngle_Request msg_;
};

class Init_MoveToolAngle_Request_panangle
{
public:
  explicit Init_MoveToolAngle_Request_panangle(::custom_interfaces::srv::MoveToolAngle_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToolAngle_Request_gripangle panangle(::custom_interfaces::srv::MoveToolAngle_Request::_panangle_type arg)
  {
    msg_.panangle = std::move(arg);
    return Init_MoveToolAngle_Request_gripangle(msg_);
  }

private:
  ::custom_interfaces::srv::MoveToolAngle_Request msg_;
};

class Init_MoveToolAngle_Request_tiltangle
{
public:
  Init_MoveToolAngle_Request_tiltangle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToolAngle_Request_panangle tiltangle(::custom_interfaces::srv::MoveToolAngle_Request::_tiltangle_type arg)
  {
    msg_.tiltangle = std::move(arg);
    return Init_MoveToolAngle_Request_panangle(msg_);
  }

private:
  ::custom_interfaces::srv::MoveToolAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::MoveToolAngle_Request>()
{
  return custom_interfaces::srv::builder::Init_MoveToolAngle_Request_tiltangle();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToolAngle_Response_success
{
public:
  Init_MoveToolAngle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::MoveToolAngle_Response success(::custom_interfaces::srv::MoveToolAngle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::MoveToolAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::MoveToolAngle_Response>()
{
  return custom_interfaces::srv::builder::Init_MoveToolAngle_Response_success();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__MOVE_TOOL_ANGLE__BUILDER_HPP_

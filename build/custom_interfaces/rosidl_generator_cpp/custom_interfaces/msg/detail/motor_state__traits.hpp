// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: actual_position
  {
    if (msg.actual_position.size() == 0) {
      out << "actual_position: []";
    } else {
      out << "actual_position: [";
      size_t pending_items = msg.actual_position.size();
      for (auto item : msg.actual_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_velocity
  {
    if (msg.actual_velocity.size() == 0) {
      out << "actual_velocity: []";
    } else {
      out << "actual_velocity: [";
      size_t pending_items = msg.actual_velocity.size();
      for (auto item : msg.actual_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_acceleration
  {
    if (msg.actual_acceleration.size() == 0) {
      out << "actual_acceleration: []";
    } else {
      out << "actual_acceleration: [";
      size_t pending_items = msg.actual_acceleration.size();
      for (auto item : msg.actual_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_torque
  {
    if (msg.actual_torque.size() == 0) {
      out << "actual_torque: []";
    } else {
      out << "actual_torque: [";
      size_t pending_items = msg.actual_torque.size();
      for (auto item : msg.actual_torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: actual_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_position.size() == 0) {
      out << "actual_position: []\n";
    } else {
      out << "actual_position:\n";
      for (auto item : msg.actual_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_velocity.size() == 0) {
      out << "actual_velocity: []\n";
    } else {
      out << "actual_velocity:\n";
      for (auto item : msg.actual_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_acceleration.size() == 0) {
      out << "actual_acceleration: []\n";
    } else {
      out << "actual_acceleration:\n";
      for (auto item : msg.actual_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_torque.size() == 0) {
      out << "actual_torque: []\n";
    } else {
      out << "actual_torque:\n";
      for (auto item : msg.actual_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::MotorState & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::MotorState>()
{
  return "custom_interfaces::msg::MotorState";
}

template<>
inline const char * name<custom_interfaces::msg::MotorState>()
{
  return "custom_interfaces/msg/MotorState";
}

template<>
struct has_fixed_size<custom_interfaces::msg::MotorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::MotorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

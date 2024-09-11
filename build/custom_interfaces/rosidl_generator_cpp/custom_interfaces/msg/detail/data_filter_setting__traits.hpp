// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/DataFilterSetting.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/data_filter_setting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataFilterSetting & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: set_lpf
  {
    out << "set_lpf: ";
    rosidl_generator_traits::value_to_yaml(msg.set_lpf, out);
    out << ", ";
  }

  // member: set_maf
  {
    out << "set_maf: ";
    rosidl_generator_traits::value_to_yaml(msg.set_maf, out);
    out << ", ";
  }

  // member: lpf_weight
  {
    out << "lpf_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.lpf_weight, out);
    out << ", ";
  }

  // member: maf_buffer_size
  {
    out << "maf_buffer_size: ";
    rosidl_generator_traits::value_to_yaml(msg.maf_buffer_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataFilterSetting & msg,
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

  // member: set_lpf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_lpf: ";
    rosidl_generator_traits::value_to_yaml(msg.set_lpf, out);
    out << "\n";
  }

  // member: set_maf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_maf: ";
    rosidl_generator_traits::value_to_yaml(msg.set_maf, out);
    out << "\n";
  }

  // member: lpf_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lpf_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.lpf_weight, out);
    out << "\n";
  }

  // member: maf_buffer_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maf_buffer_size: ";
    rosidl_generator_traits::value_to_yaml(msg.maf_buffer_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataFilterSetting & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::DataFilterSetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::DataFilterSetting & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::DataFilterSetting>()
{
  return "custom_interfaces::msg::DataFilterSetting";
}

template<>
inline const char * name<custom_interfaces::msg::DataFilterSetting>()
{
  return "custom_interfaces/msg/DataFilterSetting";
}

template<>
struct has_fixed_size<custom_interfaces::msg::DataFilterSetting>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<custom_interfaces::msg::DataFilterSetting>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<custom_interfaces::msg::DataFilterSetting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__TRAITS_HPP_

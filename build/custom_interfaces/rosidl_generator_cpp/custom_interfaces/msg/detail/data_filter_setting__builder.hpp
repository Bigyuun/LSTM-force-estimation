// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/DataFilterSetting.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/data_filter_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_DataFilterSetting_maf_buffer_size
{
public:
  explicit Init_DataFilterSetting_maf_buffer_size(::custom_interfaces::msg::DataFilterSetting & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::DataFilterSetting maf_buffer_size(::custom_interfaces::msg::DataFilterSetting::_maf_buffer_size_type arg)
  {
    msg_.maf_buffer_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::DataFilterSetting msg_;
};

class Init_DataFilterSetting_lpf_weight
{
public:
  explicit Init_DataFilterSetting_lpf_weight(::custom_interfaces::msg::DataFilterSetting & msg)
  : msg_(msg)
  {}
  Init_DataFilterSetting_maf_buffer_size lpf_weight(::custom_interfaces::msg::DataFilterSetting::_lpf_weight_type arg)
  {
    msg_.lpf_weight = std::move(arg);
    return Init_DataFilterSetting_maf_buffer_size(msg_);
  }

private:
  ::custom_interfaces::msg::DataFilterSetting msg_;
};

class Init_DataFilterSetting_set_maf
{
public:
  explicit Init_DataFilterSetting_set_maf(::custom_interfaces::msg::DataFilterSetting & msg)
  : msg_(msg)
  {}
  Init_DataFilterSetting_lpf_weight set_maf(::custom_interfaces::msg::DataFilterSetting::_set_maf_type arg)
  {
    msg_.set_maf = std::move(arg);
    return Init_DataFilterSetting_lpf_weight(msg_);
  }

private:
  ::custom_interfaces::msg::DataFilterSetting msg_;
};

class Init_DataFilterSetting_set_lpf
{
public:
  explicit Init_DataFilterSetting_set_lpf(::custom_interfaces::msg::DataFilterSetting & msg)
  : msg_(msg)
  {}
  Init_DataFilterSetting_set_maf set_lpf(::custom_interfaces::msg::DataFilterSetting::_set_lpf_type arg)
  {
    msg_.set_lpf = std::move(arg);
    return Init_DataFilterSetting_set_maf(msg_);
  }

private:
  ::custom_interfaces::msg::DataFilterSetting msg_;
};

class Init_DataFilterSetting_header
{
public:
  Init_DataFilterSetting_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataFilterSetting_set_lpf header(::custom_interfaces::msg::DataFilterSetting::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DataFilterSetting_set_lpf(msg_);
  }

private:
  ::custom_interfaces::msg::DataFilterSetting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::DataFilterSetting>()
{
  return custom_interfaces::msg::builder::Init_DataFilterSetting_header();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DATA_FILTER_SETTING__BUILDER_HPP_

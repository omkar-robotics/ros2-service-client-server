// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_service_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_service_interfaces/srv/detail/reset_counter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCounter_Request_reset_value
{
public:
  Init_ResetCounter_Request_reset_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_service_interfaces::srv::ResetCounter_Request reset_value(::my_service_interfaces::srv::ResetCounter_Request::_reset_value_type arg)
  {
    msg_.reset_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_interfaces::srv::ResetCounter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_interfaces::srv::ResetCounter_Request>()
{
  return my_service_interfaces::srv::builder::Init_ResetCounter_Request_reset_value();
}

}  // namespace my_service_interfaces


namespace my_service_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCounter_Response_message
{
public:
  explicit Init_ResetCounter_Response_message(::my_service_interfaces::srv::ResetCounter_Response & msg)
  : msg_(msg)
  {}
  ::my_service_interfaces::srv::ResetCounter_Response message(::my_service_interfaces::srv::ResetCounter_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_service_interfaces::srv::ResetCounter_Response msg_;
};

class Init_ResetCounter_Response_success
{
public:
  Init_ResetCounter_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetCounter_Response_message success(::my_service_interfaces::srv::ResetCounter_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ResetCounter_Response_message(msg_);
  }

private:
  ::my_service_interfaces::srv::ResetCounter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_service_interfaces::srv::ResetCounter_Response>()
{
  return my_service_interfaces::srv::builder::Init_ResetCounter_Response_success();
}

}  // namespace my_service_interfaces

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_

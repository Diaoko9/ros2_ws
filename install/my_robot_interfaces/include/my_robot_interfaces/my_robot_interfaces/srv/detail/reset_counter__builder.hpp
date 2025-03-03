// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/ResetCounter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/srv/reset_counter.hpp"


#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/reset_counter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
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
  ::my_robot_interfaces::srv::ResetCounter_Request reset_value(::my_robot_interfaces::srv::ResetCounter_Request::_reset_value_type arg)
  {
    msg_.reset_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::ResetCounter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::ResetCounter_Request>()
{
  return my_robot_interfaces::srv::builder::Init_ResetCounter_Request_reset_value();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCounter_Response_message
{
public:
  explicit Init_ResetCounter_Response_message(::my_robot_interfaces::srv::ResetCounter_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::ResetCounter_Response message(::my_robot_interfaces::srv::ResetCounter_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::ResetCounter_Response msg_;
};

class Init_ResetCounter_Response_success
{
public:
  Init_ResetCounter_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetCounter_Response_message success(::my_robot_interfaces::srv::ResetCounter_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ResetCounter_Response_message(msg_);
  }

private:
  ::my_robot_interfaces::srv::ResetCounter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::ResetCounter_Response>()
{
  return my_robot_interfaces::srv::builder::Init_ResetCounter_Response_success();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetCounter_Event_response
{
public:
  explicit Init_ResetCounter_Event_response(::my_robot_interfaces::srv::ResetCounter_Event & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::ResetCounter_Event response(::my_robot_interfaces::srv::ResetCounter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::ResetCounter_Event msg_;
};

class Init_ResetCounter_Event_request
{
public:
  explicit Init_ResetCounter_Event_request(::my_robot_interfaces::srv::ResetCounter_Event & msg)
  : msg_(msg)
  {}
  Init_ResetCounter_Event_response request(::my_robot_interfaces::srv::ResetCounter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetCounter_Event_response(msg_);
  }

private:
  ::my_robot_interfaces::srv::ResetCounter_Event msg_;
};

class Init_ResetCounter_Event_info
{
public:
  Init_ResetCounter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetCounter_Event_request info(::my_robot_interfaces::srv::ResetCounter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetCounter_Event_request(msg_);
  }

private:
  ::my_robot_interfaces::srv::ResetCounter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::ResetCounter_Event>()
{
  return my_robot_interfaces::srv::builder::Init_ResetCounter_Event_info();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__RESET_COUNTER__BUILDER_HPP_

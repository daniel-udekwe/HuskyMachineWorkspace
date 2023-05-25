// Generated by gencpp from file kortex_driver/GetBridgeList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETBRIDGELIST_H
#define KORTEX_DRIVER_MESSAGE_GETBRIDGELIST_H

#include <ros/service_traits.h>


#include <kortex_driver/GetBridgeListRequest.h>
#include <kortex_driver/GetBridgeListResponse.h>


namespace kortex_driver
{

struct GetBridgeList
{

typedef GetBridgeListRequest Request;
typedef GetBridgeListResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetBridgeList
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::GetBridgeList > {
  static const char* value()
  {
    return "866f5d10e4d60286569bdfe7c65c5078";
  }

  static const char* value(const ::kortex_driver::GetBridgeList&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::GetBridgeList > {
  static const char* value()
  {
    return "kortex_driver/GetBridgeList";
  }

  static const char* value(const ::kortex_driver::GetBridgeList&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::GetBridgeListRequest> should match
// service_traits::MD5Sum< ::kortex_driver::GetBridgeList >
template<>
struct MD5Sum< ::kortex_driver::GetBridgeListRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetBridgeList >::value();
  }
  static const char* value(const ::kortex_driver::GetBridgeListRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetBridgeListRequest> should match
// service_traits::DataType< ::kortex_driver::GetBridgeList >
template<>
struct DataType< ::kortex_driver::GetBridgeListRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetBridgeList >::value();
  }
  static const char* value(const ::kortex_driver::GetBridgeListRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::GetBridgeListResponse> should match
// service_traits::MD5Sum< ::kortex_driver::GetBridgeList >
template<>
struct MD5Sum< ::kortex_driver::GetBridgeListResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetBridgeList >::value();
  }
  static const char* value(const ::kortex_driver::GetBridgeListResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetBridgeListResponse> should match
// service_traits::DataType< ::kortex_driver::GetBridgeList >
template<>
struct DataType< ::kortex_driver::GetBridgeListResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetBridgeList >::value();
  }
  static const char* value(const ::kortex_driver::GetBridgeListResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETBRIDGELIST_H
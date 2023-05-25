// Generated by gencpp from file kortex_driver/IsCommunicationInterfaceEnableRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ISCOMMUNICATIONINTERFACEENABLEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_ISCOMMUNICATIONINTERFACEENABLEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/NetworkHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct IsCommunicationInterfaceEnableRequest_
{
  typedef IsCommunicationInterfaceEnableRequest_<ContainerAllocator> Type;

  IsCommunicationInterfaceEnableRequest_()
    : input()  {
    }
  IsCommunicationInterfaceEnableRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::NetworkHandle_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> const> ConstPtr;

}; // struct IsCommunicationInterfaceEnableRequest_

typedef ::kortex_driver::IsCommunicationInterfaceEnableRequest_<std::allocator<void> > IsCommunicationInterfaceEnableRequest;

typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableRequest > IsCommunicationInterfaceEnableRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableRequest const> IsCommunicationInterfaceEnableRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d83837d5994a891dad63c33420a4fcdf";
  }

  static const char* value(const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd83837d5994a891dULL;
  static const uint64_t static_value2 = 0xad63c33420a4fcdfULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/IsCommunicationInterfaceEnableRequest";
  }

  static const char* value(const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "NetworkHandle input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/NetworkHandle\n"
"\n"
"uint32 type\n"
;
  }

  static const char* value(const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsCommunicationInterfaceEnableRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::IsCommunicationInterfaceEnableRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::NetworkHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ISCOMMUNICATIONINTERFACEENABLEREQUEST_H
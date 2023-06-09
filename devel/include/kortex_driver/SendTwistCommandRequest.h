// Generated by gencpp from file kortex_driver/SendTwistCommandRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SENDTWISTCOMMANDREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SENDTWISTCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/TwistCommand.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SendTwistCommandRequest_
{
  typedef SendTwistCommandRequest_<ContainerAllocator> Type;

  SendTwistCommandRequest_()
    : input()  {
    }
  SendTwistCommandRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::TwistCommand_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendTwistCommandRequest_

typedef ::kortex_driver::SendTwistCommandRequest_<std::allocator<void> > SendTwistCommandRequest;

typedef boost::shared_ptr< ::kortex_driver::SendTwistCommandRequest > SendTwistCommandRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SendTwistCommandRequest const> SendTwistCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e2f5e776c31a0aac17207a7e8c8abc3";
  }

  static const char* value(const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e2f5e776c31a0aaULL;
  static const uint64_t static_value2 = 0xc17207a7e8c8abc3ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SendTwistCommandRequest";
  }

  static const char* value(const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "TwistCommand input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/TwistCommand\n"
"\n"
"uint32 reference_frame\n"
"Twist twist\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/Twist\n"
"\n"
"float32 linear_x\n"
"float32 linear_y\n"
"float32 linear_z\n"
"float32 angular_x\n"
"float32 angular_y\n"
"float32 angular_z\n"
;
  }

  static const char* value(const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendTwistCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SendTwistCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::TwistCommand_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SENDTWISTCOMMANDREQUEST_H

// Generated by gencpp from file kortex_driver/ResetGravityVectorRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_RESETGRAVITYVECTORREQUEST_H
#define KORTEX_DRIVER_MESSAGE_RESETGRAVITYVECTORREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Empty.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ResetGravityVectorRequest_
{
  typedef ResetGravityVectorRequest_<ContainerAllocator> Type;

  ResetGravityVectorRequest_()
    : input()  {
    }
  ResetGravityVectorRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Empty_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ResetGravityVectorRequest_

typedef ::kortex_driver::ResetGravityVectorRequest_<std::allocator<void> > ResetGravityVectorRequest;

typedef boost::shared_ptr< ::kortex_driver::ResetGravityVectorRequest > ResetGravityVectorRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::ResetGravityVectorRequest const> ResetGravityVectorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa3403cd5897c9698bc0fdcb2a453fbc";
  }

  static const char* value(const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa3403cd5897c969ULL;
  static const uint64_t static_value2 = 0x8bc0fdcb2a453fbcULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ResetGravityVectorRequest";
  }

  static const char* value(const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Empty input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Empty\n"
;
  }

  static const char* value(const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetGravityVectorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ResetGravityVectorRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::Empty_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_RESETGRAVITYVECTORREQUEST_H

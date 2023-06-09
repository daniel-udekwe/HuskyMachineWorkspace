// Generated by gencpp from file kortex_driver/RequestedActionType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_REQUESTEDACTIONTYPE_H
#define KORTEX_DRIVER_MESSAGE_REQUESTEDACTIONTYPE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct RequestedActionType_
{
  typedef RequestedActionType_<ContainerAllocator> Type;

  RequestedActionType_()
    : action_type(0)  {
    }
  RequestedActionType_(const ContainerAllocator& _alloc)
    : action_type(0)  {
  (void)_alloc;
    }



   typedef uint32_t _action_type_type;
  _action_type_type action_type;





  typedef boost::shared_ptr< ::kortex_driver::RequestedActionType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::RequestedActionType_<ContainerAllocator> const> ConstPtr;

}; // struct RequestedActionType_

typedef ::kortex_driver::RequestedActionType_<std::allocator<void> > RequestedActionType;

typedef boost::shared_ptr< ::kortex_driver::RequestedActionType > RequestedActionTypePtr;
typedef boost::shared_ptr< ::kortex_driver::RequestedActionType const> RequestedActionTypeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::RequestedActionType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::RequestedActionType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::RequestedActionType_<ContainerAllocator1> & lhs, const ::kortex_driver::RequestedActionType_<ContainerAllocator2> & rhs)
{
  return lhs.action_type == rhs.action_type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::RequestedActionType_<ContainerAllocator1> & lhs, const ::kortex_driver::RequestedActionType_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::RequestedActionType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::RequestedActionType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::RequestedActionType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38655324c3c40f2a5f27841a581c389b";
  }

  static const char* value(const ::kortex_driver::RequestedActionType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38655324c3c40f2aULL;
  static const uint64_t static_value2 = 0x5f27841a581c389bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/RequestedActionType";
  }

  static const char* value(const ::kortex_driver::RequestedActionType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 action_type\n"
;
  }

  static const char* value(const ::kortex_driver::RequestedActionType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestedActionType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::RequestedActionType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::RequestedActionType_<ContainerAllocator>& v)
  {
    s << indent << "action_type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.action_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_REQUESTEDACTIONTYPE_H

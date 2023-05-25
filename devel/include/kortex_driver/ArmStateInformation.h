// Generated by gencpp from file kortex_driver/ArmStateInformation.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ARMSTATEINFORMATION_H
#define KORTEX_DRIVER_MESSAGE_ARMSTATEINFORMATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Connection.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ArmStateInformation_
{
  typedef ArmStateInformation_<ContainerAllocator> Type;

  ArmStateInformation_()
    : active_state(0)
    , connection()  {
    }
  ArmStateInformation_(const ContainerAllocator& _alloc)
    : active_state(0)
    , connection(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _active_state_type;
  _active_state_type active_state;

   typedef  ::kortex_driver::Connection_<ContainerAllocator>  _connection_type;
  _connection_type connection;





  typedef boost::shared_ptr< ::kortex_driver::ArmStateInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ArmStateInformation_<ContainerAllocator> const> ConstPtr;

}; // struct ArmStateInformation_

typedef ::kortex_driver::ArmStateInformation_<std::allocator<void> > ArmStateInformation;

typedef boost::shared_ptr< ::kortex_driver::ArmStateInformation > ArmStateInformationPtr;
typedef boost::shared_ptr< ::kortex_driver::ArmStateInformation const> ArmStateInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ArmStateInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ArmStateInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ArmStateInformation_<ContainerAllocator2> & rhs)
{
  return lhs.active_state == rhs.active_state &&
    lhs.connection == rhs.connection;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ArmStateInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ArmStateInformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ArmStateInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ArmStateInformation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ArmStateInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dae937682c51c5ef4ccc506f80df3c9f";
  }

  static const char* value(const ::kortex_driver::ArmStateInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdae937682c51c5efULL;
  static const uint64_t static_value2 = 0x4ccc506f80df3c9fULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ArmStateInformation";
  }

  static const char* value(const ::kortex_driver::ArmStateInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 active_state\n"
"Connection connection\n"
"================================================================================\n"
"MSG: kortex_driver/Connection\n"
"\n"
"UserProfileHandle user_handle\n"
"string connection_information\n"
"uint32 connection_identifier\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfileHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::ArmStateInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.active_state);
      stream.next(m.connection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArmStateInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ArmStateInformation_<ContainerAllocator>& v)
  {
    s << indent << "active_state: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.active_state);
    s << indent << "connection: ";
    s << std::endl;
    Printer< ::kortex_driver::Connection_<ContainerAllocator> >::stream(s, indent + "  ", v.connection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ARMSTATEINFORMATION_H

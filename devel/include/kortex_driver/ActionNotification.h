// Generated by gencpp from file kortex_driver/ActionNotification.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTIONNOTIFICATION_H
#define KORTEX_DRIVER_MESSAGE_ACTIONNOTIFICATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ActionHandle.h>
#include <kortex_driver/Timestamp.h>
#include <kortex_driver/UserProfileHandle.h>
#include <kortex_driver/Connection.h>
#include <kortex_driver/TrajectoryInfo.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ActionNotification_
{
  typedef ActionNotification_<ContainerAllocator> Type;

  ActionNotification_()
    : action_event(0)
    , handle()
    , timestamp()
    , user_handle()
    , abort_details(0)
    , connection()
    , trajectory_info()  {
    }
  ActionNotification_(const ContainerAllocator& _alloc)
    : action_event(0)
    , handle(_alloc)
    , timestamp(_alloc)
    , user_handle(_alloc)
    , abort_details(0)
    , connection(_alloc)
    , trajectory_info(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _action_event_type;
  _action_event_type action_event;

   typedef  ::kortex_driver::ActionHandle_<ContainerAllocator>  _handle_type;
  _handle_type handle;

   typedef  ::kortex_driver::Timestamp_<ContainerAllocator>  _timestamp_type;
  _timestamp_type timestamp;

   typedef  ::kortex_driver::UserProfileHandle_<ContainerAllocator>  _user_handle_type;
  _user_handle_type user_handle;

   typedef uint32_t _abort_details_type;
  _abort_details_type abort_details;

   typedef  ::kortex_driver::Connection_<ContainerAllocator>  _connection_type;
  _connection_type connection;

   typedef std::vector< ::kortex_driver::TrajectoryInfo_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::TrajectoryInfo_<ContainerAllocator> >> _trajectory_info_type;
  _trajectory_info_type trajectory_info;





  typedef boost::shared_ptr< ::kortex_driver::ActionNotification_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActionNotification_<ContainerAllocator> const> ConstPtr;

}; // struct ActionNotification_

typedef ::kortex_driver::ActionNotification_<std::allocator<void> > ActionNotification;

typedef boost::shared_ptr< ::kortex_driver::ActionNotification > ActionNotificationPtr;
typedef boost::shared_ptr< ::kortex_driver::ActionNotification const> ActionNotificationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActionNotification_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActionNotification_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ActionNotification_<ContainerAllocator1> & lhs, const ::kortex_driver::ActionNotification_<ContainerAllocator2> & rhs)
{
  return lhs.action_event == rhs.action_event &&
    lhs.handle == rhs.handle &&
    lhs.timestamp == rhs.timestamp &&
    lhs.user_handle == rhs.user_handle &&
    lhs.abort_details == rhs.abort_details &&
    lhs.connection == rhs.connection &&
    lhs.trajectory_info == rhs.trajectory_info;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ActionNotification_<ContainerAllocator1> & lhs, const ::kortex_driver::ActionNotification_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActionNotification_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActionNotification_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActionNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActionNotification_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActionNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActionNotification_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActionNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29e1bda02f9e209212ec0a8fc0b32300";
  }

  static const char* value(const ::kortex_driver::ActionNotification_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29e1bda02f9e2092ULL;
  static const uint64_t static_value2 = 0x12ec0a8fc0b32300ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActionNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActionNotification";
  }

  static const char* value(const ::kortex_driver::ActionNotification_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActionNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 action_event\n"
"ActionHandle handle\n"
"Timestamp timestamp\n"
"UserProfileHandle user_handle\n"
"uint32 abort_details\n"
"Connection connection\n"
"TrajectoryInfo[] trajectory_info\n"
"================================================================================\n"
"MSG: kortex_driver/ActionHandle\n"
"\n"
"uint32 identifier\n"
"uint32 action_type\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/Timestamp\n"
"\n"
"uint32 sec\n"
"uint32 usec\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfileHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/Connection\n"
"\n"
"UserProfileHandle user_handle\n"
"string connection_information\n"
"uint32 connection_identifier\n"
"================================================================================\n"
"MSG: kortex_driver/TrajectoryInfo\n"
"\n"
"uint32 trajectory_info_type\n"
"uint32 waypoint_index\n"
"uint32 joint_index\n"
;
  }

  static const char* value(const ::kortex_driver::ActionNotification_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActionNotification_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_event);
      stream.next(m.handle);
      stream.next(m.timestamp);
      stream.next(m.user_handle);
      stream.next(m.abort_details);
      stream.next(m.connection);
      stream.next(m.trajectory_info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActionNotification_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActionNotification_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ActionNotification_<ContainerAllocator>& v)
  {
    s << indent << "action_event: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.action_event);
    s << indent << "handle: ";
    s << std::endl;
    Printer< ::kortex_driver::ActionHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.handle);
    s << indent << "timestamp: ";
    s << std::endl;
    Printer< ::kortex_driver::Timestamp_<ContainerAllocator> >::stream(s, indent + "  ", v.timestamp);
    s << indent << "user_handle: ";
    s << std::endl;
    Printer< ::kortex_driver::UserProfileHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.user_handle);
    s << indent << "abort_details: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.abort_details);
    s << indent << "connection: ";
    s << std::endl;
    Printer< ::kortex_driver::Connection_<ContainerAllocator> >::stream(s, indent + "  ", v.connection);
    s << indent << "trajectory_info[]" << std::endl;
    for (size_t i = 0; i < v.trajectory_info.size(); ++i)
    {
      s << indent << "  trajectory_info[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::TrajectoryInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.trajectory_info[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTIONNOTIFICATION_H

// Generated by gencpp from file kortex_driver/ActuatorConfig_ControlModeInformation.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_CONTROLMODEINFORMATION_H
#define KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_CONTROLMODEINFORMATION_H


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
struct ActuatorConfig_ControlModeInformation_
{
  typedef ActuatorConfig_ControlModeInformation_<ContainerAllocator> Type;

  ActuatorConfig_ControlModeInformation_()
    : control_mode(0)  {
    }
  ActuatorConfig_ControlModeInformation_(const ContainerAllocator& _alloc)
    : control_mode(0)  {
  (void)_alloc;
    }



   typedef uint32_t _control_mode_type;
  _control_mode_type control_mode;





  typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorConfig_ControlModeInformation_

typedef ::kortex_driver::ActuatorConfig_ControlModeInformation_<std::allocator<void> > ActuatorConfig_ControlModeInformation;

typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlModeInformation > ActuatorConfig_ControlModeInformationPtr;
typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlModeInformation const> ActuatorConfig_ControlModeInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator2> & rhs)
{
  return lhs.control_mode == rhs.control_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c6c18afc4d9609a0ad8ceeb45431dcd5";
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc6c18afc4d9609a0ULL;
  static const uint64_t static_value2 = 0xad8ceeb45431dcd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActuatorConfig_ControlModeInformation";
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 control_mode\n"
;
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.control_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorConfig_ControlModeInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator>& v)
  {
    s << indent << "control_mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.control_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_CONTROLMODEINFORMATION_H

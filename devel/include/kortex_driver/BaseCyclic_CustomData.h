// Generated by gencpp from file kortex_driver/BaseCyclic_CustomData.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_BASECYCLIC_CUSTOMDATA_H
#define KORTEX_DRIVER_MESSAGE_BASECYCLIC_CUSTOMDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ActuatorCustomData.h>
#include <kortex_driver/InterconnectCyclic_CustomData.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct BaseCyclic_CustomData_
{
  typedef BaseCyclic_CustomData_<ContainerAllocator> Type;

  BaseCyclic_CustomData_()
    : frame_id(0)
    , custom_data_0(0)
    , custom_data_1(0)
    , custom_data_2(0)
    , custom_data_3(0)
    , custom_data_4(0)
    , custom_data_5(0)
    , custom_data_6(0)
    , custom_data_7(0)
    , actuators_custom_data()
    , interconnect_custom_data()  {
    }
  BaseCyclic_CustomData_(const ContainerAllocator& _alloc)
    : frame_id(0)
    , custom_data_0(0)
    , custom_data_1(0)
    , custom_data_2(0)
    , custom_data_3(0)
    , custom_data_4(0)
    , custom_data_5(0)
    , custom_data_6(0)
    , custom_data_7(0)
    , actuators_custom_data(_alloc)
    , interconnect_custom_data(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _frame_id_type;
  _frame_id_type frame_id;

   typedef uint32_t _custom_data_0_type;
  _custom_data_0_type custom_data_0;

   typedef uint32_t _custom_data_1_type;
  _custom_data_1_type custom_data_1;

   typedef uint32_t _custom_data_2_type;
  _custom_data_2_type custom_data_2;

   typedef uint32_t _custom_data_3_type;
  _custom_data_3_type custom_data_3;

   typedef uint32_t _custom_data_4_type;
  _custom_data_4_type custom_data_4;

   typedef uint32_t _custom_data_5_type;
  _custom_data_5_type custom_data_5;

   typedef uint32_t _custom_data_6_type;
  _custom_data_6_type custom_data_6;

   typedef uint32_t _custom_data_7_type;
  _custom_data_7_type custom_data_7;

   typedef std::vector< ::kortex_driver::ActuatorCustomData_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::ActuatorCustomData_<ContainerAllocator> >> _actuators_custom_data_type;
  _actuators_custom_data_type actuators_custom_data;

   typedef  ::kortex_driver::InterconnectCyclic_CustomData_<ContainerAllocator>  _interconnect_custom_data_type;
  _interconnect_custom_data_type interconnect_custom_data;





  typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> const> ConstPtr;

}; // struct BaseCyclic_CustomData_

typedef ::kortex_driver::BaseCyclic_CustomData_<std::allocator<void> > BaseCyclic_CustomData;

typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_CustomData > BaseCyclic_CustomDataPtr;
typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_CustomData const> BaseCyclic_CustomDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator1> & lhs, const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator2> & rhs)
{
  return lhs.frame_id == rhs.frame_id &&
    lhs.custom_data_0 == rhs.custom_data_0 &&
    lhs.custom_data_1 == rhs.custom_data_1 &&
    lhs.custom_data_2 == rhs.custom_data_2 &&
    lhs.custom_data_3 == rhs.custom_data_3 &&
    lhs.custom_data_4 == rhs.custom_data_4 &&
    lhs.custom_data_5 == rhs.custom_data_5 &&
    lhs.custom_data_6 == rhs.custom_data_6 &&
    lhs.custom_data_7 == rhs.custom_data_7 &&
    lhs.actuators_custom_data == rhs.actuators_custom_data &&
    lhs.interconnect_custom_data == rhs.interconnect_custom_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator1> & lhs, const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de86e2c250eb6e05b62cbbd55c2a087b";
  }

  static const char* value(const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde86e2c250eb6e05ULL;
  static const uint64_t static_value2 = 0xb62cbbd55c2a087bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/BaseCyclic_CustomData";
  }

  static const char* value(const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 frame_id\n"
"uint32 custom_data_0\n"
"uint32 custom_data_1\n"
"uint32 custom_data_2\n"
"uint32 custom_data_3\n"
"uint32 custom_data_4\n"
"uint32 custom_data_5\n"
"uint32 custom_data_6\n"
"uint32 custom_data_7\n"
"ActuatorCustomData[] actuators_custom_data\n"
"InterconnectCyclic_CustomData interconnect_custom_data\n"
"================================================================================\n"
"MSG: kortex_driver/ActuatorCustomData\n"
"\n"
"uint32 command_id\n"
"uint32 custom_data_0\n"
"uint32 custom_data_1\n"
"uint32 custom_data_2\n"
"uint32 custom_data_3\n"
"uint32 custom_data_4\n"
"uint32 custom_data_5\n"
"uint32 custom_data_6\n"
"uint32 custom_data_7\n"
"uint32 custom_data_8\n"
"uint32 custom_data_9\n"
"uint32 custom_data_10\n"
"uint32 custom_data_11\n"
"uint32 custom_data_12\n"
"uint32 custom_data_13\n"
"uint32 custom_data_14\n"
"uint32 custom_data_15\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_CustomData\n"
"\n"
"InterconnectCyclic_MessageId custom_data_id\n"
"uint32 custom_data_0\n"
"uint32 custom_data_1\n"
"uint32 custom_data_2\n"
"uint32 custom_data_3\n"
"uint32 custom_data_4\n"
"uint32 custom_data_5\n"
"uint32 custom_data_6\n"
"uint32 custom_data_7\n"
"uint32 custom_data_8\n"
"uint32 custom_data_9\n"
"uint32 custom_data_10\n"
"uint32 custom_data_11\n"
"uint32 custom_data_12\n"
"uint32 custom_data_13\n"
"uint32 custom_data_14\n"
"uint32 custom_data_15\n"
"InterconnectCyclic_CustomData_tool_customData oneof_tool_customData\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_CustomData_tool_customData\n"
"\n"
"GripperCyclic_CustomData[] gripper_custom_data\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_CustomData\n"
"\n"
"GripperCyclic_MessageId custom_data_id\n"
"CustomDataUnit gripper_custom_data\n"
"CustomDataUnit[] motor_custom_data\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/CustomDataUnit\n"
"\n"
"uint32 custom_data_0\n"
"uint32 custom_data_1\n"
"uint32 custom_data_2\n"
"uint32 custom_data_3\n"
"uint32 custom_data_4\n"
"uint32 custom_data_5\n"
"uint32 custom_data_6\n"
"uint32 custom_data_7\n"
"uint32 custom_data_8\n"
"uint32 custom_data_9\n"
"uint32 custom_data_10\n"
"uint32 custom_data_11\n"
"uint32 custom_data_12\n"
"uint32 custom_data_13\n"
"uint32 custom_data_14\n"
"uint32 custom_data_15\n"
;
  }

  static const char* value(const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.custom_data_0);
      stream.next(m.custom_data_1);
      stream.next(m.custom_data_2);
      stream.next(m.custom_data_3);
      stream.next(m.custom_data_4);
      stream.next(m.custom_data_5);
      stream.next(m.custom_data_6);
      stream.next(m.custom_data_7);
      stream.next(m.actuators_custom_data);
      stream.next(m.interconnect_custom_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaseCyclic_CustomData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::BaseCyclic_CustomData_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_id);
    s << indent << "custom_data_0: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_0);
    s << indent << "custom_data_1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_1);
    s << indent << "custom_data_2: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_2);
    s << indent << "custom_data_3: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_3);
    s << indent << "custom_data_4: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_4);
    s << indent << "custom_data_5: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_5);
    s << indent << "custom_data_6: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_6);
    s << indent << "custom_data_7: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_data_7);
    s << indent << "actuators_custom_data[]" << std::endl;
    for (size_t i = 0; i < v.actuators_custom_data.size(); ++i)
    {
      s << indent << "  actuators_custom_data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ActuatorCustomData_<ContainerAllocator> >::stream(s, indent + "    ", v.actuators_custom_data[i]);
    }
    s << indent << "interconnect_custom_data: ";
    s << std::endl;
    Printer< ::kortex_driver::InterconnectCyclic_CustomData_<ContainerAllocator> >::stream(s, indent + "  ", v.interconnect_custom_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_BASECYCLIC_CUSTOMDATA_H

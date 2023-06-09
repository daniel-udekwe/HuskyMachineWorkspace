// Generated by gencpp from file kortex_driver/ModelId.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_MODELID_H
#define KORTEX_DRIVER_MESSAGE_MODELID_H


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
struct ModelId_
{
  typedef ModelId_<ContainerAllocator> Type;

  ModelId_()
    {
    }
  ModelId_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MODEL_ID_UNSPECIFIED)
  #undef MODEL_ID_UNSPECIFIED
#endif
#if defined(_WIN32) && defined(MODEL_ID_L53)
  #undef MODEL_ID_L53
#endif
#if defined(_WIN32) && defined(MODEL_ID_L31)
  #undef MODEL_ID_L31
#endif
#if defined(_WIN32) && defined(MODEL_ID_HDK)
  #undef MODEL_ID_HDK
#endif

  enum {
    MODEL_ID_UNSPECIFIED = 0u,
    MODEL_ID_L53 = 1u,
    MODEL_ID_L31 = 2u,
    MODEL_ID_HDK = 3u,
  };


  typedef boost::shared_ptr< ::kortex_driver::ModelId_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ModelId_<ContainerAllocator> const> ConstPtr;

}; // struct ModelId_

typedef ::kortex_driver::ModelId_<std::allocator<void> > ModelId;

typedef boost::shared_ptr< ::kortex_driver::ModelId > ModelIdPtr;
typedef boost::shared_ptr< ::kortex_driver::ModelId const> ModelIdConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ModelId_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ModelId_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ModelId_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ModelId_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ModelId_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ModelId_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ModelId_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ModelId_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ModelId_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7fb7d718b4a478fa436cc49becd077b0";
  }

  static const char* value(const ::kortex_driver::ModelId_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7fb7d718b4a478faULL;
  static const uint64_t static_value2 = 0x436cc49becd077b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ModelId_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ModelId";
  }

  static const char* value(const ::kortex_driver::ModelId_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ModelId_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 MODEL_ID_UNSPECIFIED = 0\n"
"\n"
"uint32 MODEL_ID_L53 = 1\n"
"\n"
"uint32 MODEL_ID_L31 = 2\n"
"\n"
"uint32 MODEL_ID_HDK = 3\n"
;
  }

  static const char* value(const ::kortex_driver::ModelId_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ModelId_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModelId_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ModelId_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::ModelId_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_MODELID_H

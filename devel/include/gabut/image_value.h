// Generated by gencpp from file gabut/image_value.msg
// DO NOT EDIT!


#ifndef GABUT_MESSAGE_IMAGE_VALUE_H
#define GABUT_MESSAGE_IMAGE_VALUE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gabut
{
template <class ContainerAllocator>
struct image_value_
{
  typedef image_value_<ContainerAllocator> Type;

  image_value_()
    : state_red(0)
    , state_blue(0)
    , blue_crack(0)  {
    }
  image_value_(const ContainerAllocator& _alloc)
    : state_red(0)
    , state_blue(0)
    , blue_crack(0)  {
  (void)_alloc;
    }



   typedef int16_t _state_red_type;
  _state_red_type state_red;

   typedef int16_t _state_blue_type;
  _state_blue_type state_blue;

   typedef int16_t _blue_crack_type;
  _blue_crack_type blue_crack;





  typedef boost::shared_ptr< ::gabut::image_value_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gabut::image_value_<ContainerAllocator> const> ConstPtr;

}; // struct image_value_

typedef ::gabut::image_value_<std::allocator<void> > image_value;

typedef boost::shared_ptr< ::gabut::image_value > image_valuePtr;
typedef boost::shared_ptr< ::gabut::image_value const> image_valueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gabut::image_value_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gabut::image_value_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gabut

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg'], 'gabut': ['/home/mfikih15/Documents/ROV/src/gabut/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gabut::image_value_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gabut::image_value_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gabut::image_value_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gabut::image_value_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gabut::image_value_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gabut::image_value_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gabut::image_value_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad9f5988e975c9e2128f2a0d58a5bb28";
  }

  static const char* value(const ::gabut::image_value_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad9f5988e975c9e2ULL;
  static const uint64_t static_value2 = 0x128f2a0d58a5bb28ULL;
};

template<class ContainerAllocator>
struct DataType< ::gabut::image_value_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gabut/image_value";
  }

  static const char* value(const ::gabut::image_value_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gabut::image_value_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 state_red\n\
int16 state_blue\n\
int16 blue_crack\n\
";
  }

  static const char* value(const ::gabut::image_value_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gabut::image_value_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state_red);
      stream.next(m.state_blue);
      stream.next(m.blue_crack);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct image_value_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gabut::image_value_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gabut::image_value_<ContainerAllocator>& v)
  {
    s << indent << "state_red: ";
    Printer<int16_t>::stream(s, indent + "  ", v.state_red);
    s << indent << "state_blue: ";
    Printer<int16_t>::stream(s, indent + "  ", v.state_blue);
    s << indent << "blue_crack: ";
    Printer<int16_t>::stream(s, indent + "  ", v.blue_crack);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GABUT_MESSAGE_IMAGE_VALUE_H

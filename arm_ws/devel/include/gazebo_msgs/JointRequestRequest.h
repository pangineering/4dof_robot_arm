// Generated by gencpp from file gazebo_msgs/JointRequestRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_JOINTREQUESTREQUEST_H
#define GAZEBO_MSGS_MESSAGE_JOINTREQUESTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct JointRequestRequest_
{
  typedef JointRequestRequest_<ContainerAllocator> Type;

  JointRequestRequest_()
    : joint_name()  {
    }
  JointRequestRequest_(const ContainerAllocator& _alloc)
    : joint_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _joint_name_type;
  _joint_name_type joint_name;





  typedef boost::shared_ptr< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JointRequestRequest_

typedef ::gazebo_msgs::JointRequestRequest_<std::allocator<void> > JointRequestRequest;

typedef boost::shared_ptr< ::gazebo_msgs::JointRequestRequest > JointRequestRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::JointRequestRequest const> JointRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator1> & lhs, const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator2> & rhs)
{
  return lhs.joint_name == rhs.joint_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator1> & lhs, const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0be1351618e1dc030eb7959d9a4902de";
  }

  static const char* value(const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0be1351618e1dc03ULL;
  static const uint64_t static_value2 = 0x0eb7959d9a4902deULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/JointRequestRequest";
  }

  static const char* value(const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string joint_name   # name of the joint requested\n"
;
  }

  static const char* value(const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::JointRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::JointRequestRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joint_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_JOINTREQUESTREQUEST_H

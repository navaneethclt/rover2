#pragma once

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <string.h>
#include <sensor_msgs/PointCloud2.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Twist.h>
#include<chrono>  
namespace vel_int {

/**
 * Class containing the SMB Highlevel Controller
 */
class Velint {
 public:
  /** Constructor */
  Velint(ros::NodeHandle& nodeHandle);

  /** Destructor */
  virtual ~Velint();

 private:


  void odomCallback(const nav_msgs::Odometry& msg);
  /*bonus task solution */
  //void pointcloudCallback(const sensor_msgs::PointCloud2 &msg);

  ros::NodeHandle nodeHandle_;

  ros::Subscriber odomSubscriber_;
  ros::Publisher posPublisher_;
  std::string scanTopic_;
  int subscriberQueueSize_;
  int count_;
  
 double prev_linear_vel[3];
 double prev_ang_vel[3];
 double linear_pos[3];
 double ang_pos[3];
 
 double linear_vel[3];
 double angular_vel[3];

 long long prev_ms;
 std::chrono::time_point<std::chrono::high_resolution_clock> time_start;
 
  
};

}  // namespace smb_highlevel_controller

#include <ros/ros.h>
#include "vel_int/vel_int.hpp"

int main(int argc, char** argv) {
  ros::init(argc, argv, "vel_int");
  ros::NodeHandle nodeHandle("~");

  vel_int::Velint Velint(nodeHandle);
  ros::Rate loop_rate(100);
  while(ros::ok())
  {
  ros::spinOnce();
  loop_rate.sleep();
  }
  return 0;
}

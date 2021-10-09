#include <cmath>
#include <algorithm>
#include <vel_int/vel_int.hpp>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Twist.h>
#include<chrono>  
namespace vel_int {

Velint::Velint(ros::NodeHandle &nodeHandle) :
		nodeHandle_(nodeHandle), subscriberQueueSize_(1), scanTopic_("/odom"),count_(0),prev_ang_vel({0.0,0.0,0.0}),prev_linear_vel({0.0,0.0,0.0}),angular_vel({0.0,0.0,0.0}),linear_vel({0.0,0.0,0.0}),ang_pos({0.0,0.0,0.0}),linear_pos({0.0,0.0,0.0}),time_start(std::chrono::high_resolution_clock::now()),prev_ms(0){
	
	
	odomSubscriber_ = nodeHandle_.subscribe(scanTopic_, subscriberQueueSize_,
			&Velint::odomCallback, this);
	
	posPublisher_ = nodeHandle_.advertise<geometry_msgs::Twist>("/pos_calc",1);
	
}

Velint::~Velint() {
}

void Velint::odomCallback(const nav_msgs::Odometry& msg){
auto linear= msg.twist.twist.linear;
auto angular= msg.twist.twist.angular;
geometry_msgs::Twist posmsg;
auto elapsed = std::chrono::high_resolution_clock::now() - time_start;
long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
double dt = (microseconds - prev_ms)*1e-6 ;
prev_ms = microseconds;


this->angular_vel[0] = angular.x;
this->angular_vel[1] = angular.y;
this->angular_vel[2] = angular.z;


//std::cout<<dt<<'\n';
this->ang_pos[2] = this->ang_pos[2] + (angular_vel[2] + prev_ang_vel[2])*0.5*dt;
auto yaw = this->ang_pos[2];

this->linear_vel[0] = linear.x*cos(yaw);
this->linear_vel[1] = linear.x*sin(yaw);


this->linear_pos[0] = this->linear_pos[0] + (linear_vel[0] + prev_linear_vel[0])*0.5*dt;
this->linear_pos[1] = this->linear_pos[1] + (linear_vel[1] + prev_linear_vel[1])*0.5*dt;

posmsg.linear.x = this->linear_pos[0];
posmsg.linear.y = this->linear_pos[1];
posmsg.linear.z = this->linear_pos[2];

posmsg.angular.x = this->ang_pos[0];
posmsg.angular.y = this->ang_pos[1];
posmsg.angular.z = this->ang_pos[2];


posPublisher_.publish(posmsg);
}






}  // namespace smb_highlevel_controller

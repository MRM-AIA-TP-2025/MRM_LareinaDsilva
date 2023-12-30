#include "ros/ros.h"
#include "chatroom/ChatMessage.h"
#include <iostream>
void chatroomCallback(const chatroom::ChatMessage::ConstPtr& msg)
{
    // Callback function to handle received messages
    ROS_INFO("%s: %s",msg->username.c_str(),msg->message.c_str());


}
int main(int argc, char **argv)
{
    ros::init(argc, argv, "publisher3_node");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<chatroom::ChatMessage>("chatter",1000);
    ros::Subscriber sub = n.subscribe("chatter",1000,chatroomCallback);
    
    ros::Rate loop_rate(10);

    ros::AsyncSpinner spinner(1);
    spinner.start();

    chatroom::ChatMessage msg;
    std::cout << "Enter your name: ";
    std::getline(std::cin, msg.username);

 
   
    while (ros::ok())
    { 
        std::cout << " ";
        std::getline(std::cin, msg.message);   

        pub.publish(msg);
        loop_rate.sleep();
    
     }


     spinner.stop();
     return 0;
}


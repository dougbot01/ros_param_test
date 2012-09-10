#include <ros/ros.h>

int main(int argc, char* argv[])
{
    int serial_number = -1;
    ros::init(argc, argv, "parameter_test");

    //n is in the global namespace
    ros::NodeHandle n;
    // get parameter from node's namespace
    n.getParam("/param_test_local_from_global/serial", serial_number);

    ros::Rate loop_rate(10);
    ROS_INFO("Serial was %d", serial_number);
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
}


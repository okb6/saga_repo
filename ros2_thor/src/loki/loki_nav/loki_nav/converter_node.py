import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from septentrio_gnss_driver.msg import PVTGeodetic, AttEuler, AttCovEuler
from tf_transformations import quaternion_from_euler
import numpy as np
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion, PoseWithCovarianceStamped, Pose
import math

class ConverterNode(Node):
    def __init__(self):
        super().__init__('converter_node')
        

        self.pose_gps = self.create_publisher(Pose, 'gpspos', 1)
        self.subscription_pose = self.create_subscription(PoseWithCovarianceStamped,
        '/pose',
        self.pose_callback,
        10)

        self.published = 0
        
        self.pub_imu = self.create_publisher(Imu, '/imu', 10)
        self.orientation = Quaternion()
        self.orientation_cov = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0]



    def pose_callback(self, msg):
        imu_msg = Imu()
        imu_msg.header = msg.header
        imu_msg.orientation = msg.pose.pose.orientation
        imu_msg.orientation_covariance = [msg.pose.covariance[0], 0.0,0.0,0.0, msg.pose.covariance[7], 0.0, 0.0,0.0,msg.pose.covariance[14]]
        linear_acceleration_enu = 0.0 #self.ned_to_enu_vector(self.linear_acceleration)
        imu_msg.linear_acceleration.x = 0.0 #linear_acceleration_enu[0]
        imu_msg.linear_acceleration.y = 0.0 #linear_acceleration_enu[1]
        imu_msg.linear_acceleration.z = 0.0 #linear_acceleration_enu[2]
        
        # Angular Velocity
        angular_velocity_enu = 0.0 #self.ned_to_enu_vector(self.angular_velocity)
        imu_msg.angular_velocity.x = 0.0  #angular_velocity_enu[0]
        imu_msg.angular_velocity.y = 0.0 #angular_velocity_enu[1]
        imu_msg.angular_velocity.z = 0.0

        imu_msg.angular_velocity_covariance = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0]
        imu_msg.linear_acceleration_covariance = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0] 
        
        self.pub_imu.publish(imu_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ConverterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

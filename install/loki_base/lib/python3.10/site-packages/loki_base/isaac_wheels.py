import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import time


class IsaacWheels(Node):

    def __init__(self):
        super().__init__('isaac_wheels')

        self.joint_state_sub = self.create_subscription(JointState, 'base_driver/joint_states', self.vel_to_pos, 1)

        self.isaac_joint_pub = self.create_publisher(JointState, 'isaac_pos', 1)
        self.isaac_vel_pub = self.create_publisher(JointState, 'isaac_vel', 1)


        

    
    def vel_to_pos(self, joint_state):
        isaac_velocity = JointState()
        isaac_position = JointState()

        isaac_velocity.header.stamp = joint_state.header.stamp
        isaac_position.header.stamp = joint_state.header.stamp

        i = 0

        while i < 8:
            if (i % 2) == 0:
                isaac_position.name.append(joint_state.name[i])            
                isaac_position.position.append(joint_state.position[i])
            else:
                isaac_velocity.name.append(joint_state.name[i])
                isaac_velocity.velocity.append(joint_state.velocity[i])
                    
            
            i += 1
        
        i = 0



        self.isaac_joint_pub.publish(isaac_position)
        self.isaac_vel_pub.publish(isaac_velocity)


def main(args=None):
    rclpy.init(args=args)
    node = IsaacWheels()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

        

        
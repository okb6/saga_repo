import rclpy
import time
import angles
import math
import random

class PltfClcStd:
    def __init__(self):
        # super().__init__('pltf_clc_std')

        #Variables
        self.mpi = math.pi
        self.number_of_drives = 4

    
    def initialize(self, motor_drives):
        self.robot_x = 0
        self.robot_y = 0
        self.robot_yaw = 0
        self.previous_odom_timestep = self.get_clock().now()
        self.setParams(motor_drives)
    
    def setParams(self, motor_drives):
        self.number_of_drives = len(motor_drives)

        for drive in motor_drives:
            angle = -self.normalize_angle_half_pi(math.atan2(drive["x"], drive["y"]))
            self.turning_angles.append(angle)
    
    def normalize_angle_half_pi(self, angle):
        while abs(angle) > self.mpi/2:
            angle += self.mpi/2 * (-1 * angle/abs(angle))
        return angle
    
    def calculateCommand(self, vx, vy, wz, motor_drives, joint_states_out):

        self.number_of_drives = len(motor_drives)
        self.motor_drives = motor_drives

        speed = [0.0] * self.number_of_drives
        steering = [0.0] * self.number_of_drives
        drive_steer = [0.0] * self.number_of_drives
        mode_speed = [0.0] * self.number_of_drives

        if wz != 0:
            turn_rad_d = math.sqrt(pow(vx,2) + pow(vy,2))/wz
            turn_rad_ang = math.atan2(vy,vx)

            turn_rad_x = - turn_rad_d * math.sin(turn_rad_ang)
            turn_rad_y = turn_rad_d * math.cos(turn_rad_ang)

            for i in range(self.number_of_drives):
                drive_x = self.motor_drives[i]["x"]
                drive_y = self.motor_drives[i]["y"]
                
                drive_steer[i] = math.atan2(turn_rad_y - drive_y, turn_rad_x - drive_x) + math.pi * (wz < 0)
                drive_steer[i] = math.atan2(math.sin(drive_steer[i]), math.cos(drive_steer[i]))  # Normalize angle between -π and π
                
                distance = math.sqrt((turn_rad_x - drive_x) ** 2 + (turn_rad_y - drive_y) ** 2)
                mode_speed[i] = distance * abs(wz)

            for i in range(self.number_of_drives):
                steering[i] = drive_steer[i]
                speed[i] = mode_speed[i]
        
        else:
            for i in range(self.number_of_drives):
                steering[i] = math.atan2(vy,vx)
                speed[i] = math.sqrt(pow(vx,2) + pow(vy,2))
        
        joint_states_out.prop_speed.append(self.number_of_drives)
        joint_states_out.steer_pos.append(self.number_of_drives)
        joint_states_out.steer_max_speed.append(self.number_of_drives)
        joint_states_out.channel.append(self.number_of_drives)

        for i in range(self.number_of_drives):
            joint_states_out.steer_pos[i] = steering[i]
            joint_states_out.prop_speed[i] = speed[i]
        
        return joint_states_out
    
    def setZeroSpeed(self, joint_states_out):
        for i in range(len(joint_states_out.prop_speed)):
            joint_states_out.prop_speed[i] = 0
        return joint_states_out
    
    def calculateOdometry(self, joint_states_in, vx, vy, wz, x, y, yaw, motor_drives):
        self.number_of_drives = len(motor_drives)
        self.motor_drives = motor_drives
        
        joint_states_in.prop_speed.append[self.number_of_drives]
        joint_states_in.prop_pos.append[self.number_of_drives]
        joint_states_in.steer_pos.append[self.number_of_drives]

        current_odom_timestep = self.get_clock().now()
        dt = (current_odom_timestep - self.previous_odom_timestep).to_sec()
        if dt > 0.5:
            dt = 0
        
        if self.number_of_drives > 1:
            rot_y = 0
            rot_x = 0
            counted = 0
            inf_count = 0
            iterations = self.number_of_drives * 10

            for i in range(iterations):
                rand_drive_1 = 0
                rand_drive_2 = 0
                while rand_drive_1 == rand_drive_2:
                    rand_drive_1 = random.randint(0, self.number_of_drives -1)
                    rand_drive_2 = random.randint(0, self.number_of_drives -1)
                
                x_1 = self.motor_drives[rand_drive_1]["x"]
                y_1 = self.motor_drives[rand_drive_1]["y"]
                a_1 = -joint_states_in.steer_pos[rand_drive_1]
                x_2 = self.motor_drives[rand_drive_2]["x"]
                y_2 = self.motor_drives[rand_drive_2]["y"]
                a_2 = -joint_states_in.steer_pos[rand_drive_2]

                d12_x = x_2 - x_1
                d12_y = y_2 - y_1
                v1_unitv_x = math.sin(a_1)
                v1_unitv_y = math.cos(a_1)
                v2_unitv_x = math.sin(a_2)
                v2_unitv_y = math.cos(a_2)

                d12_dot_v1_unitv = (d12_x * v1_unitv_x + d12_y * v1_unitv_y) / math.sqrt(pow(d12_x, 2) + pow(d12_y, 2))
                d12_dot_v2_unitv = (d12_x * v2_unitv_x + d12_y * v2_unitv_y) / math.sqrt(pow(d12_x, 2) + pow(d12_y, 2))

                if joint_states_in.prop_speed[rand_drive_1] == 0 and joint_states_in.prop_speed[rand_drive_1]:
                    inf_count += 1
                elif abs(d12_dot_v1_unitv) > 0.9 and abs(d12_dot_v2_unitv) > 0.9:
                    vx_1 = joint_states_in.prop_speed[rand_drive_1] * math.cos(joint_states_in.steer_pos[rand_drive_1])
                    vy_1 = joint_states_in.prop_speed[rand_drive_1] * math.sin(joint_states_in.steer_pos[rand_drive_1])
                    vx_2 = joint_states_in.prop_speed[rand_drive_2] * math.cos(joint_states_in.steer_pos[rand_drive_2])
                    vy_2 = joint_states_in.prop_speed[rand_drive_2] * math.sin(joint_states_in.steer_pos[rand_drive_2])

                    if vx_1 == vx_2:
                        inf_count += 1
                    else:
                        if x_2 == x_1:
                            x_2 += 0.000001 * (1 - 2 * (random.randint(0,1)))
                        
                        a_temp_1 = (y_2 - y_1) / (x_2 - x_1)
                        b_temp_1 = (y_2 - a_temp_1 * x_2)

                        vx_1_temp = x_1 + vx_1
                        vy_1_temp = y_1 + vy_1
                        vx_2_temp = x_2 + vx_2 
                        vy_2_temp = y_2 + vy_2
                        if vx_2_temp == vx_1_temp:
                            inf_count += 1
                        else:
                            a_temp_2 = (vy_2_temp - vy_1_temp) / (vx_2_temp - vx_1_temp)
                            b_temp_2 = (vy_2_temp - a_temp_2 * vx_2_temp)

                            if a_temp_1 == a_temp_2:
                                inf_count += 1
                            else:
                                temp_rot_x = (b_temp_2 - b_temp_1) / (a_temp_1 - a_temp_2)
                                temp_rot_y = a_temp_1 * temp_rot_x + b_temp_1

                                rot_y += temp_rot_y
                                rot_x += temp_rot_x
                                counted += 1
                elif abs(d12_dot_v1_unitv) > 0.9 and abs(d12_dot_v2_unitv) < 0.1:
                    rot_y += y_1
                    rot_x += x_1
                    counted += 1
                elif abs(d12_dot_v1_unitv) < 0.1 and abs(d12_dot_v2_unitv) > 0.9:
                    rot_y += y_2
                    rot_x += x_2
                    counted += 1
                elif abs(math.tan(a_1) == math.tan(a_2)):
                    inf_count += 1
                else:
                    temp_rot_y = ((x_1 - x_2 - y_1 * math.tan(a_1) + y_2 * math.tan(a_2))/ (math.tan(a_2)- math.tan(a_1)))
                    temp_rot_x = (x_1 - math.tan(a_1) * (y_1 - temp_rot_y))

                    if math.isinf(temp_rot_y) or math.isinf(temp_rot_x):
                        inf_count += 1
                    elif not math.isnan(temp_rot_y) and not math.isnan(temp_rot_x):
                        rot_y += temp_rot_y
                        rot_x +=  temp_rot_x
                        counted += 1
                    
            if counted > 0:
                rot_y = rot_y / counted
                rot_x = rot_x / counted
            
            translating = inf_count / iterations > 0.5
            vx = 0
            vy = 0
            wz = 0

            if translating:
                for i in self.number_of_drives:
                    temp_vx = joint_states_in.prop_speed[i] * math.cos(joint_states_in.steer_pos[i])
                    temp_vy = joint_states_in.prop_speed[i] * math.sin(joint_states_in.steer_pos[i])
                    vx += temp_vx / self.number_of_drives
                    vy += temp_vy / self.number_of_drives

            else:
                wz_used = 0
                for i in range(self.number_of_drives):
                    temp_x = self.motor_drives[i]["x"]
                    temp_y = self.motor_drives[i]["y"]
                    temp_dx = temp_x - rot_x
                    temp_dy = temp_y - rot_y
                    temp_vx = joint_states_in.prop_speed[i] * math.cos(joint_states_in.steer_pos[i])
                    temp_vy = joint_states_in.prop_speed[i] * math.sin(joint_states_in.steer_pos[i])

                    temp_rad = math.sqrt(pow(temp_x - rot_x, 2) + pow(temp_y - rot_y, 2))
                    temp_wz = (temp_dx * temp_vy - temp_dy * temp_vx) / (pow(temp_rad, 2))

                    if temp_wz != 0:
                        wz_used += 1
                
                wz /= wz_used

                rad_ang = math.atan2(rot_x, rot_y)
                if math.isinf(rad_ang) or math.isnan(rad_ang):
                    rad_ang = math.atan2(rot_x + 0.0000001, rot_y)
                
                rad_d = math.sqrt(pow(rot_y, 2) + pow(rot_x, 2))
                vx = rad_d * wz * math.cos(rad_ang)
                vy = rad_d * wz * -math.sin(rad_ang)
            
            if not math.isnan(vx) and not math.isnan(vy) and not math.isnan(wz):
                self.robot_x += (vx * math.cos(self.robot_yaw) - vy * math.sin(self.robot_yaw)) * dt
                self.robot_y += (vx * math.sin(self.robot_yaw) + vy * math.cos(self.robot_yaw)) * dt 
                self.robot_yaw += wz * dt

            else:
                self.get_logger().info("translating: %d" %translating)
                return False
        
        x = self.robot_x
        y = self.robot_y 
        yaw = self.robot_yaw
        return True
    
    def zeroOdometryPose(self):
        self.robot_x = 0
        self.robot_y = 0
        self.robot_yaw = 0

                  

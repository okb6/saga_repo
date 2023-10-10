import rclpy
import os
import math
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool
from std_srvs.srv import Trigger, SetBool
from rclpy.node import Node
import numpy

class TeleopNode(Node):
    def __init__(self):
        super().__init__('teleop_node')
        self.get_logger().info("started Teleop Node")

        self.axis_map = {}
        self.button_map = {}
        self.custom_trigger_map = {}
        self.buttons = []
        self.axes = []

        params_loaded = self.lookupParameters()      

        if params_loaded:
            self.get_logger().info("Parameters read from ROS parameter server")
        else:
            self.get_logger().info("One or more parameters could not be found on ROS parameter server. Exiting Program")
            exit(0)
        
        #SUBSCRIBERS
        self.joy_sub = self.create_subscription(Joy, 'joy', self.joy_callback, 1)

        #PUBLISHERS
        self.twist_pub = self.create_publisher(Twist, 'cmd_vel', 1)
        self.lock_pub = self.create_publisher(Bool, 'joy_priority', 1)

        #Clients
        self.home_client = self.create_client(Trigger, 'home_steering')

        #Services
        self.block_auto_mode_srv = self.create_service(SetBool, 'block_auto_mode', self.srv_Callback_Block_Auto)
        self.set_auto_mode_srv = self.create_service(SetBool, 'set_auto_mode', self.srv_Callback_Set_Auto_Mode)

        #Initializing Variables
        self.m_pi = math.pi
        self.Mode_Forward = 0
        self.Mode_Left = 1
        self.Mode_Turning = 2
        self.Mode_omni = 3

        self.previous_drive_mode = self.Mode_Forward
        self.previous_non_turn_mode = self.Mode_Forward
        self.previous_buttons = numpy.array([])
        self.previous_buttons.resize(self.number_of_buttons)
        self.turning_buttons_initiated = False
        self.Default_Turning_Calc = 1.0

        self.teleop_lock_on = True
        self.block_auto_mode_on = False
        self.ang_max = self.m_pi/2
        self.ang_min = 0.00 
        self.deadzone = 0.2
        self.turning_limit = 0.8

        self.a = (self.ang_max - self.ang_min) / (1 - self.deadzone)
        self.b = self.ang_min - self.deadzone * self.a

        

    def lookupParameters(self):

        self.get_logger().info("Looking up Parameters")
        trigger_string_map = ''
        params_loaded = True

        #Lookup turning radius
        self.declare_parameter('turn_calc_w', rclpy.Parameter.Type.DOUBLE)
        self.declare_parameter('turn_calc_l', rclpy.Parameter.Type.DOUBLE)

        self.turn_calc_w = self.get_parameter('turn_calc_w').value
        self.turn_calc_1 = self.get_parameter('turn_calc_l').value

        self.get_logger().info('min turning w: {}, min turning 1: {}'.format(self.turn_calc_w, self.turn_calc_1) )

        #Lookup axis and button map
        self.declare_parameter('axis_map.axis_vx', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('axis_map.axis_vy', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('axis_map.axis_wz', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('axis_map.axis_turn_left', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('axis_map.axis_turn_right', rclpy.Parameter.Type.INTEGER)

        self.axis_vx = self.get_parameter('axis_map.axis_vx').value
        self.axis_vy = self.get_parameter('axis_map.axis_vy').value
        self.axis_wz = self.get_parameter('axis_map.axis_wz').value 
        self.axis_turn_left = self.get_parameter('axis_map.axis_turn_left').value 
        self.axis_turn_right = self.get_parameter('axis_map.axis_turn_right').value

        self.axis_map = {'axis_vx':self.axis_vx, 'axis_vy':self.axis_vy, 'axis_wz':self.axis_wz, 'axis_turn_left':self.axis_turn_left, 'axis_turn_right':self.axis_turn_right}

        self.declare_parameter('button_map.button_less_gain', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_more_gain', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_function', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_teleop_lock', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_left', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_forward', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_0', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_1', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_2', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_3', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_4', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_5', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_6', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_7', rclpy.Parameter.Type.INTEGER)
        self.declare_parameter('button_map.button_8', rclpy.Parameter.Type.INTEGER)

        less_gain = self.get_parameter('button_map.button_less_gain').value
        more_gain = self.get_parameter('button_map.button_more_gain').value
        function = self.get_parameter('button_map.button_function').value
        teleop_lock = self.get_parameter('button_map.button_teleop_lock').value
        left = self.get_parameter('button_map.button_left').value
        forward = self.get_parameter('button_map.button_forward').value
        b0 = self.get_parameter('button_map.button_0').value
        b1 = self.get_parameter('button_map.button_1').value
        b2 = self.get_parameter('button_map.button_2').value
        b3 = self.get_parameter('button_map.button_3').value
        b4 = self.get_parameter('button_map.button_4').value
        b5 = self.get_parameter('button_map.button_5').value
        b6 = self.get_parameter('button_map.button_6').value
        b7 = self.get_parameter('button_map.button_7').value
        b8 = self.get_parameter('button_map.button_8').value

        self.button_map = {'button_less_gain':less_gain, 'button_more_gain':more_gain, 'button_function':function, 'button_teleop_lock':teleop_lock, 'button_left':left, 'button_forward':forward, 'button_0':b0, 'button_1':b1, 'button_2':b2, 'button_3':b3, 'button_4':b4, 'button_5':b5, 'button_6':b6, 'button_7':b7, 'button_8':b8}




        if len(self.axis_map) == 0:
            params_loaded = False
        elif len(self.button_map) == 0:
            self.get_logger().info("No button map on parameter server")

        #find the higheset button index
        self.number_of_buttons = 0
        for key, value in self.button_map.items():
            if value > self.number_of_buttons:
                self.number_of_buttons = value

        
        #Turning safety button
        self.declare_parameter('button_turning_safety', rclpy.Parameter.Type.STRING)
        self.button_turning_safety = self.get_parameter('button_turning_safety').value

        #lookup homing button combination
        self.declare_parameter('home_buttons', rclpy.Parameter.Type.STRING_ARRAY)
        self.home_buttons = self.get_parameter('home_buttons').value

        #lookup omni button combination
        self.declare_parameter('omni_buttons', rclpy.Parameter.Type.STRING_ARRAY)
        self.omni_buttons = self.get_parameter('omni_buttons').value 

        #lookup kvbuttons
        self.declare_parameter('kv_default_buttons', rclpy.Parameter.Type.STRING_ARRAY)
        self.kv_default_buttons = self.get_parameter('kv_default_buttons').value

        #mode left and mode forward buttons
        self.declare_parameter('mode_left_buttons', rclpy.Parameter.Type.STRING_ARRAY)
        self.declare_parameter('mode_forward_buttons', rclpy.Parameter.Type.STRING_ARRAY)
        self.mode_forward_buttons = self.get_parameter('mode_forward_buttons').value
        self.mode_left_buttons = self.get_parameter('mode_left_buttons').value

        #Trigger map
        self.declare_parameter('trigger_map.button_0', rclpy.Parameter.Type.STRING)
        self.declare_parameter('trigger_map.button_1', rclpy.Parameter.Type.STRING)
        self.declare_parameter('trigger_map.button_2', rclpy.Parameter.Type.STRING)
        self.declare_parameter('trigger_map.button_3', rclpy.Parameter.Type.STRING)
        self.declare_parameter('trigger_map.button_4', rclpy.Parameter.Type.STRING)
        self.declare_parameter('trigger_map.button_5', rclpy.Parameter.Type.STRING)
        self.declare_parameter('trigger_map.button_6', rclpy.Parameter.Type.STRING)

        tb0 = self.get_parameter('trigger_map.button_0').value
        tb1 = self.get_parameter('trigger_map.button_1').value
        tb2 = self.get_parameter('trigger_map.button_2').value
        tb3 = self.get_parameter('trigger_map.button_3').value
        tb4 = self.get_parameter('trigger_map.button_4').value
        tb5 = self.get_parameter('trigger_map.button_5').value
        tb6 = self.get_parameter('trigger_map.button_6').value

        trigger_string_map = {'button_0':tb0, 'button_1':tb1, 'button_2':tb2, 'button_3':tb3, 'button_4':tb4, 'button_5':tb5, 'button_6':tb6}
        
        for l in range(7):
            button = 'button_{}'.format(l)
            if not len(trigger_string_map[button]) == 0:
                topic = trigger_string_map[button]
                self.custom_trigger_map[button] = self.create_client(Trigger, topic)

        
        #Get Gains
        self.declare_parameter('gains.kv_default', rclpy.Parameter.Type.DOUBLE)
        self.declare_parameter('gains.kv_min', rclpy.Parameter.Type.DOUBLE)
        self.declare_parameter('gains.kv_max', rclpy.Parameter.Type.DOUBLE)
        self.declare_parameter('gains.kv_increment', rclpy.Parameter.Type.DOUBLE)

        self.kv_default = self.get_parameter('gains.kv_default').value
        self.kv_min = self.get_parameter('gains.kv_min').value
        self.kv_max = self.get_parameter('gains.kv_max').value
        self.dkv = self.get_parameter('gains.kv_increment').value

        self.kv = self.kv_default

        return params_loaded
    


    def buttonifyAxes(self, axes_in):
        buttoned = []
        thresh = 0.9
        i = 0
        for i in range(len(axes_in)):
            if axes_in[i] > thresh:
                buttoned.append(1)
            else:
                buttoned.append(0)
        return buttoned
    

    
    def evaluateButtonPressCombo(self, button_combo):
        button_combo_pressed = True
        previous_button_combo_pressed = True

        for button in button_combo:
            button_index = self.button_map[button]
            button_combo_pressed &= bool(self.buttons[button_index])
            previous_button_combo_pressed &= bool(self.previous_buttons[button_index])

        if button_combo_pressed and not previous_button_combo_pressed:
            return True
        else:
            return False
        

        
    def evaluateButtonPress(self, button):
        button_pressed = True
        previous_button_pressed = True
        but_press = self.button_map[button]
        button_pressed &= bool(self.buttons[but_press])
        previous_button_pressed &= bool(self.previous_buttons[but_press])

        if button_pressed and not previous_button_pressed:
            return True
        else:
            return False
        


    def srv_Callback_Block_Auto(self, request, response):
        message = ''
        self.block_auto_mode_on = request.data
        if self.block_auto_mode_on:
            message = 'Auto Mode Blocked'
            self.get_logger().info("Auto Mode Blocked!!!!")

            self.teleop_lock_on = True
            lock_msg = Bool()
            lock_msg.data = self.teleop_lock_on
            self.lock_pub.publish(lock_msg)

        else:
            message = "Auto Mode Unblocked"
            self.get_logger().info("Auto Mode unblocked")
        
        response.success = True
        response.message = message
        return response
    

    
    def srv_Callback_Set_Auto_Mode(self, request, response):
        message = ''
        self.teleop_lock_on = request.data
        if self.block_auto_mode_on:
            message = 'Robot in Auto Mode'
            self.get_logger().info("Robot in Auto Mode")
        else:
            message = 'Robot in manual Mode'
            self.get_logger().info('Robot in Manual Mode')

        lock_msg = Bool()
        lock_msg.data = self.teleop_lock_on
        self.lock_pub.publish(lock_msg)
        response.success = True
        response.message = message
        return response
    

    
    def joy_callback(self, joy):
        mode = self.previous_drive_mode
        
        self.buttons = []
        self.axes = []

        self.buttons = joy.buttons
        self.axes = joy.axes

        int_axes = self.buttonifyAxes(self.axes)
        self.buttons.extend(int_axes)
        
        #get axes of intrest
        axis_v_primary = self.axes[self.axis_map['axis_vx']]
        axis_v_secondary = self.axes[self.axis_map['axis_vy']]
        axis_wz = self.axes[self.axis_map['axis_wz']]

        if not self.turning_buttons_initiated and self.axes[self.axis_map["axis_turn_left"]] == 1 and self.axes[self.axis_map["axis_turn_right"]] == 1:
            self.turning_buttons_initiated = True
        
        if self.buttons[self.button_map["button_teleop_lock"]]:
            if self.buttons[self.button_map["button_function"]] and not self.previous_buttons[self.button_map['button_function']] and self.teleop_lock_on and not self.block_auto_mode_on:
                self.teleop_lock_on = False
                lock_msg = Bool()
                lock_msg.data = self.teleop_lock_on
                self.lock_pub.publish(lock_msg)
            elif not self.previous_buttons[self.button_map["button_teleop_lock"]]:
                self.teleop_lock_on = True
            
        
        if self.teleop_lock_on:
            lock_msg = Bool()
            lock_msg.data = self.teleop_lock_on
            self.lock_pub.publish(lock_msg)
        
        if self.buttons[self.button_map["button_function"]]:
            for key, service_client in self.custom_trigger_map.items():
                button_index = self.button_map[key]
                button_pressed = self.buttons[button_index] and not self.previous_buttons[button_index]
                
                if button_pressed:
                    future = 0

                    future = self.custom_trigger_map[key].call_async(Trigger.Request())
                    rclpy.spin_until_future_complete(self, future)
                    response = future.result()
                    
                    self.get_logger().info("calling service %s" %str(key))

                    if response:
                        self.get_logger().info("finished Calling")
                    else:
                        self.get_logger().info("callling service failed")
                
        elif self.evaluateButtonPressCombo(self.home_buttons):

            future = self.home_client.call_async(Trigger.Request())
            rclpy.spin_until_future_complete(self, future)
            response = future.result()
            self.get_logger().info("calling service: home_steering")
            
            if response:
                self.get_logger().info("finished calling")
            else:
                self.get_logger().info("calling homing service failed")
            
        ##################
        #MODES OF TURNING#
        ##################

        if self.axes[self.axis_map["axis_turn_left"]] < self.turning_limit or self.axes[self.axis_map["axis_turn_right"]] < self.turning_limit and self.buttons[self.button_map[self.button_turning_safety]] and self.turning_buttons_initiated:
            mode = self.Mode_Turning
        elif abs(axis_v_primary) > self.deadzone and self.previous_drive_mode == self.Mode_Turning:
            mode = self.previous_non_turn_mode
        elif self.evaluateButtonPressCombo(self.mode_forward_buttons):
            mode = self.Mode_Forward
            self.previous_non_turn_mode = self.Mode_Forward
        elif self.evaluateButtonPressCombo(self.mode_left_buttons):
            mode = self.Mode_Left
            self.previous_non_turn_mode = self.Mode_Left
        elif self.evaluateButtonPressCombo(self.omni_buttons):
            mode = self.Mode_omni
            self.previous_non_turn_mode = self.Mode_Forward
        
        #############
        ####Gains####
        #############

        if self.evaluateButtonPressCombo(self.kv_default_buttons):
            self.kv = self.kv_default
        elif self.evaluateButtonPress("button_more_gain"):
            self.kv += self.dkv
        elif self.evaluateButtonPress("button_less_gain"):
            self.kv -= self.dkv
        
        if self.kv > self.kv_max:
            self.kv = self.kv_max
        elif self.kv < self.kv_min:
            self.kv = self.kv_min

        #######################
        ###CALCULATE COMANDS###
        #######################


        if mode == self.Mode_Turning:
            vx = 0.0
            vy = 0.0
            
            if self.buttons[self.button_map[self.button_turning_safety]]:
                wz = (0.5 - 0.5 * self.axes[self.axis_map["axis_turn_left"]]) - (0.5 - 0.5 * self.axes[self.axis_map["axis_turn_right"]])
            else:
                wz = 0
            
            if wz == 0:
                wz = 0.00001
        else:
            
            if axis_v_primary > -self.deadzone and axis_v_primary < self.deadzone:
                axis_v_primary = 0.0
            
            axis_v_primary *= self.kv
            axis_v_secondary *= self.kv

            if axis_wz > -self.deadzone and axis_wz < self.deadzone:
                wz = 0.0
            elif axis_wz > 0:
                ang = self.a * self.axis_wz + self.b
                self.get_logger().info('{}'.format(ang))
                radius = self.turn_calc_1 / (math.tan(ang)) + self.turn_calc_w
                wz = axis_v_primary / radius
            else:
                ang = (self.a * axis_wz - self.b)
                radius = self.turn_calc_1 / (math.tan(ang)) - self.turn_calc_w
                wz = axis_v_primary / radius
            
            if mode == self.Mode_Forward:
                vx = axis_v_primary
                vy = 0.0
            elif mode == self.Mode_Left:
                vy = axis_v_primary
                if vy == 0:
                    vy = 0.000001
                vx = 0.0
            if mode == self.Mode_omni:
                vx = axis_v_primary
                vy = axis_v_secondary
                if abs(vx) > 0 or abs(vy) > 0 or self.buttons[self.button_map["button_6"]]:
                    wz = axis_wz * 1.5 * self.kv * (1 -2 * (abs(math.atan2(vy,vx)) > self.m_pi / 2))
                else:
                    wz = 0.0
                


        twist_msg = Twist()

        twist_msg.linear.x = vx
        twist_msg.linear.y = vy
        twist_msg.linear.z = 0.0
        
        twist_msg.angular.x = 0.0
        twist_msg.angular.y = 0.0
        twist_msg.angular.z = wz

        if self.teleop_lock_on:
            self.twist_pub.publish(twist_msg)
        
        self.previous_drive_mode = mode

        for i in range(self.number_of_buttons):
            self.previous_buttons[i]= self.buttons[i]



        
def main(args=None):
    rclpy.init(args=args)
    node = TeleopNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
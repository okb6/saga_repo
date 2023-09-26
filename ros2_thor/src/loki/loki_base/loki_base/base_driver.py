import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from loki_msgs.msg import BaseState, ControllerArray, BatteryArray, IOArray, CANFrame
from sensor_msgs.msg import JointState, Imu
from nav_msgs.msg import Odometry
from std_msgs.msg import Int32
from std_srvs.srv import SetBool, Trigger
from loki_msgs.srv import MotorControllerSetup, CanID, DriveParams, InitPltf, GetSetBool, EvalCanBuffer, StateBase, ContArray, BatteryVars, StatesOfIO, DriveCmds, DeviceCmds, SimDrive, PosZeroAll, PosZero, HomesteeringAll, CotMap, MotCot, SetBools, Params
# from tf2 import transform_broadcaster, transform_datatypes
from loki_base.pltf_clc_std import PltfClcStd
import numpy as np
from loki_base.Py_Base_State import PyBaseState
from loki_base.canframe import canframe

class BaseDriver(Node):

    def __init__(self):
        super().__init__('base_driver')

        # Initialize ROS parameters
        rate_val = self.get_parameter("rate").get_parameter_value().integer_value
        can_interface_type = self.get_parameter('can_interface_type').get_parameter_value().string_value
        can_interface_name = self.get_parameter('can_interface_name').get_parameter_value().string_value

        # Initialize CAN interface type
        if can_interface_type == "socketcan":
            interface_type = 4
        else:
            self.get_logger().error(
                "Invalid or missing 'can_interface_type' parameter.")
            return

        self.get_logger().info(f"Using CAN interface {can_interface_name}")

        # Initialize BaseDriver with CAN interface
        base_driver = BaseDriver()
        if not base_driver.initPltf(interface_type, can_interface_name):
            self.get_logger().error("Failed to initialize robot base.")
            return

        self.rate = self.create_rate(rate_val)  # Create rate control object

        # Determine if we're in simulation mode
        simple_sim = self.get_parameter('simple_sim').get_parameter_value().bool_value

        if simple_sim:
            self.get_logger().info("Simulating feedback")

            while rclpy.ok():
                base_driver.publish_joint_commands()
                base_driver.sendSimCommands()
                base_driver.handleFeedback()
                rclpy.spin_once()
                self.rate.sleep()

        else:
            self.get_logger().info("Assuming feedback from real robot")

            while rclpy.ok():
                base_driver.publish_joint_commands()
                base_driver.sendDriveCommands()
                base_driver.sendDeviceCommands()
                base_driver.evalCanBuffer()
                base_driver.handleFeedback()
                rclpy.spin_once()
                self.rate.sleep()

        #initializing variables
        self.has_gazebo = False
        self.pltf_clc_type = PltfClcStd()
        
        
        #Subscribers
        self.twist_sub = self.create_subscription(Twist, 'cmd_vel', self.twist_callback, 1)
        self.can_device_t_sub = self.create_subscription(CANFrame, 'can_frames_devices_t', self.canDeviceTCallback, 100)
        self.basestate_to_msg = self.create_subscription(BaseState, 'basestatetomsg', self.msg_to_base_state_callback, 100)

        #Publishers
        self.joint_command_pub = self.create_publisher(BaseState, 'joint_commands', 1)
        self.joint_state_pub = self.create_publisher(JointState, 'joint_states', 1)
        self.base_state_pub = self.create_publisher(BaseState, 'base_state', 1)
        self.odom_pub = self.create_publisher(Odometry, 'odomery/base_raw', 1)
        self.motor_controller_data_pub = self.create_publisher(ControllerArray, 'motor_controller_data', 1)
        self.battery_pub = self.create_publisher(BatteryArray, 'battery_data', 1)
        # self.can_base_pub = self.create_publisher(CANFrame, 'can_frames_base_r', 10)
        self.can_base_command_pub = self.create_publisher(CANFrame, 'can_frames_base_t', 10)
        # self.can_device_pub = self.create_publisher(CANFrame, 'can_frames_device_r', 100)
        self.io_pub = self.create_publisher(IOArray, 'io_data', 1)
        self.base_command_msg = self.create_publisher(BaseState, 'BasePub', 100)
        self.sim_command_msg = self.create_publisher(BaseState, 'simbasestate', 100)


        #Services
        self.server_setup_controller = self.create_service(MotorControllerSetup, 'setup_motor_controller', self.srv_callback_setup_controller)
        self.server_home_steering = self.create_service(Trigger, 'home_steering', self.srv_callback_home_steering )
        self.server_current_pos_zero = self.create_service(CanID, 'set_home_count_current_pos_zero', self.srv_callback_curent_pos_zero)
        self.server_reset_odom = self.create_service(Trigger, 'reset_base_odom', self.srv_Callback_Reset_odom)
        self.server_set_drive_params = self.create_service(DriveParams, 'set_drive_params', self.srv_callback_set_drive_params)
        self.server_safety_stop = self.create_service(SetBool, 'safety_stop', self.srv_callback_safety_stop)
        self.server_mute_device_commands = self.create_service(SetBool, 'mute_extra_can_device_commands', self.srv_callback_mute_device_commands)

        #Clients
        self.cli_initPltf = self.create_client(InitPltf, 'initpltf')
        self.cli_get_set_bool = self.create_client(GetSetBool, 'getsetbool')
        self.cli_eval_can_buffer = self.create_client(EvalCanBuffer, 'eval_can_buffer')
        self.cli_base_state = self.create_client(StateBase, 'statebase')
        self.cli_get_controller_array = self.create_client(ContArray, 'contarray')
        self.cli_get_all_battery_vars = self.create_client(BatteryVars, 'batteryvars')
        self.cli_io_states_to_msg = self.create_client(StatesOfIO, 'statesofio')
        self.cli_send_drive_commands = self.create_client(DriveCmds, 'drivecmds')
        self.cli_send_device_commands = self.create_client(DeviceCmds, 'devicecmds')
        self.cli_sim_drive = self.create_client(SimDrive, 'simdrive')
        self.cli_current_pos_as_zero_all = self.create_client(PosZeroAll, 'poszeroall')
        self.cli_current_pos_as_zero = self.create_client(PosZero, 'poszero')
        self.cli_home_steering_all = self.create_client(HomesteeringAll, 'homesteeringall')
        self.cli_setup_motor_controller = self.create_client(MotCot, 'motcot')
        self.cli_get_controller_setup_map = self.create_client(CotMap, 'cotmap')
        self.cli_call_set_bool = self.create_client(SetBools, 'callsetbool')
        self.cli_set_drive_params = self.create_client(Params, 'params')



        #TF2 Params
        self.tf_prefix = self.get_parameter('tf_prefix').get_parameter_value().string_value
        self.frame_id = self.get_parameter('odom_frame_id').get_parameter_value().string_value
        self.broadcast_tf = self.get_parameter('enable_odom_tf').get_parameter_value().bool_value
        self.allow_geometry_odometry = self.get_parameter('passthrough_gazebo_odometry').get_parameter_value().bool_value #How to  default values?
        self.twist_cov_default_array = np.array([0.001,0,0,0,0,0,
                                        0,0.001,0,0,0,0,
                                        0,0,0.001,0,0,0,
                                        0,0,0,0.001,0,0,
                                        0,0,0,0,0.001,0,
                                        0,0,0,0,0,0.03])
                                        #is this how you do it

        self.twist_cov_default_vector = list(self.twist_cov_default_array)
        self.twist_cov_vector = self.get_parameter('twist_covariance').get_parameter_value().double_value
        self.twist_cov_vector = self.twist_cov
        self.pose_cov = self.twist_cov

        if self.allow_geometry_odometry:
            self.gazebo_odom_sub = self.create_subscription(Odometry, 'odometry/gazebo', 1, self.gazebo_odom_callback)
        
        if self.broadcast_tf:
            self.get_logger().warn("Tmp msg: enable_odom_tf is true! If you want to broadcast your own odom frame, set param to false. Default value is true")
            self.get_logger().info("Broadcasting odometry frame to robot: %s ->base_link" %(self.frame_id.c_str()))
        
        #DRIVE PARAMS
        self.motor_drives = []
        self.joint_names = ''
        self.motor_drive_index = 0

        while True:
            self.drive_name = 'motor_drives/drive{}'.format(self.motor_drive_index).string_value 
            self.steering_name = self.get_parameter(self.drive_name + '/steering_name').string_value
            self.wheel_name = self.get_parameter(self.drive_name + '/wheel_name').string_value

            if self.get_parameter(self.drive_name.str(), self.t_drive_params):
                self.motor_drives.append(self.t_drive_params)
                self.joint_names.append(self.steering_name.str())
                self.joint_names.append(self.wheel_name.str())
                self.motor_drive_index += 1
            else:
                break
        
        #BATTERY PARAMS
        self.batteries = []
        self.battery_index = 0

        while True:
            self.battery_name = 'batteries/bat{}'.format(self.battery_index)
           
            if self.get_paremeter(self.battery_name.str(), self.t_battery_params): 
                self.batteries.append(self.t_battery_params)
                self.battery_index += 1
            else:
                break

        #IO PARAMS
        self.io_index = 0
        self.ios = []

        while True:
            self.io_name = 'io/io{}'.format(self.io_index)

            if self.get_parameter(self.io_name.str(), self.t_io_params):
                self.ios.append(self.t_io_params)
            else:
                break

        #MISC Variables
        self.emergency_stop = False
        self.latest_base_command = PyBaseState()
        self.basestatemsg = PyBaseState()
        self.latest_base_command_time = self.get_clock().now()
        self.command_timeout_time = 0.5
        self.mute_device_commands = False
        self.can_device_t_frame_count = 0

        if self.get_parameter("base_calculator").get_parameter_value():
            self.pltf_clc_type = self.get_parameter("base_calculator").value
            self.get_logger().info(f"Using base calculator plugin: {self.pltf_clc_type}")
        else:
            self.get_logger().info("No base calculator type found on parameter server. Using standard plugin.")

        self.loadClcPlugin(self.pltf_clc_itf)

    def loadClcPlugin(self):
        self.success = True

        try:
            self.pltf_clc_type.initialize(self.motor_drives)
            self.pltf_clc_type.calculateCommand(0,0,0, self.latest_base_command)
        
        except:
            self.get_logger().error("The plugin failed to load for some reason.")
            sucess = False
    
    def initPltf(self, can_interface_type, can_interface_name): 
        ret = self.client_init_pltf(can_interface_type, can_interface_name)
        self.set_bool_map = []
        self.set_bool_map = self.client_get_set_bool()
        
        for key, service_name in self.set_bool_map.items():
            srv = self.create_service(
                SetBool, service_name, self.srv_callback_io_set_bool)
            self.servers_io.append(srv)
            self.get_logger().info(f"Advertised service: {service_name}")
        
        return ret
    
    
    def client_init_pltf(self, can_interface_type, can_interface_name):
        motor_drives_string = self.motor_drives.keys()
        motor_drive_values = self.motor_drives.items()
        batteries_string = self.batteries.keys()
        batteries_values = self.batteries.items()
        ios_string = self.ios.keys()
        ios_values = self.ios.items()

        InitPltf.Request().can_interface_type = can_interface_type
        InitPltf.Request().batteries_values = can_interface_name
        InitPltf.Request().motor_drives_string = motor_drives_string
        InitPltf.Request().motor_drive_values = motor_drive_values
        InitPltf.Request().batteries_string = batteries_string
        InitPltf.Request().batteries_values = batteries_values
        InitPltf.Request().ios_string = ios_string
        InitPltf.Request().ios_values = ios_values

        Future = self.cli_initPltf.call_async(InitPltf.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return response

    def client_get_set_bool(self): #check with Jmoon to see if this is correct
        set_bool = 1

        GetSetBool.Request().set_bool = set_bool

        Future = self.cli_get_set_bool.call_async(GetSetBool.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        set_bool_string = response.set_bool_string
        set_bool_values = response.set_bool_values
        
        if len(set_bool_string) == len(set_bool_values):
            for i in set_bool_string:
                self.set_bool_map.update({set_bool_string[i], set_bool_values[i]})
        else:
            self.get_logger().error("Bool map does not have equal key to element amounts")
        
        return

    def evalCanBuffer(self):
        self.can_msgs_base = []
        self.can_msgs_device = []
        self.client_eval_can_buffer(self.can_msgs_base, self.can_msgs_device)
    
    def client_eval_can_buffer(self):
        bool_eval = 1
        EvalCanBuffer.Request().can_msgs_base = bool_eval
        Future = self.cli_eval_can_buffer.call_async(EvalCanBuffer.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        self.can_msgs_base = response.can_msgs_base
        self.can_msgs_device = response.can_msgs_device
        return

           
    def publish_joint_commands(self):
        latest_base_command_msg = BaseState()
        self.baseStateToMsg(self.latest_base_command_time, self.latest_base_command, latest_base_command_msg)
        self.joint_command_pub.publish(latest_base_command_msg)

    def client_get_base_state(self):
        base_state = 1
        StateBase.Request().base_state = base_state 
        Future = self.cli_base_state.call_async(StateBase.Request())
        response = Future.result()
        return 

    def client_get_cont_array(self):
        on = 1
        ContArray.Request().on = on
        Future = self.cli_get_controller_array(ContArray.Request())
        rclpy.spin_until_future_complete(self, Future)
        return
        

    def handleFeedback(self):
        base_state = PyBaseState()

        self.client_get_base_state()

        base_state = self.basestatemsg #I believe there are unnecessary msg to basesate to basestate to msg conversions that might be able to change in teh c++ seciton

        base_state_msg = BaseState()
        self.baseStateToMsg(self.get_clock().now(), base_state, base_state_msg)
        self.base_state_pub.publish(base_state_msg)

        self.client_get_cont_array()
        odom_msg = Odometry()
        vx = 0.0
        vy = 0.0
        wz = 0.0
        x = 0.0
        y = 0.0
        yaw = 0.0

        if not self.has_gazebo:
            if self.pltf_clc_itf.calculate_Odometry(base_state, vx, vy, wz, x, y, yaw):
                odom_msg.header.frame_id = self.frame_id
                odom_msg.child_frame_id = "base_link"
                odom_msg.header.stamp = self.get_clock().now()

                odom_msg.pose.pose.position.x = x
                odom_msg.pose.pose.position.y = y     
                odom_msg.pose.pose.position.z = 0
            
                increase_pose_cov = (abs(vx) > 0.005) or (abs(vy) > 0.005) or (abs(wz) > 0.005)
                for i in range(36):
                    self.pose_cov[i] = self.pose_cov[i] + self.twist_cov[i] * increase_pose_cov

                odom_msg.pose.covariance = self.pose_cov

                odom_msg.twist.twist.linear.x = vx
                odom_msg.twist.twist.linear.y = vy
                odom_msg.twist.twist.angular.z = wz

                odom_msg.twist.covariance = self.twist_cov
                self.odom_pub.publish(odom_msg)
            
            else:
                self.get_logger().warn("odometry calculation failed")
            
        #Joint State
        joint_state_msg = JointState()
        joint_state_msg.header.stamp = self.get_clock().now()
        joint_state_msg.name = self.joint_names

        for i in range(len(base_state.steer_pos)):
            joint_state_msg.position.append(base_state.steer_pos[i])
            joint_state_msg.position.append(base_state.prop_pos[i])
        
        self.joint_state_pub.publish(joint_state_msg)

        # #motor controller data
        # controller_array.header.stamp = self.get_clock().now()
        # self.motor_controller_data_pub.publish(controller_array)

        #Battery Feedback
        batt = 1
        self.client_get_All_battery_vars(batt)
        # self.batteryVarsToMsg(batt_vars, batt_array_msg)
        # self.battery_pub.publish(batt_array_msg) #CHECK TO MAKE SURE

        #IO Feedback
        states = 1
        self.client_io_states_to_msg(states)
        # self.ioStatesToMsg(io_states, io_states_msg)
        # self.io_pub.publish(io_states_msg)

    def client_get_All_battery_vars(self, batt):
        BatteryVars.Request().batt = batt
        Future = self.cli_get_all_battery_vars(BatteryVars.Request())
        rclpy.spin_until_future_complete(self, Future)
        batt_vars = Future.result()
        return 
        
    def client_io_states_to_msg(self, states):
        StatesOfIO.Request().states = states
        Future = self.cli_io_states_to_msg(StatesOfIO.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
        
    
    def twist_callback(self,twist_in):
        self.latest_base_command_time = self.get_clock().now()
        self.latest_base_command = self.pltf_clc_type.calculateCommand(twist_in.linear.x, twist_in.linear.y, twist_in.angular.z)

    def gazebo_odom_callback(self, odom_in):
        last_gazebo_odom = odom_in
        
        if not self.has_gazebo:
            self.get_logger().warn("Switching to using Gazebo odometry for odometry/base_raw from now on. We are running in full on simulation.")
            self.has_gazebo = True

        odom_msg = odom_in
        odom_msg.header.frame_id = self.frame_id
        self.odom_pub.publish(odom_msg)

    def canDeviceTCallback(self, can_msg):
        self.can_device_t_frame_count += 1  # Increment the frame count

        can_frame = self.loki_can_devices.CANFrame()
        self.canFrameFromMsg(can_msg, can_frame)

        self.can_device_t_frames.append(can_frame)
        self.can_device_t_frames = self.can_device_t_frames[:self.can_device_t_frame_count]

    def sendDriveCommands(self):
        if (self.get_clock().now() > self.latest_base_command_time + self.command_timeout_time) or self.emergency_stop:
            self.pltf_clc_type.setZeroSpeed(self.latest_base_command)

        self.client_send_drive_commands()


    def client_send_drive_commands(self):
        commands = 1
        latest_base_command_msg = BaseState()
        self.baseStateToMsg(self.latest_base_command_time, self.latest_base_command, latest_base_command_msg)
        self.base_command_msg.publish(latest_base_command_msg)
        DriveCmds.Request().commands = commands
        Future = self.cli_send_drive_commands.call_async(DriveCmds.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.Result()
        return
        

    def sendDeviceCommands(self):
        if self.can_device_t_frame_count < 100:
            if not self.mute_device_commands:
                for can_frame in self.can_device_t_frames:
                    self.client_send_device_commands(can_frame)
        else:
            self.get_logger().warn("Too many CAN device msgs in queue")
        self.can_device_t_frame_count = 0
        self.can_device_t_frame = []

    def client_send_device_commands(self, can_frame):
        DeviceCmds.Request().commands = can_frame
        Future = self.cli_send_device_commands.call_async(DeviceCmds.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
    
    def sendSimCommands(self):
        current_time = self.get_clock().now()
        
        if current_time > self.latest_base_command_time + self.command_timeout_time:
            self.pltf_clc_type.setZeroSpeed(self.latest_base_command)
        self.client_simulate_All_Drives(self.latest_base_command)

    def client_simulate_All_Drives(self):
        simcommand = BaseState()
        self.basestate_to_msg(self.latest_base_command_time, self.latest_base_command, simcommand)
        self.sim_command_msg.publish(simcommand)
        SimDrive.Request().commands = 1
        Future = self.cli_sim_drive.call_async(SimDrive.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
        
    def setCurrentPosAsZeroAll(self):
        self.client_set_Current_Pos_As_Zero_All()

    def client_set_Current_Pos_As_Zero_All(self):
        zeroall = True
        PosZeroAll.Request().zeroall = zeroall
        Future = self.cli_current_pos_as_zero_all.call_async(PosZeroAll.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return
    
    def setCurrentPosAsZero(self, node_id):
        self.client_set_Current_pos_as_zero(node_id)
    
    def client_set_Current_pos_as_zero(self, node_id):
        PosZero.Request().can_id = node_id
        Future = self.cli_current_pos_as_zero.call_async(PosZero.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return

    def homeSteeringAll(self):
        return self.client_home_steering_all()
    
    def client_home_steering_all(self):
        Future = self.cli_home_steering_all.call_async(HomesteeringAll.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return response
    
    def setup_Motor_Controller(self, node_id, setup_id, setup_value):
        self.client_setup_motor_controller(node_id, setup_id, setup_value)

    def client_setup_motor_controller(self, node_id, setup_id, setup_value):
        MotCot.Request().can_id = node_id
        MotCot.Request().setup_id = setup_id 
        MotCot.Request().setup_value = setup_value
        Future = self.cli_setup_motor_controller.call_async(MotCot.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return

    def client_get_controller_setup_map(self, can_id, setup_map):
        CotMap.Request().can_id = can_id
        CotMap.Request().setup_map = setup_map
        Future = self.cli_get_controller_setup_map.call_async(MotCot.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return

    def srv_callback_setup_controller(self, request, response):
        message = ""
        status = 0

        controller_setup_map_ss = ""
        setup_map = []
        self.client_get_controller_setup_map(request.can_id, setup_map)

        i = 0
        for i in range(setup_map):
            controller_setup_map_ss += f"{i:>4}"

        if request.setup_id < 0 and request.setup_id >= len(setup_map):
            message = "invalid setup ID. Try setup ID = 0 for map"
            status = -2
        elif request.setup_id == 0:
            message = controller_setup_map_ss
            statues = 0
        else:
            self.get_logger().info("Sending setup PDO to controller (CAN ID: {request.can_id}): " f"setup ID: {request.setup_id}, setup value = {request.setup_value}")
            message = f"message sent to controller: CAN ID = {request.can_id}, {setup_map[request.setup_id]} = {request.setup_value}"
            statues = 1

        response.status = status
        response.message = message.str()


    
    def srv_callback_home_steering(self, request, response):
        self.get_logger().info("homiing steering")

        if self.homesteeringAll():
            response.success = True
            response.message = "homing commands sent"
        else:
            response.success = False
            response.message = "homing failed"

    def srv_Callback_Reset_odom(self, request, response):
        self.get_logger().info("Resetting base odometry. x=0, y=0, yaw=0")
        self.pltf_clc_type.zeroOdometryPose()
        response.sucess = True
        response.message = "Resetting base odometry. x = 0, y = 0, yaw = 0"

    def srv_callback_set_drive_params(self, request, response):
        num_drives = len(self.motor_drives)

        for i in range(len(request.params)):
            if 0 <= request.params[i].index < num_drives and request.params[i].type in self.motor_drives_[request.params[i].index]:
                self.motor_drives_[request.params[i].index][request.params[i].type] = request.params[i].value
                response.status += 1
            else:
                all_params_ok = False
                response.message = "One or more params could not be set"

        self.pltf_clc_type.setParams(self.motor_drives)
        self.client_set_drive_params()

    def client_set_drive_params(self):
        set = True
        Params.Request().set = set
        Future = self.cli_set_drive_params.call_async(Params.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return


    def srv_callback_curent_pos_zero(self, request, response):
        if request.can_id == -1:
            self.setCurrentPosAsZeroAll()
            response.success = True
            response.message = "setting ALL home counts so that current positions are zero"

        elif request.can_id > 0:
            self.setCurrentPosAsZero(request.can_id)
            response.success = True
            response.message = "Setting home count of selected id so thtat current position is zero"
        
        else:
            response.success = False
            response.message = "can_id must be positive or -1 (sets home count for all drives)"

    def srv_callback_safety_stop(self, request, response):
        message = ''
        self.emergency_stop = request.data

        if self.emergency_stop:
            message = "safety stop enabled"
            self.get_logger().info("SAFETY STOP ENABLED")
        else:
            message = "Safety Stop Disabled"
            self.get_logger().info("SAFETY STOP DISABLED")
        
        response.success = True
        response.message = message

    def srv_callback_mute_device_commands(self, request, response):
        message = ''
        self.mute_device_commands = request.data

        if self.mute_device_commands:
            message = "muting CAN commands to non drive/battery devices"
            self.get_logger().info("Unmuting CAN commands to non drive/battery devices")

        else:
            message = "unmuting CAN commands to non drive/battery devices"
            self.get_logger().info("Unmuting CAN commands to non drive/battery devices")
        
        self.can_device_t_frame_count = 0
        self.can_device_t_frame = []

        response.success = True
        response.message = message 
    
    def srv_callback_io_set_bool(self, request, response, unique_service_id):
        success = True
        message = ''
        data = request.data

        boolservice = self.client_call_set_bool_service(unique_service_id, data, success, message)
        response.success = boolservice.success
        response.message = boolservice.message
        self.get_logger().info(message)
    
    def client_call_set_bool_service(self, unique_service_id, data, success, message):
        SetBools.Request().unique_service_id = unique_service_id
        SetBools.Request().value = data
        SetBools.Request().data = success
        SetBools.Request().data = message
        Future = self.cli_call_set_bool.call_async(SetBools.Request())
        rclpy.spin_until_future_complete(self, Future)
        response = Future.result()
        return response

    def canFrameFromMsg(self, can_msg_in, can_frame_out): #fix this since i communicates with socketcan needs to probalbly be in c++
        can_frame_out = canframe()
        can_frame_out.setId(can_msg_in.id)
        can_frame_out.setLength(can_msg_in.length)
        can_frame_out.setBytes(can_msg_in.data[0],
                                can_msg_in.data[1],
                                can_msg_in.data[2],
                                can_msg_in.data[3],
                                can_msg_in.data[4],
                                can_msg_in.data[5],
                                can_msg_in.data[6],
                                can_msg_in.data[7]
                                )
        

    def baseStateToMsg(self, time, base_state_in, base_state_out):
        base_state_out.header.stamp = time
        base_state_out.drive_mode = base_state_in.drive_mode
        base_state_out.prop_speed = base_state_in.prop_speed
        base_state_out.prop_pos = base_state_in.prop_pos
        base_state_out.steer_speed = base_state_in.steer_speed
        base_state_out.steer_pos = base_state_in.steer_pos
        base_state_out.steer_max_speed = base_state_in.steer_max_speed
        base_state_out.channel = base_state_in.channel

    def batteryVarsToMsg(self, batt_vars_in, batt_msg_out):
        batt_msg_out = self.loki_base.BatteryDataArray()  

        for elem in batt_vars_in:
            batt_msg = self.loki_base.BatteryData()
            
            batt_msg.battery_id = elem.id
            batt_msg.battery_state = elem.state
            batt_msg.state_of_charge = elem.soc
            batt_msg.state_of_health = elem.soh
            batt_msg.battery_voltage = elem.voltage
            batt_msg.battery_current = elem.current
            batt_msg.charge_fet_on = elem.charge_fet
            batt_msg.discharge_fet_on = elem.discharge_fet
            batt_msg.cycle_count = elem.cycle_count
            batt_msg.battery_capacity = elem.capacity
            batt_msg.temperatures = elem.temps
            batt_msg.battery_alarms.over_voltage_protection = elem.a_over_volt
            batt_msg.battery_alarms.under_voltage_protection = elem.a_under_volt
            batt_msg.battery_alarms.over_temperature_protection = elem.a_over_temp
            batt_msg.battery_alarms.under_temperature_protection = elem.a_under_temp
            batt_msg.battery_alarms.over_charge_current = elem.a_over_charge
            batt_msg.battery_alarms.over_discharge_current = elem.a_over_discharge
            batt_msg.battery_alarms.can_communication_fail = elem.a_can_fail
            batt_msg.battery_alarms.cell_voltage_sensing_fault = elem.a_cell_volt_sens_fault
            batt_msg.battery_alarms.bms_fail = elem.a_bms_fail
            batt_msg.battery_alarms.short_circuit_discharge = elem.a_short_circ_discharge
            batt_msg.battery_alarms.temperature_sensing_fault = elem.a_temp_sens_fault
            batt_msg.battery_alarms.over_voltage_fault = elem.a_over_volt_fault
            batt_msg.battery_alarms.under_voltage_fault = elem.a_under_volt_fault
            batt_msg.battery_alarms.pack_voltage_sensing_fault = elem.a_pack_volt_sens_fault

            batt_msg_out.battery_data.append(batt_msg)

        
    def msg_to_base_state_callback(self, msg):
        self.basestatemsg.drive_mode = msg.drive_mode
        self.basestatemsg.prop_speed = msg.prop_speed
        self.basestatemsg.prop_pos = msg.prop_pos
        self.basestatemsg.steer_speed = msg.steer_speed
        self.basestatemsg.steer_pos = msg.steer_pos
        self.basestatemsg.steer_max_speed = msg.steer_max_speed
        self.basestatemsg.channel = msg.channel



    
def main(args=None):
    rclpy.init(args=args)
    node = BaseDriver()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
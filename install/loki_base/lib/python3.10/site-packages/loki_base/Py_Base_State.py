import rclpy


class PyBaseState():
    def __init__(self):
        
        PyBaseState.drive_mode = 0
        PyBaseState.prop_speed = [0.0, 0.0, 0.0, 0.0]
        PyBaseState.prop_pos = [0.0, 0.0, 0.0, 0.0]
        PyBaseState.steer_speed = [0.0, 0.0, 0.0, 0.0]
        PyBaseState.steer_pos = [0.0, 0.0, 0.0, 0.0]
        PyBaseState.steer_max_speed = [0.0, 0.0, 0.0, 0.0]
        PyBaseState.channel = [0, 0, 0, 0]





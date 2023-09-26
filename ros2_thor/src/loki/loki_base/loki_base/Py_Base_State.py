import rclpy


class PyBaseState():
    def __init__(self, drive_mode, prop_speed, prop_pos, steer_speed, steer_pos, steer_max_speed, channel):
        self.drive_mode = drive_mode
        self.prop_speed = prop_speed
        self.prop_pos = prop_pos
        self.steer_speed = steer_speed
        self.steer_max_speed = steer_max_speed
        self.channel = channel

import rclpy


class canframe():
    def __init__(self, id, type, length, data):
        self.id = id
        self.type = type
        self.length = length
        self.data = data
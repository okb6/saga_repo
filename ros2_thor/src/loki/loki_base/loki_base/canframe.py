import rclpy


class canframe():
    def __init__(self):
        self.id: int
        self.type: int
        self.length: int
        self.data = []
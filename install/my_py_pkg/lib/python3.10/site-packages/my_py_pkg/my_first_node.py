#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyCustomNode(Node):
    def __init__(self):
        super().__init__('my_node_name')
        self.get_logger().info("Hello World")

def main(args=None):
    rclpy.init(args=args)
    node = MyCustomNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__name__':
    main()
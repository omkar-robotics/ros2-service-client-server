import rclpy
from rclpy.node import Node

from my_service_interfaces.srv import ResetCounter


class ResetCounterServer(Node):

    def __init__(self):
        super().__init__('reset_counter_server')

        self.counter = 0

        self.server = self.create_service(
            ResetCounter,
            'reset_counter',
            self.reset_counter_callback
        )

        self.get_logger().info('Reset Counter Service Started')


    def reset_counter_callback(self, request, response):

        self.counter = request.reset_value

        response.success = True
        response.message = f'Counter reset to {self.counter}'

        return response


def main(args=None):

    rclpy.init(args=args)

    node = ResetCounterServer()

    rclpy.spin(node)

    rclpy.shutdown()


if __name__ == '__main__':
    main()

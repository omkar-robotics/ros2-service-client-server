import rclpy
from rclpy.node import Node

from my_service_interfaces.srv import ResetCounter


class ResetCounterClient(Node):

    def __init__(self):
        super().__init__('reset_counter_client')

        self.client = self.create_client(
            ResetCounter,
            'reset_counter'
        )

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available...')

        self.request = ResetCounter.Request()


    def send_request(self, value):

        self.request.reset_value = value

        future = self.client.call_async(self.request)

        rclpy.spin_until_future_complete(self, future)

        return future.result()


def main(args=None):

    rclpy.init(args=args)

    client = ResetCounterClient()

    response = client.send_request(100)

    client.get_logger().info(
        f'Success: {response.success}'
    )

    client.get_logger().info(
        f'Message: {response.message}'
    )

    rclpy.shutdown()


if __name__ == '__main__':
    main()

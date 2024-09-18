import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from gpiozero import DigitalInputDevice

class LeakSensorNode(Node):
    def __init__(self):
        super().__init__('leak_sensor_node')
        self.publisher_ = self.create_publisher(Bool, 'leak_status', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)
        
        # Set up GPIO with explicit pull-down
        self.sensor_pin = 17
        self.sensor = DigitalInputDevice(self.sensor_pin, pull_up=False)

    def timer_callback(self):
        msg = Bool()
        msg.data = self.sensor.is_active
        self.publisher_.publish(msg)
        self.get_logger().info(f'Leak status: {"Leak detected" if msg.data else "No leak"}')

def main(args=None):
    rclpy.init(args=args)
    leak_sensor_node = LeakSensorNode()
    rclpy.spin(leak_sensor_node)
    leak_sensor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
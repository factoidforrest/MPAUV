import rclpy
from rclpy.node import Node
from sensor_msgs.msg import FluidPressure, Temperature
from geometry_msgs.msg import PointStamped
from hardware_pkg.lib import ms5837



class DepthSensorNode(Node):
    def __init__(self):
        super().__init__('depth_sensor_node')
        self.get_logger().info("Depth node init")

        self.pressure_publisher = self.create_publisher(FluidPressure, 'pressure', 10)
        self.temperature_publisher = self.create_publisher(Temperature, 'temperature', 10)
        self.depth_publisher = self.create_publisher(PointStamped, 'depth', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)  # 10Hz
        
        self.sensor = ms5837.MS5837_30BA()  # Default I2C bus is 1 (Raspberry Pi 3)
        self.get_logger().info("imported depth sensor library")

        if not self.sensor.init():
            self.get_logger().error("Sensor could not be initialized")
            rclpy.shutdown()
        
        self.sensor.setFluidDensity(ms5837.DENSITY_FRESHWATER)

    def timer_callback(self):
        if not self.sensor.read():
            self.get_logger().warn("Sensor read failed!")
            return

        # Publish pressure
        pressure_msg = FluidPressure()
        pressure_msg.header.stamp = self.get_clock().now().to_msg()
        pressure_msg.fluid_pressure = self.sensor.pressure() * 100.0  # Convert mbar to Pa
        self.pressure_publisher.publish(pressure_msg)

        # Publish temperature
        temp_msg = Temperature()
        temp_msg.header.stamp = self.get_clock().now().to_msg()
        temp_msg.temperature = self.sensor.temperature()
        self.temperature_publisher.publish(temp_msg)

        # Publish depth
        depth_msg = PointStamped()
        depth_msg.header.stamp = self.get_clock().now().to_msg()
        depth_msg.point.z = self.sensor.depth()
        self.depth_publisher.publish(depth_msg)

        self.get_logger().info(f"P: {self.sensor.pressure():.1f} mbar, T: {self.sensor.temperature():.2f}°C, D: {self.sensor.depth():.3f}m")

def main(args=None):
    rclpy.init(args=args)
    node = DepthSensorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
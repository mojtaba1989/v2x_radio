import socket
import struct
import time

STRUCT_FORMAT = "<Qfffff"  # Q = uint64_t, i = int

# Target UDP address and port
UDP_IP = "10.0.0.214"
UDP_PORT = 1551
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

def send_udp_gps():
    while True:
        # Prepare data
        time_ms = int(time.time() * 1000)  # Current time in milliseconds
        latitude = 37.5123456  # Example latitude (37.5123456° in 1/10 microdegrees)
        longitude = -12.2123456  # Example longitude (-122.123456° in 1/10 microdegrees)
        elevation = 12.3  # Example elevation (12.3 meters)
        speed = 1.5  # Example speed (m/s)
        heading = 1.5  # Example speed (m/s)

        # Pack the data using struct
        packed_data = struct.pack(STRUCT_FORMAT, time_ms, latitude, longitude, elevation, speed, heading)

        sock.sendto(packed_data, (UDP_IP, UDP_PORT))
        print(f"Sent data: time_ms={time_ms}, latitude={latitude}, longitude={longitude}, elevation={elevation}, speed={speed}, heading={heading}")

        # Wait before sending the next packet
        time.sleep(.1)  # Send data every 1 second


try:
    send_udp_gps()
except KeyboardInterrupt:
    print("Stopped sending data.")
    sock.close()
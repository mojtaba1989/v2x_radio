# MK5 1609 Application with UDP Vehicle Data Injection

This package provides an application for the Cohda Wireless MK5 that implements IEEE 1609 protocols. Additionally, it introduces a new feature that allows the injection of vehicle location and speed data through a UDP port, enhancing flexibility for testing and simulation scenarios.

## How to Install:
There are two options for deploying this application:
1. Copy application tar file into MK5 and unpack as instructed on Cohda site:

    TAR location: https://github.com/mojtaba1989/v2x_radio/blob/main/example1609/example1609/example1609-mk5-Exported.tgz

    ```bash
    cd /mnt/rw
    tar -xzf <PATH_TO_TAR> .
    ```
    __Please note:__ in this solution, MK5's firmware should be 20. 
2. Upgrade firmware on MK5:

    Image file:[restricted access] https://drive.google.com/file/d/15v6zaLqPy-1N9GEw5dFNSfr4ptygNJKY/view?usp=drive_link

    Use SCP to move *.img to mk5:/mnt/rw/temp (or any other location)

    ```bash
    sudo fim -u /mnt/rw/temp/*.img
    sudo rm -rf /mnt/rw/temp/
    sudo reboot
    ```


## Features

- **1609 Protocol Implementation**: Leverages Cohda MK5's capabilities to handle IEEE 1609.x protocol suite.
- **UDP Data Injection**: Inject vehicle data (location, speed, and more) via a configurable UDP port.
- **Dual mode**: This application injects vehicle information:
    1.  Received through UDP port
    2. **OR** uses on-board GPS to form vehicle information in BSM.

## Requirements

- **Hardware**: Cohda Wireless MK5 device
- **Software**: 
  - ROS Melodic package for sharing data:
  ```bash
    git clone https://github.com/mojtaba1989/apsrc_udp_data_sharing.git
  ```
## Configuring Data Format

Ensure the injected data adheres to the following format:

The UDP packet contains the following fields packed using the struct format `<Qfffff`:
- **time_ms**: Timestamp in milliseconds (uint64)
- **latitude**: Latitude in decimal degrees (float)
- **longitude**: Longitude in decimal degrees (float)
- **elevation**: Elevation in meters (float)
- **speed**: Speed in meters per second (float)
- **heading**: Heading in degrees (float)

## MK5 Configuration (obu.conf)

Ensure the following configuration is included in your `obu.conf` file for proper operation of the UDP injection feature:

```conf
APSBSMTx = {
    Enabled = true;
    DevID = 0x53264875;
    ApplInterval = 100;

    # Socket Parameters
    Socket = {
        Port = 1551; # socket port number
        MaxAge = 1200; # mSec 0:disables age check
        UdpInterval = 50; # suggested ApplInterval:UdpInterval ratio >= 2:1  
    };
};
```
## Example UDP Data Packet

The data can be packed and sent as follows:
```python
import socket
import struct
import time

STRUCT_FORMAT = "<Qfffff"  # Q = uint64_t, f = float
UDP_IP = "10.0.0.214"
UDP_PORT = 1551
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

def send_udp_gps():
    while True:
        time_ms = int(time.time() * 1000)  # Current time in milliseconds
        latitude = 37.5123456
        longitude = -12.2123456
        elevation = 12.3
        speed = 1.5
        heading = 1.5

        packed_data = struct.pack(STRUCT_FORMAT, time_ms, latitude, longitude, elevation, speed, heading)
        sock.sendto(packed_data, (UDP_IP, UDP_PORT))
        print(f"Sent data: time_ms={time_ms}, latitude={latitude}, longitude={longitude}, elevation={elevation}, speed={speed}, heading={heading}")
        time.sleep(0.1)

try:
    send_udp_gps()
except KeyboardInterrupt:
    print("Stopped sending data.")
    sock.close()
```

## Contact

For any questions or support, please contact:

- Email: [mbahramg@mtu.edu](mailto:mbahramg@mtu.edu)
- GitHub: [@mojtaba1989](https://github.com/mojtaba1989)
# ESP32 PIR Sensor Controlled SG90 Servo

## Project Overview
This project uses an ESP32 microcontroller to detect motion via a PIR motion sensor and control an SG90 servo motor. When motion is detected, the servo rotates 90 degrees, simulating an actuator response.

## Hardware Used
- ESP32 Dev Board
- PIR Motion Sensor (e.g., HC-SR501)
- SG90 Servo Motor
- Breadboard and jumper wires

## Connections

| Component       | Pin/Signal      | ESP32 Pin         |
|-----------------|-----------------|-------------------|
| PIR VCC         | 3.3V            | ESP32 3V3         |
| PIR GND         | Ground          | ESP32 GND         |
| PIR Output      | Digital output  | GPIO 4 (example)  |
| SG90 Power      | 5V (VIN)        | ESP32 VIN         |
| SG90 Ground     | Ground          | ESP32 GND         |
| SG90 Signal     | Control signal  | GPIO 13           |

## Setup and Usage
1. Connect the hardware as per the above table.
2. Build and upload the code using PlatformIO.
3. When motion is detected by the PIR sensor, the SG90 servo will rotate 90°.
4. The servo will hold position or reset based on your code logic.

## Future Improvements
- Add Wi-Fi and MQTT integration for remote monitoring.
- Include additional sensors (e.g., RFID, temperature).
- Implement servo position reset after delay.

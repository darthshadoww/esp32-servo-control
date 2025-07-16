# ESP32 SG90 Servo Motor Control

## Project Overview
This project demonstrates basic control of an SG90 servo motor using an ESP32. It moves the servo to preset angles.

## Hardware Used
- ESP32 Dev Board
- SG90 Servo Motor
- Breadboard and jumper wires

## Connections
- Servo signal pin → ESP32 GPIO13
- Servo power pin (Red) → 3.3V or 5V (depending on servo)
- Servo ground pin (Black or brown) → GND

## Setup and Usage
1. Build the project with PlatformIO and upload it to ESP32.
2. The servo will move between defined angles.

## Future Plans
- Add push button control
- Add sensors
- Implement IoT features with MQTT

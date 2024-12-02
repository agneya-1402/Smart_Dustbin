# Smart Dustbin Using Servo and Ultrasonic Sensor

This project implements a smart dustbin that opens automatically when an object (like your hand) is detected nearby using an ultrasonic sensor. A servo motor is used to control the lid of the dustbin. The system detects the presence of an object and opens the lid, providing a hands-free experience for throwing waste into the dustbin.

## Components Used:
- **Arduino Uno**: Microcontroller to control the system.
- **Ultrasonic Sensor (HC-SR04)**: Measures the distance between the object and the sensor to detect proximity.
- **Servo Motor**: Controls the opening and closing of the dustbin lid.
- **Jumper wires**: For connecting the components.
- **Breadboard** (optional): For prototyping connections.

## Circuit Diagram:
![Circuit Diagram](https://github.com/agneya-1402/Smart_Dustbin/blob/main/circuit.png)


## How It Works:
Ultrasonic Sensor: The sensor continuously measures the distance from the object in front of it. If the distance is less than 20 cm, it detects the object.
Servo Motor: Once an object is detected, the servo motor moves the dustbin lid from a closed position (0 degrees) to an open position (90 degrees). The lid remains open for 5 seconds before automatically closing.
Arduino: The Arduino Uno processes the readings from the ultrasonic sensor and controls the servo motor based on the proximity of the object.

## Installation:
Arduino IDE: Download and install the Arduino IDE.
Servo Library: The Servo library is included by default in the Arduino IDE. You don’t need to install it manually.
Wiring: Connect the ultrasonic sensor and servo motor to the Arduino Uno according to the circuit diagram.
Upload Code: Copy and paste the code into the Arduino IDE and upload it to your Arduino board.

## Features:
Automatic opening and closing of the dustbin lid.
Hands-free operation using proximity detection.
Simple and cost-effective design.

## Troubleshooting:
Servo not working: Make sure the servo is properly connected to the Arduino and the correct pin is specified in the code.
Distance measurement issues: Ensure the ultrasonic sensor is connected properly, and check the wiring for correct voltage.

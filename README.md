# LDR/IR Robot

## Introduction
Welcome to the LDR/IR Robot project! This personal project is focused on creating a robot that can autonomously seek out light sources while avoiding obstacles in its path. Utilizing a Light Dependent Resistor (LDR) and an Infrared (IR) sensor, this robot is designed to navigate through its environment intelligently.

## Features
- **Light Seeking:** Through the use of an LDR, the robot can detect and move towards the strongest light source in its vicinity.
- **Obstacle Avoidance:** Equipped with an IR sensor, the robot can identify obstacles in its path and navigate around them to avoid collisions.
- **Servo Motor Control:** The robot uses a servo motor to change direction, allowing for precise and flexible movement.

## Components Required
- Light Dependent Resistor (LDR)
- Infrared (IR) Sensor
- Servo Motor
- Microcontroller (e.g., Arduino)
- Batteries / Power Source
- Wires and Connectors
- Chassis and Wheels

## Setup Instructions
1. **Assembly:** Begin by assembling the chassis, attaching the wheels, and mounting the servo motor, LDR, and IR sensor onto the robot frame.
2. **Wiring:** Connect the LDR and IR sensor to the microcontroller according to the circuit diagram provided in the `circuit_diagram` directory.
3. **Programming:** Upload the provided sketch to your microcontroller. The code responsible for light seeking and obstacle avoidance can be found in the `src` directory.
4. **Testing:** Once everything is set up, power on the robot and test its light seeking and obstacle avoidance capabilities in various environments.

## Usage
- Place the robot in a semi-dark room with one or more light sources.
- Observe as it autonomously seeks out the brightest light source.
- Introduce obstacles in its path to see how it navigates around them.

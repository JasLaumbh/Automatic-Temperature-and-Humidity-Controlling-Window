# Cloud-Based IoT Window Automation

This project automates window control using IoT devices. The system leverages **ESP32**, **AWS IoT Core**, and **MQTT** for seamless integration between the physical IoT device and cloud services. The goal of the project is to provide real-time monitoring and control, reducing response time by 40% and improving overall window automation efficiency.

---

## 🏗️ Project Overview

The **Cloud-Based IoT Window Automation** system enables remote control and monitoring of windows via the Internet. The system uses an **ESP32 microcontroller** to interface with the physical window control mechanisms (e.g., motors, servos). **AWS IoT Core** is used to securely connect the IoT devices to the cloud, while **MQTT** provides real-time messaging between devices and the cloud. 

The key features of the system are:
- Real-time window control and monitoring through a web or mobile interface.
- Integration with AWS IoT Core for cloud connectivity and security.
- MQTT protocol for low-latency and efficient communication.
- Reduced response time by 40%, enabling quicker automation of window opening/closing.

---

## 🌐 Tech Stack

- **ESP32**: Microcontroller used for controlling the window's physical mechanism.
- **AWS IoT Core**: Cloud service used for device communication and management.
- **MQTT**: Lightweight messaging protocol for efficient data exchange between devices and the cloud.
- **AWS Lambda**: Used for processing commands and triggering actions based on the IoT device state.
- **AWS DynamoDB**: For storing window status (open/closed) and other related data.
- **AWS SNS (Simple Notification Service)**: For sending notifications (e.g., window status updates or alarms).

---

## 🔧 Project Structure


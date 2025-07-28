## 🌬️ Cloud-Based IoT Window Automation
This project automates the opening and closing of a window using an ESP32 microcontroller connected to AWS IoT Core via the MQTT protocol. It allows you to remotely control the window's position (open/close) by sending messages from the AWS cloud, making the system smart, efficient, and accessible from anywhere.

---

## ✅ What This Project Can Do
With this project, you can:
🔄 Remotely open or close the window by sending open or close messages from AWS IoT Core.
📶 Receive MQTT messages from AWS IoT Core on the ESP32 in real time.
⚙️ Automatically move the servo motor to a specific angle depending on the command (open = 0°, close = 90°).
🔒 Securely connect to AWS IoT Core using certificates and credentials.
📡 Subscribe to a topic (e.g., esp32/pub) and act based on messages received from AWS.
---

## 🌐 Tech Stack

- **ESP32**: Microcontroller used for controlling the window's physical mechanism.
- **AWS IoT Core**: Cloud service used for device communication and management.
- **MQTT**: Lightweight messaging protocol for efficient data exchange between devices and the cloud.

---

## ⚙️ How It Works
1. The ESP32 connects to your Wi-Fi and then to AWS IoT Core using MQTT over TLS.
2.It subscribes to a topic like esp32/pub.
3.From the AWS console (MQTT test client), you can publish open or close to that topic.
4.Based on the received message:
  open → Servo motor rotates to 0°
  close → Servo motor rotates to 90°
5.The window's position is adjusted physically through the servo.

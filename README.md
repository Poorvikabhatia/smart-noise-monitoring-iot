# Smart Noise Monitoring & Control System (IoT-Based)

## 📌 Overview
This project is an IoT-based Smart Noise Monitoring and Control System designed to maintain silence in noise-sensitive environments such as libraries, study rooms, hospitals, and offices. It detects excessive noise in real time and provides instant alerts to help reduce disturbances and improve productivity.

---

## 🚨 Problem Statement
- Noise pollution in silent zones is a common issue  
- Lack of real-time monitoring systems  
- No immediate alert mechanism to control noise  
- Affects concentration and productivity  

---

## 💡 Proposed Solution
The system continuously monitors environmental noise using a sound sensor and processes the data using ESP8266 (NodeMCU). When the noise level exceeds a predefined threshold, it triggers:
- A **buzzer alert** for local warning  
- A **mobile notification** for remote monitoring using Blynk  

---

## ⚙️ Hardware Components
- ESP8266 (NodeMCU)  
- Sound Sensor Module  
- Buzzer  
- Jumper Wires  
  
---

## 🔄 Working Principle
1. The sound sensor captures environmental noise as analog signals  
2. ESP8266 reads the sensor values in real time  
3. Noise values are compared with a threshold (~37 after calibration)  
4. If noise exceeds threshold:  
   - Buzzer turns ON for 1 second (local alert)  
   - Notification is sent to mobile via Blynk  
5. If noise is below threshold:  
   - System remains in monitoring mode  

---

## ✨ Features
- Real-time noise monitoring  
- Threshold-based alert system  
- Instant buzzer warning (1-second alert to avoid feedback noise)  
- IoT-based mobile notifications  
- Live data visualization using Blynk dashboard  
- Low-cost implementation (~₹300–₹400)  
- Scalable for multiple environments  

---

## 📱 IoT Integration
The system uses the **Blynk IoT platform** for:
- Real-time data visualization  
- Remote monitoring  
- Alert notifications  

---

## 🏫 Applications
- Libraries  
- Study Rooms  
- Hospitals  
- Offices  
- Hostels  
- Smart Campuses  

---

## 📊 Advantages
- Low cost and easy to implement  
- Real-time response system  
- Remote monitoring capability  
- Improves discipline and productivity  
- Scalable for larger environments  

---

## 🔮 Future Scope
- Multi-room monitoring system  
- Centralized dashboard for campuses  
- Noise data analytics and insights  
- Mobile app-based threshold control  
- Integration with smart campus systems  

---

## 🎥 Demo
👉 [https://drive.google.com/file/d/1ZJ_UcEPYbmZlmDbDu0Y-Q-Ra1JmqQVuO/view?usp=sharing]

---

## 🛠️ Technologies Used
- ESP8266 (NodeMCU)  
- Embedded C (Arduino IDE)  
- IoT (Blynk Platform)  
- Sound Sensor

---
  

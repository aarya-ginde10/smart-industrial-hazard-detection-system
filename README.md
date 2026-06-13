# Smart Industrial Hazard Detection System

## Overview
The Smart Industrial Hazard Detection System is an IoT-based safety monitoring solution designed to detect hazardous environmental conditions in real time. The system continuously monitors air quality, temperature, humidity, and fire hazards using multiple sensors connected to an ESP32-S3 microcontroller.

Sensor data is transmitted to a cloud-based IoT dashboard through Wi-Fi, enabling remote monitoring and instant alert generation. The project improves safety in industrial, residential, and commercial environments by providing early warning notifications during emergencies.

---

## Features

- Real-time air quality monitoring
- Temperature and humidity monitoring
- Fire detection using flame sensor
- Audible alert using buzzer
- Visual alert using LEDs
- Wi-Fi enabled cloud connectivity
- Remote monitoring through IoT dashboard
- Low-cost and scalable solution

---

## Components Used

| Component | Purpose |
|------------|----------|
| ESP32-S3 | Main Microcontroller |
| MQ-135 Sensor | Air Quality Monitoring |
| DHT11 Sensor | Temperature and Humidity Monitoring |
| Flame Sensor | Fire Detection |
| Buzzer | Audible Alert |
| LEDs | Visual Alert |
| Breadboard | Circuit Prototyping |
| Wi-Fi Module | Wireless Communication |

---

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- Blynk IoT Platform
- C/C++

---

## System Architecture

1. Sensors collect environmental data.
2. ESP32-S3 reads sensor values.
3. Sensor values are compared with threshold limits.
4. Hazard conditions are detected.
5. LEDs and buzzer are activated.
6. Data is sent to cloud dashboard through Wi-Fi.
7. Users monitor data remotely.

---

## Working Principle

### Air Quality Monitoring
The MQ-135 sensor continuously measures air quality and detects harmful gases.

### Fire Detection
The flame sensor detects the presence of fire and triggers emergency alerts.

### Environmental Monitoring
The DHT11 sensor measures temperature and humidity.

### Alert Generation
If any parameter exceeds predefined limits:
- Buzzer activates
- LEDs glow
- Cloud dashboard updates instantly

---

## Applications

- Smart Homes
- Industrial Safety Systems
- Laboratories
- Warehouses
- Hospitals
- Educational Institutions
- Chemical Storage Facilities
- Smart Buildings
- Environmental Monitoring Stations

---

## Future Enhancements

- AI-Based Predictive Analysis
- SMS Alert System
- Email Notification System
- GPS Location Tracking
- CCTV Integration
- Multi-Node Industrial Deployment

---

## Results

The prototype successfully:
- Monitored air quality
- Detected fire hazards
- Measured temperature and humidity
- Generated alerts in real time
- Uploaded data to cloud dashboard
- Enabled remote monitoring

---

## Conclusion

The Smart Industrial Hazard Detection System demonstrates the practical implementation of IoT technology for environmental monitoring and hazard detection. The system provides a reliable, scalable, and cost-effective solution for improving safety through real-time monitoring and instant alert generation.

---


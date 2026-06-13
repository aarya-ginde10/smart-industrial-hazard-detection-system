# Code Description

This program creates a Wi-Fi based Hazard Monitoring Dashboard using the ESP8266 module.

## Functions

### Wi-Fi Connectivity
The ESP8266 connects to a Wi-Fi hotspot using SSID and password credentials.

### Web Server
A web server runs on port 80 and hosts a monitoring dashboard accessible through a browser.

### Hazard Detection
The ESP8266 receives data from the Arduino through serial communication.

Possible messages:
- GAS → Gas leakage detected
- TEMP → High temperature detected
- SAFE → Normal condition

### Alert System
The dashboard changes status and color based on received sensor data:
- Green → Safe Environment
- Red → Gas Leak Detected
- Orange → High Temperature

### Auto Refresh
The webpage refreshes every 2 seconds to display updated hazard status.

## Applications
- Industrial Safety Monitoring
- Smart Factories
- Gas Leakage Detection
- Fire Prevention Systems
- Environmental Monitoring
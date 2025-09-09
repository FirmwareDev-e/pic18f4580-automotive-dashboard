# 🚗 Automotive Dashboard using CAN (PIC18F4580)

## 📌 Project Description
The **Automotive Dashboard** project demonstrates a **CAN-based vehicle communication system** using the **PIC18F4580 microcontroller**.  
It simulates **three ECUs** connected over a **Controller Area Network (CAN) bus**, exchanging real-time automotive parameters.

- **ECU1** → Captures **Speed** (via potentiometer → ADC) and **Gear** (via digital keypad).  
- **ECU2** → Captures **RPM** (via potentiometer → ADC) and **Indicator status** (via keypad).  
- **ECU3** → Acts as the **Dashboard Unit**, receiving CAN messages and displaying data on a **16x2 LCD**.  

This project highlights **CAN communication, ADC interfacing, keypad scanning, and LCD integration**, useful for learning how **modern vehicles exchange data across multiple ECUs**.

---

## ⚡ Features
- CAN bus communication between 3 ECUs  
- Real-time display of Speed, Gear, RPM, and Indicators  
- ADC-based inputs using potentiometers  
- Digital and matrix keypad interfacing  
- Modular driver-based design in C (ADC, CAN, LCD, Keypad)

---

## 🛠️ Hardware Requirements
- PIC18F4580 Microcontroller  
- MCP2551 CAN Transceiver  
- 16x2 Character LCD  
- Potentiometers (for Speed and RPM)  
- Digital/Matrix Keypads  
- Power supply and connectors  

---

## 💻 Software Requirements
- MPLAB X IDE  
- XC8 Compiler  
- CAN Bus Analyzer (optional for debugging)  

---

## 📊 System Workflow
1. **ECU1** → Sends Speed & Gear via CAN  
2. **ECU2** → Sends RPM & Indicators via CAN  
3. **ECU3** → Receives all data → Displays on LCD  

---

## 🚀 Getting Started
1. Clone this repo:  
   ```bash
   git clone https://github.com/FirmwareDev-e/pic18f4580-automotive-dashboard.git


# Gas Detection System Using Arduino and MQ2 Gas Sensor

## Description

This project demonstrates how to build a gas detection system using an Arduino and an MQ2 gas sensor. The system monitors the concentration of gas in the environment and triggers an LED to indicate the presence of gas. The sensor's analog values are read and converted into a PWM signal to control the LED, providing a visual indication of gas concentration. This project is useful for detecting dangerous gas levels in residential, commercial, or industrial settings.

## Components Needed

1. **Arduino UNO**
2. **MQ2 Gas Sensor**
3. **LED**
4. **Breadboard**
5. **Jumper Wires**
6. **Resistor** (e.g., 220 ohms for LED current limiting)

## Diagram

*I will update the block diagram with a logo or watermark ASAP. Please leave it for now.*

## Instructions

### Connecting the Components

1. **Input Sensor to Controller:**
   - Insert the MQ2 gas sensor into the breadboard.
   - Connect the VCC pin of the MQ2 sensor to the 5V pin on the Arduino.
   - Connect the GND pin of the MQ2 sensor to the GND pin on the Arduino.
   - Connect the analog output pin of the MQ2 sensor to the A0 pin on the Arduino.

2. **Microcontroller to Output Devices:**
   - Connect the anode (longer leg) of the LED to digital pin 6 on the Arduino through a current-limiting resistor (e.g., 220 ohms).
   - Connect the cathode (shorter leg) of the LED to the GND pin on the Arduino.

### Power the Arduino

- Connect the Arduino to your computer using a USB cable.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE on your computer.
   - Write or paste the provided program into the IDE.
   - Select the correct board and port in the Arduino IDE under the Tools menu.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - Open the Serial Monitor in the Arduino IDE by selecting Tools > Serial Monitor.
   - Set the baud rate to 9600 in the Serial Monitor.
   - Observe the analog output values from the sensor printed on the Serial Monitor.

## Project Operation

- **Initialization:**
  - The Arduino initializes serial communication at 9600 baud, sets the LED pin as an output, and ensures the LED is initially off.

- **Reading Sensor Values:**
  - The analog value from the MQ2 gas sensor is read and mapped to a PWM value ranging from 0 to 255.
  - If the gas concentration (output value) is above the threshold (65), the LED lights up with brightness proportional to the gas concentration.
  - If the gas concentration is below the threshold, the LED remains off.

- **Serial Monitoring:**
  - The analog output values from the sensor are printed to the Serial Monitor for observation.

## Applications

1. **Home Safety:** Monitor gas levels to detect leaks in residential settings.
2. **Industrial Safety:** Detect gas leaks in factories and industrial plants.
3. **Environmental Monitoring:** Measure air quality and pollution levels in various environments.

## Observe the Data

To read data from the MQ2 gas sensor, you need to upload the provided sketch to the Arduino. After connecting the Arduino to your computer and uploading the program, you should see the gas concentration values displayed on the Serial Monitor, confirming the sensor's functionality.

## Support

For any issues or further assistance, please contact us:

- 🌐 [Projects Learner](https://projectslearner.com)
- 📧 Email: projectslearner@gmail.com
- 📸 Instagram
- 📘 Facebook
- ▶️ YouTube
- 📘 LinkedIn

Made for you with ❣️ from ProjectsLearner.

---

Feel free to ask for any modifications or additional details you'd like to include!
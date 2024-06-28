/*
    Project name : Arduino Uno GAS Sensor
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-gas-sensor
*/

const int gasSensorPin = A0; // Analog pin connected to the gas sensor
const int threshold = 300;   // Threshold value for gas detection
int sensorValue = 0;         // Variable to store the sensor value

void setup() {
  // Initialize serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  // Read the analog input from the gas sensor
  sensorValue = analogRead(gasSensorPin);
  
  // Check if the sensor value exceeds the threshold
  if (sensorValue > threshold) {
    Serial.println("Gas detected!");
  } else {
    Serial.println("No gas detected.");
  }
  
  // Print the sensor value for reference
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  // Wait for a short period before taking another reading
  delay(1000);
}

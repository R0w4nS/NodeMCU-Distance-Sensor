# NodeMCU Distance Sensor

## Circuit Setup

- GND Pin on HC-SR04 -> GND Pin on NodeMCU

- VCC Pin on HC-SR04 -> VIN Pin on NodeMCU

- Trigger Pin on HC-SR04 -> D1 Pin on NodeMCU

- Echo Pin on HC-SR04 -> D2 Pin on NodeMCU

![Circuit Diagram](https://i.imgur.com/7GxOuFI.png)

## Blynk Setup

- Create a new project, with the device set to "ESP8266"

- Go to project settings to view your auth token

- Edit the [Distance_Sensor.ino](Distance_Sensor.ino) file to include your Wi-Fi credentials and auth token

- Add a `gauge` to your project, with the input pin set to `V1`

- Download the Blynk library on the Arduino IDE (version 0.6.1) 

- Set the board to NodeMCU 0.9/1.0 (ESP-12/ESP-12E)

- Flash to board and connect with 5V over MicroUSB

- The NodeMCU will connect to your network, and send the distance reading to the V1 pin on your Blynk project

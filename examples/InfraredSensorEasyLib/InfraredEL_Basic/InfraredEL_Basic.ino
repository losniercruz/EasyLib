/**
 * EasyLib
 * InfraredSensorEasyLib - Basic example
 * Made by: Losnier Cruz
 * Date: 18-05-2020
 * Update: 18-05-2020
 */
#include "InfraredSensorEasyLib.h"

InfraredSensorEasyLib obstacleSensor = InfraredSensorEasyLib(4); //Instances an InfraredSensorEasyLib object by parameterizing the digital receiver pin

void setup(){
  Serial.begin(9600); //Initiates serial communication to view sensor values
}

void loop(){
  basicPrint(obstacleSensor.IsObstacle()); //Invokes a method to print by passing it the value returned by the method of the obstacleSensor object
  delay(500);
}

void basicPrint(bool isObstacle){ //Method to print a message on the serial monitor to know if the module detects any obstacle
  if (isObstacle){ //If the method detects an obstacle it prints "Obstacle detected" but "Free of obstacles"
    Serial.println("Obstacle detected");
  } else {
    Serial.println("Free of obstacles");
  }
}

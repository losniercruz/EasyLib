/**
 * EasyLib
 * UltrasonicSensorEasyLib - Basic example
 * Made by: Losnier Cruz
 * Date: 17-05-2020
 * Update: 31-10-2021
 */
#include "UltrasonicSensorEasyLib.h"

UltrasonicSensorEasyLib distanceSensor = UltrasonicSensorEasyLib(7, 8); //Instances an UltrasonicSensorEasyLib object by parameterizing the trigger pin and the echo pin consecutively

void setup(){
  Serial.begin(9600); //Initiates serial communication to view sensor values
}

void loop(){
  Serial.print("Time in long variable: ");
  Serial.println(distanceSensor.PrecisionShot(5)); //Capture the distance measured and average of "5" shots by the sensor and then print the trip time
  Serial.print("Distance in centimeters: ");
  basicPrint(distanceSensor.GetCentimeters()); //Convert and get the value in centimeters and then print it
  Serial.print("Distance in inches: ");
  basicPrint(distanceSensor.GetInches()); //Convert and get the value in Inches and then print it
  delay(2500);
}

void basicPrint(int dis){ //Method to assess if there is any measurement failure
  if (dis < 0){ //If the distance is less than 0 it prints "Measure Error", if it is not it prints the value
    Serial.println("Measure Error");
  } else {
    Serial.println(dis);
  }
}
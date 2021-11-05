/**
 * EasyLib
 * UltrasonicSensorEasyLib
 * Made by: Losnier Cruz
 * Date: 17-05-2020
 * Update: 31-10-2021
 */
#ifndef ULTRASONICSENSOREASYLIB
#define ULTRASONICSENSOREASYLIB
#include <Arduino.h>
class UltrasonicSensorEasyLib
{
private:
  int trigger; //Variable of the pin to activate the wave to measure
  int echo; //Variable of the pin to receive the echo of the wave to be measured
  int t; //Variable to store the wave travel time
public:
  UltrasonicSensorEasyLib(int _trigger, int _echo); //Constructor of class with parameters to define trigger pin and echo pin
  int Shot(); //Method to capture an distance
  int PrecisionShot(int nOS); //Method to capture an distance average
  int GetCentimeters(); //Method to obtain the distance in centimeters
  int GetInches(); //Method to obtain the distance in inches
};
#endif

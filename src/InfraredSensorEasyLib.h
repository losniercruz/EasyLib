/**
 * EasyLib
 * InfraredSensorEasyLib
 * Made by: Losnier Cruz
 * Date: 18-05-2020
 * Update: 18-05-2020
 */
#ifndef INFRAREDSENSOREASYLIB
#define INFRAREDSENSOREASYLIB
#include <Arduino.h>
class InfraredSensorEasyLib
{
private:
  int receiver; //Variable of the pin to receive the digital value
public:
  InfraredSensorEasyLib(int _receiver); //Constructor of class with parameters to define trigger pin and echo pin
  bool IsObstacle(); //Method to know if the sensor detect an obstacle
};
#endif

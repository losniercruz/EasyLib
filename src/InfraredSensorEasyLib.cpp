/**
 * EasyLib
 * InfraredSensorEasyLib
 * Made by: Losnier Cruz
 * Date: 18-05-2020
 * Update: 18-05-2020
 */
#include "InfraredSensorEasyLib.h" //Reference the library header file (.h)
#include <Arduino.h> //Include the arcuino library to recognize processing/arduino reserved words (pinMode, digitalWrite, etc)
InfraredSensorEasyLib::InfraredSensorEasyLib(int _receiver)
{
  receiver = _receiver;
  pinMode(receiver, INPUT); //Define the pin to detect an obstacle
}
bool InfraredSensorEasyLib::IsObstacle()
{
  return digitalRead(receiver) == 1 ? false : true; //Returns true when it detects an obstacle and when it does not return false
}
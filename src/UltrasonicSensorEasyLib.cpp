/**
 * EasyLib
 * UltrasonicSensorEasyLib
 * Made by: Losnier Cruz
 * Date: 17-05-2020
 * Update: 31-10-2021
 */
#include "UltrasonicSensorEasyLib.h" //Reference the library header file (.h)
#include <Arduino.h> //Include the arcuino library to recognize processing/arduino reserved words (pinMode, digitalWrite, etc)
UltrasonicSensorEasyLib::UltrasonicSensorEasyLib(int _trigger, int _echo)
{
  trigger = _trigger;
  echo = _echo;
  int t; //Variable to store the wave travel time
  pinMode(trigger, OUTPUT); //Define the pin to trigger the wave to measure
  pinMode(echo, INPUT); //Define the pin to receive the echo of the wave to measure
}
int UltrasonicSensorEasyLib::Shot()
{
  digitalWrite(trigger, LOW);
  delayMicroseconds(4);
  digitalWrite(trigger, HIGH); //Activate the trigger to send a wave
  delayMicroseconds(10); //Wait 10ms
  digitalWrite(trigger, LOW); //Turn off the pin to stop sending the wave
  t = (int)pulseIn(echo, HIGH)/2; //Turn on the receive pin and wait until it picks up the wave echo (divide by two to get only half the trip) and then turns off the pin
  delay(100); 
  return t; //Return the value of the calculation to be used outside the library
}
int UltrasonicSensorEasyLib::PrecisionShot(int nOS)
{
  for (int i = 0; i < nOS; i++) //Create a cycle to perform various measurements to average
  {
    digitalWrite(trigger, LOW);
    delayMicroseconds(4);
    digitalWrite(trigger, HIGH); //Activate the trigger to send a wave
    delayMicroseconds(10); //Wait 10ms
    digitalWrite(trigger, LOW); //Turn off the pin to stop sending the wave
    t += (int)pulseIn(echo, HIGH)/2; //Turn on the receive pin and wait until it picks up the wave echo (divide by two to get only half the trip) and then turns off the pin
    delay(100);
  }
  t = t/nOS; //End cycle and average measurements for more accuracy
  delay(100);
  return t; //Return the value of the calculation to be used outside the library
}
int UltrasonicSensorEasyLib::GetCentimeters()
{
  return (t > 0) ? (t/29) : -1; //Validate if the measurement is negative (surface not regular), if negative it returns -1, if not, returns the centimeters
}
int UltrasonicSensorEasyLib::GetInches()
{
  return (t > 0) ? (t/74) : -1; //Validate if the measurement is negative (surface not regular), if negative, returns -1 if not, returns the inches
}
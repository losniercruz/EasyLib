#EasyLib
###Made by: Losnier Cruz
###Date: 31-10-2021
###Update: 31-10-2021
##InfraredSensorEasyLib
* The main function is to reduce the code to be able to use IR (Infrared Sensor) obstacle sensor modules very easily in basic electronic projects in arduino development environments (IDE).
* This is a library that is made with / c ++ processing, therefore it is compatible with all the boards that can be managed with the Arduino IDE, both for ATmel AVR 8-bit microcontrollers: ATMega328: Arduino Uno, Arduino Nano, etc. Like 32-bit Espressif microcontrollers in modules: ESP12, ESP32, etc. Also STM32, among others.
* For library use, you only need to use one input pin (digital or analog input as digital, be careful with the maximum voltage of the microcontroller), the library evaluates the digital input and returns a boolean, true if the module returns low In other words, there is an obstacle or it is false in the opposite case.
* Remember that IR sensors or similar modules usually change their voltage or logic output configuration depending on the manufacturer and version, it uses a voltage of 5v and on other occasions it is 3.3v, so in some cases it is convenient to use a power source. external power supply for the sensor or in some circumstances resistors to lower the voltage from 5 to 3.3 or similar.
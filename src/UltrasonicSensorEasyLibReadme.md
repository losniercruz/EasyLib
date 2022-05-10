#EasyLib
###Made by: Losnier Cruz
###Date: 17-05-2020
###Update: 10-05-2022
##UltrasonicSensorEasyLib
* The main function is to reduce the code to be able to use HC-RS04 (Ultrasonic Sensor) modules or similar modules very easily in basic electronic projects in arduino development environments (IDE).
* This is a library is made with processing / c ++ therefore it is compatible with all the boards that can be managed with arduino IDE, both for ATmel AVR 8-bit microcontrollers: ATMega328: Arduino Uno, Arduino Nano, etc. As 32-bit Espressif microcontrollers in modules: ESP12, ESP32, etc. Also STM32, among others.
* For the use of the library you only need to use two digital pins for each sensor (trigger and echo), this due to using a class to manage each sensor individually made in a versatile and simple way in which you can extract the distance in centimeters or inches, or also extract the distance in microseconds.
* It also has a mini system to validate measurement errors, in which if the sensor wave bounces off uneven relief surfaces or the waves the return value will be "-1" in integers.
* The library is made to activate the sensor with a pulsation and a wait of 10 microseconds and later captures the value of the distance in time in microseconds (the total is obtained: the round trip of the wave, but it is divided by 2) .
* Remember that the HC-RS04 or similar modules usually change their voltage settings depending on the manufacturer and the version, it uses a voltage of 5v and on other occasions it is 3.3v in VCC, while in some ultrasonic modules the voltage of the digital input and output signal (trigger and echo) work at 3.3v or 5v or any of both voltages, so in some cases you should use some external power supply for the sensor or in some circumstances resistors to lower the voltage of 5 to 3.3 or similar.

## *EasyLib*
[Link to EasyLib .md](https://github.com/losniercruz/EasyLib/blob/main/README.md)

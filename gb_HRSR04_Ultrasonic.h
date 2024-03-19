/*********************************************************************
 * gb_HRSR04_Ultrasonic.h
 *
 * Copyright (C)    20124   [GrowBot Open Source],
 * GitHub Link :XXXXX
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Description:Implement DFRobot RTC module into the growbot system
 *
 * Product Links：https://www.dfrobot.com/wiki/index.php/
 *
 * Sensor driver pin：
 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#ifndef gb_HRSR04_Ultrasonic_h
#define gb_HRSR04_Ultrasonic_h

#include <Arduino.h>

class gb_HRSR04_Ultrasonic
{
private:
    long duration;
    int distance;
    byte _trigPin;

public:
    gb_HRSR04_Ultrasonic(int echoPin, int trigPin){};

    // setup rtc module
    void setupUltrasonic();

    // get timestamp
    void getDistance();
};

#endif
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
 * Description:Implement gb_HRSR04_Ultrasonic module into the growbot system
 *
 * Product Links：
 *
 * Sensor driver pin：I2C
 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#include "gb_HRSR04_Ultrasonic.h"
#include <Arduino.h>

gb_HRSR04_Ultrasonic::gb_HRSR04_Ultrasonic(int trigPin, int echoPin)
{
    _trigPin = trigPin;
    _echoPin = echoPin;
};

//********************************************************************************************
// Function Name: setupUltrasonic()
// Function Declaration:
//********************************************************************************************
void gb_HRSR04_Ultrasonic::setupUltrasonic()
{
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
}

//********************************************************************************************
// Function Name: getDistance()
// Function Declaration:
//********************************************************************************************
String gb_HRSR04_Ultrasonic::getDistance()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(1000);
}
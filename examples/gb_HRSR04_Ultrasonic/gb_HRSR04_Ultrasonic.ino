#include <gb_HRSR04_Ultrasonic.h>

gb_HRSR04_Ultrasonic ultrasonicSenor(3, 4);

void setup()
{
    ultrasonicSenor.setupSensor();
}

void loop()
{
    ultrasonicSenor.getDistance();
}

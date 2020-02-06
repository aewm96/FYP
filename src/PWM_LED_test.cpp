#include <Arduino.h>

int LEDpin=9;

void setup() {
    Serial.begin(9600);
    pinMode(LEDpin, OUTPUT);
}

void loop(){

    for( int i = 0; i < 256; i++)
    {
        analogWrite(LEDpin,i); //Count from 0 to 255
        delay(100);
    }

    for(int i = 256; i > 0; i--)
    {
        analogWrite(LEDpin, i); //Count from 255 to 0
        delay(100);
    }
}
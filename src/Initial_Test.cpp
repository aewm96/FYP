#include <Arduino.h>

int PinIn1=A0; //LED Light
int PinIn2=A1; //Ambient Light
int val1=0;
int val2=0;

void setup() {  
  Serial.begin(9600);
  pinMode(PinIn1, INPUT); //The output signal goes to pin 5
  pinMode(PinIn2, INPUT);
}

void loop(){
  val1 = analogRead(PinIn1);
  val2 = analogRead(PinIn2);

if (val1>=959 && val1 <=970)
{
  Serial.println("0");
}
else if (val1<958)
{
  Serial.println("1");
}
else
{
  Serial.println("Error");
}
  //Serial.print(val1);
  //Serial.println();
  //Serial.print(val2);
  // Serial.println();
  delay(250);
  
 }

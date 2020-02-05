#include <Arduino.h>

int PinIn1=A0; //LED Light
//int PinIn2=A2; //Ambient Light
int val1=0;
//int val2=0;
//int LEDVAL=0;

void setup() {
   pinMode(PinIn1, INPUT); //The output signal goes to pin 5
   //pinMode(PinIn2, INPUT);
   Serial.begin(9600);
}

void loop(){
  //test to see if git is working
  val1 = analogRead(PinIn1);
  //val2 = analogRead(PinIn2);
  //LEDVAL=val1-val2;
  /*if (val==945|| val==946){
    Serial.print(0);
    Serial.println();
    delay(100);
    }
    else if (val<=945){
      Serial.print(1);
      Serial.println();
      delay(100);
      }*/
  
 
  //Serial.print(val1);
  //Serial.print(" LED Light");
  //Serial.println();
  //Serial.print(val2);
  //Serial.print(" Ambient Light");
 // Serial.println();
  Serial.print(val1);
  //Serial.print(" LED Light Only");
  //Serial.print("--------------------");
  Serial.println();
  Serial.print("WELP");
  delay(250);
  
 }

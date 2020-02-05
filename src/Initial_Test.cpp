#include <Arduino.h>

int PinIn1=A0; //LED Light
int PinIn2=A1; //Ambient Light
int val1=0;
int val2=0;
int AL=0;
bool flag = false;

void setup() {  
  Serial.begin(9600);
  pinMode(PinIn1, INPUT); //Photodiode 1
  pinMode(PinIn2, INPUT); //Photodiode 2
}

void ambientlight (){
if (flag==false){
  delay(2000);
  val1=analogRead(PinIn1);
  AL=val1;
  flag=true;
}
}

void loop(){
  ambientlight();

  val1 = analogRead(PinIn1);
  val2 = analogRead(PinIn2);

if (val1>=AL-2 && val1 <=AL+8)
{
  Serial.println("0");
}
else if (val1<AL-2)
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

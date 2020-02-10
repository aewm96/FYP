#include <Arduino.h>

double PinIn1=A0; //LED Light
//double PinIn2=A1; //Ambient Light
double val1=0;
//double val2=0;
double AL=0;
bool flag = false;

void setup() {  
  Serial.begin(9600);
  pinMode(PinIn1, INPUT); //Photodiode 1
  //pinMode(PinIn2, INPUT); //Photodiode 2
}

void ambientlight (){
if (flag==false){
  
  delay(2000);
  val1=analogRead(PinIn1);
  AL=val1;
  Serial.println("the AL values is: ");
  Serial.println(AL);
  flag=true;
}
}

void loop(){
  ambientlight();

  val1 = analogRead(PinIn1);
  //val2 = analogRead(PinIn2);

if (val1>=AL-2 && val1 <=AL+8)
{
  //Serial.println("0");
  Serial.println(val1);
  //Serial.println(" ");
}
else if (val1<AL-2)
{
  //Serial.println("1");
  Serial.println(val1);
  //Serial.println(" ");
}
else
{
  //Serial.println("Error");
  Serial.println(val1);
  //Serial.println(" ");
}
  /*Serial.print(val1);
  Serial.println();
  Serial.print(val2);
  Serial.println();*/
  delay(250);
  
 }

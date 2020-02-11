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
  delay(200);
  for(int i=0; i<100; i++){
     val1+=analogRead(PinIn1);
  }
  val1=val1/100;
  AL=val1;
  Serial.println("the AL values is: ");
  Serial.println(AL);
  flag=true;
}
}

void READ_TRIGG(){
    if (val1>=AL-2 && val1 <=AL+8){
      if (val1>=AL-2 && val1 <=AL+8){
        if (val1>=AL-2 && val1 <=AL+8){
          if (val1>=AL-2 && val1 <=AL+8){
            if (val1>=AL-2 && val1 <=AL+8){
              Serial.println("1");
            } 
            else if (val1<AL-2){
              Serial.println("0");
            }
            else {
              Serial.println("Error");
            }
          }
        }
      }
  }

}

void loop(){
  READ_TRIGG();
  ambientlight();
  //val1 = analogRead(PinIn1);
  //Serial.println(val1);
 }

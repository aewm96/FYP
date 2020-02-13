#include <Arduino.h>

double PinIn1=A0; //LED Light
//double PinIn2=A1; //Ambient Light
double val1=0;
//double val2=0;
double AL=0;
bool flag = false;
double A0_OUTPUT=0;


void setup() {  
  Serial.begin(9600);
  pinMode(PinIn1, INPUT); //Photodiode 1
  //pinMode(PinIn2, INPUT); //Photodiode 2
}

void ambientlight (){
    delay(200); //A delay provides time for the system to initialize properly 

    for(int i=0; i<100; i++){
       val1+=analogRead(PinIn1);  //For loop captures the first 100 values and add's it all together
    }

    val1=val1/100; //Creating an average of the 100 values

    AL=val1;  //Saving the average as the ambient light level (AL) 

    Serial.println("---------------------");

    Serial.println("the AL values is: ");
    Serial.println(AL);
    Serial.println("---------------------");
    
}


void loop(){
  /*
  if (val1>=AL-2 && val1 <=AL+8){
      if (val1<AL-2){
        if (val1>=AL-2 && val1 <=AL+8){
          if (val1<AL-2){
            if (val1>=AL-2 && val1 <=AL+8){
              if (val1<AL-2){
                if (val1>=AL-2 && val1 <=AL+8){
                  if (val1<AL-2){
                    for(int i=0; i<4; i++){
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
          }
        }
      }
    }*/
    A0_OUTPUT=analogRead(PinIn1);

    if (flag==false){ 
    ambientlight();
    flag=true;
    }

    Serial.println(A0_OUTPUT);
    delay(100); 
  
  //val1 = analogRead(PinIn1);
  //Serial.println(val1);
 }

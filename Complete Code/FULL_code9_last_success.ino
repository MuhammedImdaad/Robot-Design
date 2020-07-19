#include <Servo.h>
#include "Variables.h"
int count = 0;
void setup() {

  
 initializing();
 
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  
  
  
}

void loop() {
  
 /*Coin_Collecting();
 coin_unloading();
 */



// colorFilter();
//Serial.println(colorFilter());

 Serial.println("LFUntillCell");
 LFUntillCell();
 

 Serial.println("Coin_Collecting");
 color = Coin_Collecting();
 

 Serial.println("junction");
 Serial.println(color);
 junction(color);
 Serial.println("LFUntillCell2");
 

 
LFUntillCell2();

 

 Serial.println("coin_unloading");
 
 coin_unloading();
 coin_unloading();


 Serial.println("LFUntillWF");
 led_panel(1);
 LFUntillWF();
 led_panel(2);
 WallFallow();
  led_panel(3);
  /*
 LFUntillWater();
 waterTransfer(1000);
 */
/* 
 LFUntillCell();
 WallFallow();
 */
 
/*
  //White squre
   sensor2=ReadIR();
   while(sensor2[0]==1 | sensor2[1]==1 | sensor2[2]==1 | sensor2[3]==1 | sensor2[4]==1 | sensor2[5]==1 | sensor2[6]==1 | sensor2[7]==1 | sensor2[8]==1){ //with middle 2
    Stop();
    sensor2=ReadIR();
   }
   
   while(sensor2[0]==0 & sensor2[1]==0 & sensor2[2]==0 & sensor2[3]==0 & sensor2[4]==0 & sensor2[5]==0 & sensor2[6]==0 & sensor2[7]==0  & sensor2[8]==0){ //with middle 2
    sensor2=ReadIR();
    Foward();
   }
  //Line fallow untill a cell
  LFUntillCell();

  //cell - coin collect and colour sensing
  Coin_Collecting();
  
  
  //junction code
  
  
  //line fallow until a cell
  LFUntillCell();

  //drop coin
  coin_unloading();
  
  //line fallow - untill walls
  LFUntillWF();
  //wall fallow until line
  WallFallow();
  //L - junction
  
  //L - junction
  
  //Water code
  waterTransfer(10000);
  //turn around
  
  //line fallow(turn right)
  
  //Stop in white cell
  
  */
}

  
  

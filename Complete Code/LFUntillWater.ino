void LFUntillWater(){
  int JUNCTION = 1;
  while(1){
      sensor2=ReadIR();
    
      Serial.print (sensor2[0]);
      Serial.print (sensor2[1]);
      Serial.print (sensor2[2]);
      Serial.print (sensor2[3]);
      Serial.print (sensor2[4]);
      Serial.print (sensor2[5]);
      Serial.print (sensor2[6]);
      Serial.print (sensor2[7]);
      Serial.print (sensor2[8]);
      Serial.print (sensor2[9]);
      Serial.print (sensor2[10]);
      Serial.println("LINE fallowing untill Water");
      //tilt_sensor=!digitalRead(5);

      max_value_a=130;
      max_value_b=130;
      
      if (sensor2[0]==0){
        last_missed=0;// 0 mean left 
      }
      else if(sensor2[7]==0){
        last_missed=1;// 1 mean right
      }
     if(sensor2[8] == 0 & JUNCTION == 1){
        Serial.println("JUNCTION");
        JUNCTION =2;
        Stop();
        forward(200);
        left(600);
     }
     if(sensor2[9] == 0 & JUNCTION == 2){
        Serial.println("JUNCTION");
        JUNCTION =2;
        Stop();
        forward(200);
        right(600);
        return;
     }
      /*if(sensor2[0]==0 & sensor2[1]==0 & sensor2[2]==0 & sensor2[3]==0 & sensor2[4]==0 & sensor2[5]==0 & sensor2[6]==0 & sensor2[7]==0){ //with middle 2
        Stop();
        return;
      }
      */
      if (sensor2[0]==1 & sensor2[1]==1 & sensor2[2]==1 & sensor2[3]==1 & sensor2[4]==1 & sensor2[5]==1 & sensor2[6]==1 & sensor2[7]==1 & last_missed==1){
        turnLeft(); 
      }
      else if (sensor2[0]==1 & sensor2[1]==1 & sensor2[2]==1 & sensor2[3]==1 & sensor2[4]==1 & sensor2[5]==1 & sensor2[6]==1 & sensor2[7]==1 & last_missed==0){
        
        turnRight(); 
        }

     else {
      lineFollow();
    }
    
  }
}

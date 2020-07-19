void LFUntillCell2(){
  while(1){
    if(LINEFALLOW){
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
      Serial.println("LINE fallowing untill Cell 2");
      //tilt_sensor=!digitalRead(5);

      
      max_value_a=150;
      max_value_b=150;
      
      if (sensor2[0]==0){
        last_missed=0;// 0 mean left 
      }
      else if(sensor2[7]==0){
        last_missed=1;// 1 mean right
      }
    
      if(sensor2[10]==0 & sensor2[11]==0){ //with middle 2
        Stop();
        BackUntillDrop();
        return;
      }
      
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
}

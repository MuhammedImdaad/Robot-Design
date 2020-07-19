void LFUntillWF(){
  int State = 0;
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
      tilt_sensor1=TiltSensor1();
      tilt_sensor2=TiltSensor2();
      //tilt_sensor = 0;
      if (tilt_sensor1==1 & tilt_sensor2==1){
        max_value_a=150;
        max_value_b=150;
        State = 1;
      }
      else if (tilt_sensor1==0 & tilt_sensor2==1){
        max_value_a=210;
        max_value_b=210;
      }else if (tilt_sensor1==1 & tilt_sensor2==0){
        max_value_a=60;
        max_value_b=60;
      }
      
      if (sensor2[0]==0){
        last_missed=0;// 0 mean left 
      }
      else if(sensor2[7]==0){
        last_missed=1;// 1 mean right
      }
     Serial.println("LINE fallowing untill WF");
      
      
      if (sensor2[0]==1 & sensor2[1]==1 & sensor2[2]==1 & sensor2[3]==1 & sensor2[4]==1 & sensor2[5]==1 & sensor2[6]==1 & sensor2[7]==1 & last_missed==0){
        Stop();
        left_distance,right_distance,front_distance = distance();
        left_distance,right_distance,front_distance = distance();
        left_distance,right_distance,front_distance += distance();
        left_distance,right_distance,front_distance += distance();
        left_distance,right_distance,front_distance += distance();
        left_distance = left_distance/4;
        right_distance = right_distance/4;
        front_distance = front_distance/4;
         if(front_distance<300 or right_distance<300 or left_distance<300){
          Serial.println("Wall found");
          return;
         }
         Serial.println("No line turning right");
        right(300); 
      }
      else if (sensor2[0]==1 & sensor2[1]==1 & sensor2[2]==1 & sensor2[3]==1 & sensor2[4]==1 & sensor2[5]==1 & sensor2[6]==1 & sensor2[7]==1 & last_missed==1){
        Stop();
        left_distance,right_distance,front_distance = distance();
        left_distance,right_distance,front_distance = distance();
        left_distance,right_distance,front_distance += distance();
        left_distance,right_distance,front_distance += distance();
        left_distance,right_distance,front_distance += distance();
        left_distance = left_distance/4;
        right_distance = right_distance/4;
        front_distance = front_distance/4;

        
        if(front_distance<300 or right_distance<300 or left_distance<300){
          Serial.println("Wall found");
          return;
         }
        Serial.println("No line turning left");
        left(300);
        }

     
    else {
      
      lineFollow();
    }
    }
  }
}

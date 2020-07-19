void WallFallow(){
  while(1){
   pwm_left = 150;
   pwm_right = 150;
   Serial.println();
   left_distance,right_distance,front_distance = distance();
   Serial.print("L - ");
   Serial.print(left_distance);
   Serial.print(" R - ");
   Serial.print(right_distance);
   Serial.print(" F - ");
   Serial.print(front_distance);
   Serial.print(" ");
   if(front_distance<Flimit and right_distance<RlimitU and left_distance<LlimitU){
          pwm_left = 150;
          pwm_right = 150;
          Stop();
          if(right_distance<left_distance){
            Left();
          }else{
            Right();
          }
          delay(delay180);
          Stop();
          Serial.print("Turn Around");
    }else if(front_distance<Flimit and left_distance<LlimitU){
          pwm_left = 150;
          pwm_right = 150;
          Stop();
          Right();
          delay(delay90);
          Stop();
          Serial.print("Turn Right");
    }else if(front_distance<Flimit and right_distance<RlimitU){
          pwm_left = 150;
          pwm_right = 150;
          Stop();
          Left();
          delay(delay90);
          Stop();
          Serial.print("Turn Left");
    }else if(left_distance<LlimitU and right_distance<RlimitU){
          Foward();
          
          er = (left_distance-right_distance)/10;
          drvt = older - er;
   
          pwm_left = 150-er + drvt;
          pwm_right = 150 + er - drvt;
  
          older = er;
          Llimit = left_distance;
          Rlimit = right_distance;
          Serial.print("Go");
    }else if(left_distance<LlimitU){
          Foward();
          er = (Llimit - left_distance)/8;
          drvt = older - er;
          
          pwm_left = 150+er - drvt;
          pwm_right = 150-er + drvt; 
  
          older = er;
          Serial.print("Fallow left wall");
    }else if(right_distance<RlimitU){
      
          Foward();    
          er = (Rlimit - right_distance)/8;
           drvt = older - er;
           
          pwm_left = 150-er+drvt;
          pwm_right = 150+er-drvt;
          
          older = er;
          Serial.print("Fallow right wall");
    }else if(front_distance<Flimit){
          pwm_left = 150;
          pwm_right = 150;
          Stop();
          Right();
          delay(delay90);
          Stop();
          Serial.print(" frant wall");
    }else{
          pwm_left = 150;
          pwm_right = 150;
         
          Foward();
          Serial.print("No walls");
          sensor2=ReadIR();
          if (sensor2[0]==0 | sensor2[1]==0 | sensor2[2]==0 | sensor2[3]==0 | sensor2[4]==0| sensor2[5]==0 | sensor2[6]==0 | sensor2[7]==0){{
            return;
          }
          
    }
      
  }
  /*Serial.print(" RM- ");
  Serial.print(pwm_right);
  Serial.print(" LM- ");
  Serial.print(pwm_left);
*/
      
  analogWrite(moter_right,pwm_right);
  analogWrite(moter_left,pwm_left);
  }
}

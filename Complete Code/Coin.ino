void coin_unloading() {
  for (int pos=servo3_initial;pos<=140;pos++){
    servo3.write(pos);
    delay(10);
    }
  delay(500);
  for (int pos=140;pos>=servo3_initial;pos--){
    servo3.write(pos);
    delay(10);
    } 
}

int color_detection() {
 
  
    //Red
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  pulseIn(out,HIGH);
  R = pulseIn(out,LOW);
  
  

  
  //Green
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  
  pulseIn(out,HIGH);
  G = pulseIn(out,LOW);
  
 
  

  //Blue
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);

  pulseIn(out,HIGH);
  B = pulseIn(out,LOW);

 /*
 Serial.print("R: ");Serial.print(R);
 Serial.print("G: ");Serial.print(G);
 Serial.print("B: ");Serial.print(B);
 Serial.println();
 */
 color = 0;
    if(abs(R-103)<50 and abs(G-189)<50 and abs(B-154)<50){
    //R
    color = 0;
  }else if(abs(R-274)<50 and abs(G-170)<50 and abs(B-165)<50){
    //G
    color = 1;
  }else if(abs(R-250)<50 and abs(G-160)<50 and abs(B-100)<50){
    //B
    color = 2;
  }
  /*
  Serial.println( R);
  Serial.println( G);
  Serial.println( B);
  */
  
  
  return(color);
  

}


int colorFilter(){
  // digitalWrite(S0,LOW);
  //digitalWrite(S1,HIGH);
  delay(100);
  float value=0;
  for(int i=0;i<10;i++){
    value = value+color_detection();
  }
  value = value/100;
  if(abs(value-0)<0.5){
    color = 0;
  }else if(abs(value-1)<0.5){
    color = 1;
  }else if(abs(value-2)<0.5){
    color = 2;
  }
  if(color==0){
     //led_panel(6);
     digitalWrite(30,HIGH);
     digitalWrite(32,LOW);
     digitalWrite(34,LOW);
  }else if(color==1){
    //led_panel(7);
     digitalWrite(30,LOW);
     digitalWrite(32,HIGH);
     digitalWrite(34,LOW);
  }else if(color==2){
     //led_panel(8);
     digitalWrite(30,LOW);
     digitalWrite(32,LOW);
     digitalWrite(34,HIGH);
  }else{
    digitalWrite(30,HIGH);
     digitalWrite(32,HIGH);
     digitalWrite(34,HIGH);
  }
  //Serial.println(color);
  return color;
}

 void forward_coin(int delay1,int speed1){
  analogWrite(pwma,speed1);
  analogWrite(pwmb,speed1);
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
 
  delay(delay1);

  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
  
  }

  
 void backward_coin(int delay1,int speed1){
  analogWrite(pwma,speed1);
  analogWrite(pwmb,speed1);
  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
 
  delay(delay1);

  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
  
  }
  
int Coin_Collecting() {
  Stop();
  for(int pos=servo1_initial;pos<=140;pos++){
    //Serial.println(pos);
    servo1.write(pos);
    delay(10);
    }
  forward_coin(1100,150); 
  
  for(int pos=140;pos>=servo1_initial;pos--){
    servo1.write(pos);
    //Serial.println(pos);
    delay(10);
    }


  for(int pos=servo2_initial;pos<=180;pos++){
    servo2.write(pos);
    delay(5);
    }


  for(int pos=180;pos>=servo2_initial;pos--){
    servo2.write(pos);
    delay(5);
    }  

   color = colorFilter();

  backward_coin(800,150);
  

    Serial.println(color);
    
  
  return color;
  }

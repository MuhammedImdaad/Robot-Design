

void Foward(){
  analogWrite(pwma,150);
  analogWrite(pwmb,150);
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

void Right(){
  analogWrite(pwma,150);
  analogWrite(pwmb,150);

  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  
 
}

void Left(){
  analogWrite(pwma,150);
  analogWrite(pwmb,150);
  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  
}

void Stop(){
  analogWrite(pwma,150);
  analogWrite(pwmb,150); 
digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);

  
  

  delay(300);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);

  //delay(300);
}

void lineFollow(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  
  int Wir0=sensor2[0]*(90);
  int Wir1=sensor2[1]*(30);
  int Wir2=sensor2[2]*(10);
  int Wir3=sensor2[3]*(0);
  int Wir4=sensor2[4]*(0);
  int Wir5=sensor2[5]*(-10);
  int Wir6=sensor2[6]*(-30);
  int Wir7=sensor2[7]*(-90);
  int A= (Wir0+Wir1+Wir2+Wir5+Wir6+Wir7);

  A=map(A,0,140,0,(240-max_value_a));

  int a=max_value_a - A;
  int b=max_value_b + A;

  analogWrite(pwma,a);
  analogWrite(pwmb,b);
  Serial.print("    b:"); //left 
  Serial.print(b);
//  Serial.print(tilt_sensor);
  Serial.print("    a:"); //right
  Serial.println(a);
//  Serial.print(tilt_sensor);
//  Serial.println();
  
  }
  


  void turnLeft(){  
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

  
  analogWrite(pwma,160);
  analogWrite(pwmb,160);
   Serial.println("left");
   //turn sharp left
  }

      void turnRight(){  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);

  
  analogWrite(pwma,160);
  analogWrite(pwmb,160);
   Serial.println("right");//turn sharp right
  }

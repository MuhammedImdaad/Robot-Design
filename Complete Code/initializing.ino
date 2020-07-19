 void initializing(){
  pinMode(A7,INPUT);
  pinMode(A6,INPUT);
  pinMode(A5,INPUT);
  pinMode(A4,INPUT);
  pinMode(A3,INPUT);
  pinMode(A2,INPUT);
  pinMode(A1,INPUT);
  pinMode(A0,INPUT);
  pinMode(14,INPUT);
  pinMode(15,INPUT);
  pinMode(16,INPUT);
  pinMode(7,INPUT);

  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

  pinMode(27,INPUT);
  pinMode(5,INPUT);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

  pinMode(trig_right,OUTPUT);
  pinMode(echo_right,INPUT);

  pinMode(trig_left,OUTPUT);
  pinMode(echo_left,INPUT);

  pinMode(trig_front,OUTPUT);
  pinMode(echo_front,INPUT);

  servo1.attach(Spin1);
  servo2.attach(Spin2);
  servo3.attach(Spin3);

  servo1.write(servo1_initial);
  servo2.write(servo2_initial);
  servo3.write(servo3_initial);
  
  
  pinMode (S0,OUTPUT);
  pinMode (S1,OUTPUT);
  pinMode (S2,OUTPUT);
  pinMode (S3,OUTPUT);
  
  pinMode (out,INPUT);
  
  pinMode (Red_LED,OUTPUT);
  pinMode (Green_LED, OUTPUT);
  pinMode (Blue_LED, OUTPUT);
  count = 1;
  
  

  //Water
  
  pinMode(relay,OUTPUT);
  digitalWrite(relay,HIGH);
  water_servo.attach(water_servo_pin);
  water_servo.write(140);

  pinMode(28,OUTPUT);
pinMode(30,OUTPUT);
pinMode(32,OUTPUT);
pinMode(34,OUTPUT);
pinMode(36,OUTPUT);
pinMode(38,OUTPUT);
pinMode(40,OUTPUT);
pinMode(42,OUTPUT);
  
  Serial.begin(9600);


 }

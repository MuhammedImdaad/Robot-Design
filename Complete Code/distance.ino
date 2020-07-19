long distance(){
// left distance
  
  digitalWrite(trig_left,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_left,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig_left,LOW);
  left_distance = pulseIn(echo_left,HIGH);


//right distance
  digitalWrite(trig_right,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_right,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig_right,LOW);
  right_distance = pulseIn(echo_right,HIGH);
  
//front distance
  digitalWrite(trig_front,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_front,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig_front,LOW);
  front_distance = pulseIn(echo_front,HIGH);

  return left_distance,right_distance,front_distance;

}

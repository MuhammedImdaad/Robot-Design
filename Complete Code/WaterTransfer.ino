void waterTransfer(int DELAY){
  for (int i=140;i>80;--i){
  water_servo.write(i); 
  delay(8);
}
digitalWrite(relay,LOW);
 delay(DELAY);
 digitalWrite(relay,HIGH); 
for (int  i=80;i<140;++i){
  water_servo.write(i); 
  delay(8);
}
}

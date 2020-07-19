
void junction(int color){
   
  while(1){
    Serial.println(color);
    Serial.println("untill junction");
   sensor2=ReadIR();
   if(sensor2[0]==0 & sensor2[1]==0 & sensor2[2]==0 & sensor2[3]==0 & sensor2[4]==0 & sensor2[5]==0 & sensor2[6]==0 & sensor2[7]==0){ //with middle 2
       Serial.println(color);
        Stop();
        Serial.println("select path");
        if(color == 0){
          Serial.println("left path");
          forward(300);
          left(300);
          forward(800);
        }else if(color == 1){
          Serial.println("foward path");
          forward(900);
        }else if(color == 2){
          Serial.println("right path");
          forward(300);
          right(300);
          forward(800);
        }
        return;
  }else{
    lineFollow();
  }
}
}

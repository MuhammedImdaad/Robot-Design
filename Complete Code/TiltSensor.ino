int TiltSensor1(){
  tilt_sensor1=((digitalRead(5) -0.5) * 2);
  
  if(abs(tilt_value1)<=5){
     tilt_value1 = tilt_value1 + tilt_sensor1;
  }else if(abs(tilt_value1)>5 and (tilt_value1*tilt_sensor1<0)){
    tilt_value1 = tilt_value1 + tilt_sensor1; 
  }
  
  if(tilt_value1  > 0){
    return 1;
  }else{
    return 0;
  }
  
}

int TiltSensor2(){
  tilt_sensor2=(digitalRead(27) -0.5) * 2;
  if(abs(tilt_value2)<=5){
     tilt_value2 = tilt_value2 + tilt_sensor2;
  }else if(abs(tilt_value2)>5 and (tilt_value2*tilt_sensor2<0)){
    tilt_value2 = tilt_value2 + tilt_sensor2; 
  }
  if(tilt_value2  > 0){
    return 1;
  }else{
    return 0;
  }
  
}


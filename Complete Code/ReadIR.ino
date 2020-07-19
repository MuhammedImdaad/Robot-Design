int *ReadIR() {
  //delay(100);
  //reading array of ir
  static int sensor[11];
  ir0 = digitalRead(A7);
  ir1 = digitalRead(A6);
  ir2 = digitalRead(A5);
  ir3 = digitalRead(A4);
  ir4 = digitalRead(A3);
  ir5 = digitalRead(A2);
  ir6 = digitalRead(A1);
  ir7 = digitalRead(A0);
  ir8 = digitalRead(14);
  ir9 = digitalRead(15);
  ir10 = digitalRead(16);
  ir11 = digitalRead(7);

  int zensor[12] = {ir0, ir1, ir2, ir3, ir4, ir5, ir6, ir7, ir8, ir9, ir10, ir11};
  for(int i =0;i<12;i++){
    sensor[i]=zensor[i];
//  count << sensor{i} << end1;
}

  return sensor;
  
  
}

void led_panel(int number) {
 if (number==1) {
 digitalWrite(28,LOW);
 
 digitalWrite(36,LOW);
 digitalWrite(38,LOW);
 digitalWrite(40,LOW);
 digitalWrite(42,HIGH);
 }
 else if (number==2) {
 digitalWrite(28,LOW);
 
 digitalWrite(36,HIGH);
 digitalWrite(38,LOW);
 digitalWrite(40,LOW);
 digitalWrite(42,LOW);
 }
 else if (number==3) {
 digitalWrite(28,HIGH);
 
 digitalWrite(36,LOW);
 digitalWrite(38,LOW);
 digitalWrite(40,LOW);
 digitalWrite(42,LOW);
 }
 else if (number==4) {
 digitalWrite(28,LOW);
 
 digitalWrite(36,LOW);
 digitalWrite(38,HIGH);
 digitalWrite(40,LOW);
 digitalWrite(42,LOW);
 }
 else if (number==5) {
 digitalWrite(28,LOW);
 
 digitalWrite(36,LOW);
 digitalWrite(38,LOW);
 digitalWrite(40,HIGH);
 digitalWrite(42,LOW);
 }



}

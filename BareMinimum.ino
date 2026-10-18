void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(11,OUTPUT);       
pinMode(8,OUTPUT);                                                                               
}


void loop() {
  // put your main code here, to run repeatedly:
  //13
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(500);
//11
digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);
delay(100);
//8
digitalWrite(8,HIGH);
delay(300);
digitalWrite(8,LOW);
delay(300);
}

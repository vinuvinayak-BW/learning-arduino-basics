int myvoltpin = A1;
int readval;
float v2;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readval = analogRead(myvoltpin);
  v2 = (5.0 / 1023.0) * readval;
  Serial.println(v2);
  delay(delayTime);
}

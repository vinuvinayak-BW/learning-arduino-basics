int redpin = 9;
int bright = 255;
int low = 62;
int medium = 124;

void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redpin, low);
  delay(1000);

  analogWrite(redpin, medium);
  delay(1000);

  analogWrite(redpin, bright);
  delay(1000);
}

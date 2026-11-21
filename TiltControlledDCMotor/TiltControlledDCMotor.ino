int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 255;
int TSPin = 2;
int tiltval;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(TSPin, INPUT);
  digitalWrite(TSPin, HIGH);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltval = digitalRead(TSPin);
  Serial.println(tiltval);

  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);

  if (tiltval == 0)
  {
    analogWrite(speedPin, mSpeed);
  }
  else if (tiltval == 1)
  {
    analogWrite(speedPin, 0);
  }
}

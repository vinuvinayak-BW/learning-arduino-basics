int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 255;
int jPin = A1;
int jVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(jPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  jVal = analogRead(jPin);
  Serial.print(jVal);

  if (jVal < 512)
  {
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    mSpeed = (255.0 / 512.0) * (512 - jVal);
    analogWrite(speedPin, mSpeed);
  }
  if (jVal >= 512)
  {
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    mSpeed = (255.0 / 511.0) * (jVal - 512);
    analogWrite(speedPin, mSpeed);
  }
}

int potval;
int buzzpin = 8;
int potpin = A0;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(potpin);
  Serial.println(potval);
  delay(delayTime);

  while (potval > 580)
  {
    digitalWrite(buzzpin, HIGH);

    potval = analogRead(potpin);
    Serial.println(potval);
  }
  digitalWrite(buzzpin, LOW);
}

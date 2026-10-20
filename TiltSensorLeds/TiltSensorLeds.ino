int tiltpin = 2;
int tiltval;
int dt = 500;
int redpin = 8;
int greenpin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tiltpin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  digitalWrite(tiltpin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltval = digitalRead(tiltpin);
  Serial.println(tiltval);
  delay(dt);
  if (tiltval == 0)
  {
    digitalWrite(redpin, HIGH);
    digitalWrite(greenpin, LOW);
  }
  else if (tiltval == 1)
  {
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin, LOW);
  }
}

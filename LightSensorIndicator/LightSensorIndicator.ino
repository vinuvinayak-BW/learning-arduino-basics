int lightpin = A0;
int lightval;
int redled = 7;
int greenled = 8;
int delayT = 600;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightpin, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightval = analogRead(lightpin);

  Serial.println(lightval);
  delay(delayT);

  if (lightval > 50)
  {
    digitalWrite(greenled, HIGH);
    digitalWrite(redled, LOW);
  }
  else if (lightval <= 50)
  {
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
  }
}

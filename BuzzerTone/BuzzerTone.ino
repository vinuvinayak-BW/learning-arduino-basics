int buzzpin = 8;
int delayTime1 = 1;
int delaytime2 = 2;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (j = 1; j <= 100; j = j + 1)
  {
    digitalWrite(buzzpin, HIGH);
    delay(delayTime1);
    digitalWrite(buzzpin, LOW);
    delay(delayTime1);
  }

  for (j = 1; j <= 100; j = j + 1)
  {
    digitalWrite(buzzpin, HIGH);
    delay(delaytime2);
    digitalWrite(buzzpin, LOW);
    delay(delaytime2);
  }
}

String msg = "What colour LEd is would like to light Up";
int RedPin = 7;
int GreenPin = 8;
int YellowPin = 12;
String LEDBLINK;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(YellowPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);
  while (Serial.available() == 0)
  {
  }

  LEDBLINK = Serial.readString();

  if (LEDBLINK == "red")
  {
    analogWrite(RedPin, 255);
    analogWrite(GreenPin, 0);
    analogWrite(YellowPin, 0);
  }

  if (LEDBLINK == "green")
  {
    digitalWrite(GreenPin, HIGH);
    digitalWrite(RedPin, LOW);
    digitalWrite(YellowPin, LOW);
  }

  if (LEDBLINK == "yellow")
  {
    digitalWrite(YellowPin, HIGH);
    digitalWrite(RedPin, LOW);
    digitalWrite(GreenPin, LOW);
  }
}

int buzzpin = 2;
int ledpin = 3;
int button1 = 11;
int button2 = 10;

int buttonval1;
int buttonval2;

int delaytime = 250;

int Ledbright = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonval1 = digitalRead(button1);
  buttonval2 = digitalRead(button2);
  Serial.print("button1 = ");
  Serial.print(buttonval1);
  Serial.print(" , ");
  Serial.print("button2 = ");
  Serial.println(buttonval2);
  delay(delaytime);

  if (buttonval1 == 0)
  {
    Ledbright = Ledbright + 5;
  }
  if (buttonval2 == 0)
  {
    Ledbright = Ledbright - 5;
  }
  Serial.println(Ledbright);
  if (Ledbright > 255)
  {
    Ledbright = 255;
    digitalWrite(buzzpin, HIGH);
    delay(delaytime);
    digitalWrite(buzzpin, LOW);
  }
  if (Ledbright < 0)
  {
    Ledbright = 0;
    digitalWrite(buzzpin, HIGH);
    delay(delaytime);
    digitalWrite(buzzpin, LOW);
    Serial.println("BUZZ ALARM");
  }
  analogWrite(ledpin, Ledbright);
}

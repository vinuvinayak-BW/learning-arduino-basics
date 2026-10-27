int redpin = 3;
int greenpin = 4;
int yellowpin = 5;
int bluepin = 6;
int Xpin = A0;
int Ypin = A1;
int SWpin = 8;
int dt = 500;
int Xvalue;
int Yvalue;
int SWvalue;
int buzzpin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(SWpin, OUTPUT);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(buzzpin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  Xvalue = analogRead(Xpin);
  Yvalue = analogRead(Ypin);
  SWvalue = digitalRead(SWpin);
  delay(dt);
  Serial.println();
  Serial.print("Xvalue = ");
  Serial.print(Xvalue);
  Serial.print("          ");
  Serial.print("Y value = ");
  Serial.print(Yvalue);
  Serial.print("           ");
  Serial.print("SW value = ");
  Serial.print(SWvalue);

  if (Xvalue == 0)
  {
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin, LOW);
    digitalWrite(yellowpin, LOW);
    digitalWrite(bluepin, LOW);
  }
  else if (Xvalue == 1022 || Xvalue == 1023)
  {
    digitalWrite(redpin, HIGH);
    digitalWrite(buzzpin, HIGH);
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, LOW);
    digitalWrite(bluepin, LOW);
  }
  else if (Yvalue == 0)
  {
    digitalWrite(yellowpin, HIGH);
    digitalWrite(bluepin, LOW);
    digitalWrite(redpin, LOW);
    digitalWrite(greenpin, LOW);
  }
  else if (Yvalue == 1022 || Yvalue == 1023)
  {
    digitalWrite(bluepin, HIGH);
    digitalWrite(redpin, LOW);
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, LOW);
  }
  else if (Xvalue == 515 && Yvalue == 509)
  {
    digitalWrite(bluepin, LOW);
    digitalWrite(redpin, LOW);
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, LOW);
    digitalWrite(buzzpin, LOW);
  }
}

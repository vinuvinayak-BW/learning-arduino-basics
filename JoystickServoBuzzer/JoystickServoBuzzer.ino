#include <Servo.h>

Servo XServo;

// Servo and buzzer
int servopin = 9;
int buzzpin = 7;
int WVServo;

// Joystick
int xpin = A0;
int ypin = A1;
int SWpin = 2;
int Xval;
int Yval;
int SWval;

// Delay time
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(SWpin, INPUT);

  pinMode(servopin, OUTPUT);
  pinMode(buzzpin, OUTPUT);

  XServo.attach(servopin);

  digitalWrite(SWpin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(xpin);
  WVServo = (180.0 / 1023.0) * Xval;
  Yval = analogRead(ypin);
  SWval = digitalRead(SWpin);

  XServo.write(WVServo);
  if (SWval == 0)
  {
    digitalWrite(buzzpin, HIGH);
  }
  else {
    digitalWrite(buzzpin, LOW);
  }

  delay(dt);
  Serial.print("X value = ");
  Serial.print(Xval);
  Serial.print(" ,Y value = ");
  Serial.print(Yval);
  Serial.print(", Switch State is ");
  Serial.println(SWval);
}

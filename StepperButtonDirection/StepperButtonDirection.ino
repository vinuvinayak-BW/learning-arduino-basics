#include <Stepper.h>

// Motor code
int StepsPerRevolution = 2048;
Stepper myStepper(StepsPerRevolution, 8, 10, 9, 11);
int motSpeed = 10;

int motorDir = 1;

// Button code
int buttonpin = 2;
int buttonValueNew;
int buttonValOld = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(buttonpin, INPUT);
  digitalWrite(buttonpin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValueNew = digitalRead(buttonpin);
  if (buttonValOld == 1 && buttonValueNew == 0)
  {
    motorDir = motorDir * -1;
  }
  buttonValOld = buttonValueNew;
  myStepper.step(motorDir * 1);
}

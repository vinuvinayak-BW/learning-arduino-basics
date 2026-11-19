#include <Stepper.h>

int StepsPerRevolution = 2048;
Stepper myStepper(StepsPerRevolution, 8, 10, 9, 11);
int motSpeed = 10;

int dt = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(StepsPerRevolution / 2);
  delay(dt);
  myStepper.step(-StepsPerRevolution / 2);
  delay(dt);
}

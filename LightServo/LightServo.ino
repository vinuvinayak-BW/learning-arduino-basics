#include <Servo.h>

int lightpin = A0;
int lightval;

float angle;
int dt = 250;
Servo myservo;
int servopin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightpin, INPUT);
  myservo.attach(servopin);
  pinMode(servopin, OUTPUT);
}

void loop() {
  lightval = analogRead(lightpin);
  Serial.println(lightval);
  delay(dt);

  angle = (-16.0 / 63.0) * lightval + 16.0 * 780.0 / 63.0;
  myservo.write(angle);
}

int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 0;
int button1 = 11;
int button2 = 10;
int buttonval1;
int buttonval2;
bool reverseDirection = false;
bool bothButtonsPreviouslyPressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
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

  bool bothButtonsPressed = buttonval1 == LOW && buttonval2 == LOW;
  if (bothButtonsPressed) {
    if (!bothButtonsPreviouslyPressed) {
      reverseDirection = !reverseDirection;
    }
  } else if (buttonval1 == LOW) {
    mSpeed = min(mSpeed + 5, 255);
  } else if (buttonval2 == LOW) {
    mSpeed = max(mSpeed - 5, 0);
  }
  bothButtonsPreviouslyPressed = bothButtonsPressed;

  if (reverseDirection) {
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
  } else {
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
  }

  Serial.println(mSpeed);
  analogWrite(speedPin, mSpeed);
  delay(500);
}

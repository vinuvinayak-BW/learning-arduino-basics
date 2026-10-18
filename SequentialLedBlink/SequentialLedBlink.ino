int yellowLed = 6;
int redLed = 9;
int delayTime = 1000;
int YELLOWLEDBlink = 3;
int REDLEDBlink = 5;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (j = 1; j <= YELLOWLEDBlink; j++) {
    digitalWrite(yellowLed, HIGH);
    delay(delayTime);
    digitalWrite(yellowLed, LOW);
    delay(delayTime);
  }

  for (j = 1; j <= REDLEDBlink; j++) {
    digitalWrite(redLed, HIGH);
    delay(delayTime);
    digitalWrite(redLed, LOW);
    delay(delayTime);
  }
}

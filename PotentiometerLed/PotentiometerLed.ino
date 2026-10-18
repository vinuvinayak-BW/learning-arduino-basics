int greenpin = 6;
int potpin = A1;
int delayTime = 500;
float ledval;
int potval;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(potpin);
  ledval = (255.0 / 1023.0) * potval;
  analogWrite(greenpin, ledval);
  Serial.println(ledval);
  delay(delayTime);
}

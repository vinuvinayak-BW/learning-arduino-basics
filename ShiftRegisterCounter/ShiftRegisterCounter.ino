int latchpin = 11;
int clockpin = 9;
int datapin = 12;

byte led1s = 0b00;

int dt = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchpin, OUTPUT);
  pinMode(clockpin, OUTPUT);
  pinMode(datapin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, led1s);
  digitalWrite(latchpin, HIGH);
  delay(dt);

  delay(dt);
  Serial.println(led1s, BIN);

  led1s = led1s + 1;
}

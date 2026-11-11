int latchpin = 11;
int clockpin = 9;
int datapin = 12;

byte mybyte = 0x11;
byte mybyteFlipped;

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
  shiftOut(datapin, clockpin, LSBFIRST, mybyte);
  digitalWrite(latchpin, HIGH);
  delay(dt);

  mybyteFlipped = 255 - mybyte;

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, mybyteFlipped);
  digitalWrite(latchpin, HIGH);
  delay(dt);
}

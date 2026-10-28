int pazzpin = 8;
int buzztimeleft = 10000;
int buzztimeRight = 60;

int pot = A1;
int potval;
int toneval;

void setup() {
  // put your setup code here, to run once:
  pinMode(pazzpin, OUTPUT);
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(pot);
  toneval = (9940.0 / 1023.0) * potval + 60;
  Serial.println(potval);

  digitalWrite(pazzpin, HIGH);
  delayMicroseconds(toneval);
  digitalWrite(pazzpin, LOW);
  delayMicroseconds(toneval);
}

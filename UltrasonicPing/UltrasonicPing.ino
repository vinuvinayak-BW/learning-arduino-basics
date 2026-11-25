int TrigPin = 12;
int Echopin = 11;
int pingTravelTime;
int dt = 10;
int dt2 = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(TrigPin, OUTPUT);
  pinMode(Echopin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(dt);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(dt);
  digitalWrite(TrigPin, LOW);
  pingTravelTime = pulseIn(Echopin, HIGH);
  delay(dt2);
  Serial.println(pingTravelTime);
}

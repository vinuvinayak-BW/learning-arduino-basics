int TrigPin = 12;
int Echopin = 11;
int pingTravelTime;
float pingTravelDistance;
int distanceToTarget;
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
  pingTravelDistance = (pingTravelTime * 765.0 * 5280.0 * 12.0) / (3600.0 * 1000000.0);
  distanceToTarget = pingTravelDistance / 2;
  Serial.println(distanceToTarget);
  delay(dt2);
}

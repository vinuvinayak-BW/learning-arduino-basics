int numBlinks;
String msg = "How many blinks Do you Want  : ";

int BlinkTime = 600;

int RedLed = 12;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(RedLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);

  for (int j = 1; j <= numBlinks; j = j + 2)
  {
    digitalWrite(RedLed, HIGH);
    delay(BlinkTime);
    digitalWrite(RedLed, LOW);
    delay(BlinkTime);

  }


}

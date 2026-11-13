#include <DHT.h>

#define Type DHT11
int sensePin = 2;
DHT dht(sensePin, Type);
float humidity;
float tempC;
float tempF;
int setTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = dht.readHumidity();
  tempC = dht.readTemperature();
  tempF = dht.readTemperature(true);

  Serial.print("Humidity : ");
  Serial.print(humidity);
  Serial.println("  ");
  Serial.print(" Temperature-C : ");
  Serial.print(tempC);
  Serial.println("  ");
  Serial.print(" Temperature-F : ");
  Serial.print(tempF);
  Serial.println("  ");

  delay(setTime);
}

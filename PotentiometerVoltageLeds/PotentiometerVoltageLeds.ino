int mypin = A1;
int readval;
int delaytime = 500;
int redpin = 9;
int greenpin = 7;
int yellowpin = 4;
float v2;


void setup() {
  // put your setup code here, to run once:
  pinMode(mypin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(yellowpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  readval = analogRead(mypin);
  v2 = (5.0 / 1023.0) * readval;
  Serial.println("potentiometer voltage is : ");
  Serial.println(v2);
  if (v2 <= 3)
  {
    digitalWrite(greenpin, HIGH);
  }

  else if (v2 > 3 && v2 < 4)
  {
    digitalWrite(yellowpin, HIGH);
  }
  else if (v2 > 4) {
    digitalWrite(redpin, HIGH);
  }
  delay(delaytime);
}

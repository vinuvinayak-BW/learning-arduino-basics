//RED

int redLED = 8;
int dit = 100;
int daah = 500;
int LongW = 1000;

//GREEN

int greenLED = 13;
int greenblink = 2000;
int constant = 1000;

//YELLOW

int yellowLED = 4;
int yellowblink = 100;
int yellowconstant = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //RED

  //S
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  //O

  digitalWrite(redLED, HIGH);
  delay(daah);
  digitalWrite(redLED, LOW);
  delay(daah);

  digitalWrite(redLED, HIGH);
  delay(daah);
  digitalWrite(redLED, LOW);
  delay(daah);

  digitalWrite(redLED, HIGH);
  delay(daah);
  digitalWrite(redLED, LOW);
  delay(daah);

  //S

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);


  delay(LongW);


  //GREEN


  //S
  digitalWrite(greenLED, HIGH);
  delay(greenblink);
  digitalWrite(greenLED, LOW);
  delay(greenblink);

  digitalWrite(greenLED, HIGH);
  delay(greenblink);
  digitalWrite(greenLED, LOW);
  delay(greenblink);

  digitalWrite(greenLED, HIGH);
  delay(greenblink);
  digitalWrite(greenLED, LOW);
  delay(greenblink);

  //O

  digitalWrite(greenLED, HIGH);
  delay(constant);
  digitalWrite(greenLED, LOW);
  delay(constant);

  digitalWrite(greenLED, HIGH);
  delay(constant);
  digitalWrite(greenLED, LOW);
  delay(constant);

  digitalWrite(greenLED, HIGH);
  delay(constant);
  digitalWrite(greenLED, LOW);
  delay(constant);

  //S

  digitalWrite(greenLED, HIGH);
  delay(greenblink);
  digitalWrite(greenLED, LOW);
  delay(greenblink);

  digitalWrite(greenLED, HIGH);
  delay(greenblink);
  digitalWrite(greenLED, LOW);
  delay(greenblink);

  digitalWrite(greenLED, HIGH);
  delay(greenblink);
  digitalWrite(greenLED, LOW);
  delay(greenblink);


  delay(LongW);

  //YELLOW

  //S
  digitalWrite(yellowLED, HIGH);
  delay(yellowblink);
  digitalWrite(yellowLED, LOW);
  delay(yellowblink);

  digitalWrite(yellowLED, HIGH);
  delay(yellowblink);
  digitalWrite(yellowLED, LOW);
  delay(yellowblink);

  digitalWrite(yellowLED, HIGH);
  delay(yellowblink);
  digitalWrite(yellowLED, LOW);
  delay(yellowblink);

  //O

  digitalWrite(yellowLED, HIGH);
  delay(yellowconstant);
  digitalWrite(yellowLED, LOW);
  delay(yellowconstant);

  digitalWrite(yellowLED, HIGH);
  delay(yellowconstant);
  digitalWrite(yellowLED, LOW);
  delay(yellowconstant);

  digitalWrite(yellowLED, HIGH);
  delay(yellowconstant);
  digitalWrite(yellowLED, LOW);
  delay(yellowconstant);

  //S

  digitalWrite(yellowLED, HIGH);
  delay(yellowblink);
  digitalWrite(yellowLED, LOW);
  delay(yellowblink);

  digitalWrite(yellowLED, HIGH);
  delay(yellowblink);
  digitalWrite(yellowLED, LOW);
  delay(yellowblink);

  digitalWrite(yellowLED, HIGH);
  delay(yellowblink);
  digitalWrite(yellowLED, LOW);
  delay(yellowblink);


  delay(LongW);

}

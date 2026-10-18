int xpin = A0;
int ypin = A1;
int SWpin = 2;
int Xval;
int Yval;
int SWval;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(SWpin, INPUT);
  Serial.begin(9600);
  digitalWrite(SWpin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(xpin);
  Yval = analogRead(ypin);
  SWval = digitalRead(SWpin);
  delay(dt);
  Serial.print("X value = ");
  Serial.print(Xval);
  Serial.print(" ,Y value = ");
  Serial.print(Yval);
  Serial.print(", Switch State is ");
  Serial.println(SWval);
  Serial.println("|------------------___________________------------------|");
}

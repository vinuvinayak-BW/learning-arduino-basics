#include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int dt = 500;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
float firstnum;
float secnum;
float answer;

String Op;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Input first number ?");
  Serial.print("Input first number ?");

  while (Serial.available() == 0) {
  }

  firstnum = Serial.parseFloat();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Input Second number ?");
  while (Serial.available() == 0) {
  }
  Serial.println("Input Second number ?");

  secnum = Serial.parseFloat();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("input operator (*,-,+,/)");
  Serial.println("input operator (*,-,+,/)");
  while (Serial.available() == 0) {
  }

  Op = Serial.readString();

  if (Op == "+") {
    answer = firstnum + secnum;
  }
  else if (Op == "-") {
    answer = firstnum - secnum;
  }
  else if (Op == "*") {
    answer = firstnum * secnum;
  }
  if (Op == "/") {
    answer = firstnum / secnum;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(firstnum);
  lcd.print(Op);
  lcd.print(secnum);
  lcd.print(" = ");
  lcd.print(" answer ");
  lcd.setCursor(0, 1);
  lcd.clear();
}

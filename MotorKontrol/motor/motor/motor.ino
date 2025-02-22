#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define RELAY1_PIN 2  
#define RELAY2_PIN 3  
#define RELAY3_PIN 4  
#define RELAY5_PIN 5  

void initializeLCD() {
  lcd.begin();
  lcd.backlight();
}

void setup() {
  initializeLCD();
  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  pinMode(RELAY3_PIN, OUTPUT);
  pinMode(RELAY5_PIN, OUTPUT);

  digitalWrite(RELAY1_PIN, HIGH);
  digitalWrite(RELAY2_PIN, HIGH);
  digitalWrite(RELAY3_PIN, HIGH);
  digitalWrite(RELAY5_PIN, HIGH);

  lcd.setCursor(0, 0);
  lcd.print("Hos Geldiniz!");
  lcd.setCursor(0, 1);
  lcd.print("AKT ");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Islemler Hazir");
  delay(2000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("1.SIVI VERILIYOR");
  digitalWrite(RELAY3_PIN, LOW);

  for (int i = 3; i >= 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("   ");
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }

  digitalWrite(RELAY3_PIN, HIGH);
  lcd.setCursor(0, 1);
  lcd.print("Bitti!       ");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Beklemedeyim");

  digitalWrite(RELAY1_PIN, HIGH); 
  digitalWrite(RELAY2_PIN, HIGH);
  digitalWrite(RELAY3_PIN, HIGH);

  for (int i = 6; i >= 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("   ");
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("2.SIVI VERILIYOR");

  digitalWrite(RELAY2_PIN, LOW);

  for (int i = 3; i >= 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("   ");
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }

  digitalWrite(RELAY2_PIN, HIGH);
  lcd.setCursor(0, 1);
  lcd.print("Bitti!       ");
  delay(3000);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Beklemedeyim");

  digitalWrite(RELAY1_PIN, HIGH); 
  digitalWrite(RELAY2_PIN, HIGH);
  digitalWrite(RELAY3_PIN, HIGH);

  for (int i = 6; i >= 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("   ");
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SU VERILIYOR");

  digitalWrite(RELAY1_PIN, LOW);

  for (int i = 3; i >= 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("   ");
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }

  digitalWrite(RELAY1_PIN, HIGH);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Islemler Tamam");

  digitalWrite(RELAY5_PIN, LOW);
  delay(15000);
  digitalWrite(RELAY5_PIN, HIGH);

  while (true) {}
}

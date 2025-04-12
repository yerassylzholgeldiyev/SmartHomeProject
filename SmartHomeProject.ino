#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define PIR_PIN 2        
#define FLAME_PIN 3      
#define GAS_PIN A0       
#define LDR_PIN A1       
#define DHT_PIN 4        
#define MOTION_LED_PIN 5 
#define BUZZER_PIN 6     
#define LIGHT_LED_PIN 7  

#define DHTTYPE DHT11    
DHT dht(DHT_PIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);
  pinMode(MOTION_LED_PIN, OUTPUT);
  pinMode(LIGHT_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  int lightLevel = analogRead(LDR_PIN);
  int gasLevel = analogRead(GAS_PIN);
  int flame = digitalRead(FLAME_PIN);
  
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (motion == HIGH) {
    digitalWrite(MOTION_LED_PIN, HIGH);
  } else {
    digitalWrite(MOTION_LED_PIN, LOW);
  }

  if (lightLevel < 400) {
    digitalWrite(LIGHT_LED_PIN, HIGH);
  } else {
    digitalWrite(LIGHT_LED_PIN, LOW);
  }

  if (gasLevel > 500 || flame == LOW) {
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: "); lcd.print(temp); lcd.print(" C");
  
  lcd.setCursor(0, 1);
  lcd.print("Humidity: "); lcd.print(humidity); lcd.print(" %");

  Serial.print("Қозғалыс: "); Serial.print(motion);
  Serial.print(" | Жарық: "); Serial.print(lightLevel);
  Serial.print(" | Газ: "); Serial.print(gasLevel);
  Serial.print(" | Өрт: "); Serial.print(flame);
  Serial.print(" | Температура: "); Serial.print(temp);
  Serial.print(" °C | Ылғалдылық: "); Serial.print(humidity);
  Serial.println(" %");

  delay(1000);
}

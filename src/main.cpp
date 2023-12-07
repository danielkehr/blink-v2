#include <Arduino.h>

const byte LED_PIN_1 = 13;


void setup() {
pinMode(LED_PIN_1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN_1, HIGH);
  delay(1000);
  digitalWrite(LED_PIN_1, LOW);
  delay(500);
}


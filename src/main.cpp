#include <Arduino.h>
#define SHORT_INTERVAL 250
#define LONG_INTERVAL 1000
#define PIN 2

void shortBlink(){
  digitalWrite(PIN, LOW);
  delay(SHORT_INTERVAL);
  digitalWrite(PIN, HIGH);
  delay(SHORT_INTERVAL);
}
void longBlink(){
  digitalWrite(PIN, LOW);
  delay(LONG_INTERVAL);
  digitalWrite(PIN, HIGH);
  delay(LONG_INTERVAL);
}
void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  shortBlink();
  shortBlink();
  shortBlink();
  longBlink();
  longBlink();
}
// ESP32 8 LEDs: arrays and loops
// Original LED pin order and 200 ms chase sequence are confirmed.
int leds[] = {13, 12, 14, 27, 26, 25, 33, 32};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
    delay(200);
  }
}

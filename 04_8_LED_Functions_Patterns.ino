// ESP32 8 LEDs: Functions and Patterns
// IMPORTANT: reconstructed examples, NOT a verified verbatim copy of
// the exact functions or delays shown in the historical video.
// Confirmed hardware pin order is preserved.
int leds[] = {13, 12, 14, 27, 26, 25, 33, 32};

// The old function bodies and precise delays could not be recovered.
// Change this value if your recorded demo used different timing.
const int patternDelay = 200;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  runningLight();
  pingPong();
  alternating();
  centerOut();
  outsideIn();
}

void allOff() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], LOW);
  }
}

void runningLight() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH);
    delay(patternDelay);
    digitalWrite(leds[i], LOW);
    delay(patternDelay);
  }
}

void pingPong() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH);
    delay(patternDelay);
    digitalWrite(leds[i], LOW);
  }
  for (int i = 6; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(patternDelay);
    digitalWrite(leds[i], LOW);
  }
}

void alternating() {
  allOff();
  for (int i = 0; i < 8; i += 2) {
    digitalWrite(leds[i], HIGH);
  }
  delay(patternDelay);
  allOff();
  for (int i = 1; i < 8; i += 2) {
    digitalWrite(leds[i], HIGH);
  }
  delay(patternDelay);
  allOff();
}

void centerOut() {
  for (int i = 3, j = 4; i >= 0; i--, j++) {
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[j], HIGH);
    delay(patternDelay);
    digitalWrite(leds[i], LOW);
    digitalWrite(leds[j], LOW);
  }
}

void outsideIn() {
  for (int i = 0, j = 7; i < 4; i++, j--) {
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[j], HIGH);
    delay(patternDelay);
    digitalWrite(leds[i], LOW);
    digitalWrite(leds[j], LOW);
  }
}

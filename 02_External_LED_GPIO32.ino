// ESP32 External LED (GPIO32)
// GPIO32 is confirmed. The 500 ms delays here are a beginner-friendly
// matching blink example; exact delays from the original scene were not found.
const int LED_PIN = 32;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);

  digitalWrite(LED_PIN, LOW);
  delay(500);
}

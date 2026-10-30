// ESP32 Built-in LED Blink (GPIO2)
// This sketch and its 500 ms delays are confirmed by the earlier source.
const int LED_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);

  digitalWrite(LED_PIN, LOW);
  delay(500);
}

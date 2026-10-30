# ESP32 LED Tutorial — Code & Wiring

Supporting Arduino sketches for the progression shown in the InnoCircuitsLab LED lesson:

**GPIO2 blink → GPIO32 external LED → eight LEDs → arrays / loops / functions.**

> **Accuracy note:** The hardware pins and the basic chase loop are sourced from earlier project material. The **pattern functions** are clearly labeled reconstructions because the complete original code/timing could not be recovered. Please check `docs/SOURCE_NOTES.md` before claiming the fourth sketch exactly matches the published video.

## Sketches

| Folder | Topic | GPIOs | Status |
|---|---|---|---|
| `firmware/01_BuiltIn_LED_Blink` | Blink built-in LED, 500 ms on / 500 ms off | 2 | verified |
| `firmware/02_External_LED_GPIO32` | Blink one external LED | 32 | pin verified; timing reconstructed |
| `firmware/03_8_LED_Array_Chase` | Array and a `for` loop; 200 ms on / 200 ms off | 13, 12, 14, 27, 26, 25, 33, 32 | array and chase confirmed |
| `firmware/04_8_LED_Functions_Patterns` | Running light, ping-pong, alternating, center-out, outside-in | same order | reconstructed function logic/timing |

## Requirements

- Generic classic ESP32 DevKit board compatible with the GPIO wiring shown.
- Arduino IDE with the **esp32** board package by Espressif Systems.
- One external LED and/or eight LEDs, **one series resistor per LED**, and a breadboard / jumper wires.
- USB data cable.

## Quick start

1. Wire the circuit using [docs/WIRING.md](docs/WIRING.md).
2. Open the corresponding `.ino` file in Arduino IDE (each `.ino` is inside a folder with exactly the same name).
3. Choose your actual ESP32 board and serial port.
4. Upload one example at a time.

### Eight-LED pin order (IMPORTANT)

```cpp
int leds[] = {13, 12, 14, 27, 26, 25, 33, 32};
```

It is intentionally **not** changed to another pin map.

### Confirmed loop from the eight-LED video

```cpp
for (int i = 0; i < 8; i++) {
  digitalWrite(leds[i], HIGH);
  delay(200);
  digitalWrite(leds[i], LOW);
  delay(200);
}
```

## Safety / limitations

- All external LEDs need a current-limiting resistor; never drive motors/relays directly from GPIO.
- The built-in LED is not necessarily GPIO2 on other ESP32 boards.
- GPIO12 is an ESP32 boot strapping pin. Avoid loads that pull it to an incorrect level at reset.
- This package is a ready-to-download **local GitHub upload archive**, not an already-published GitHub repository.

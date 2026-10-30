# ESP32 LED Tutorial — Wiring

**Board:** classic ESP32 development board (the original tutorial's GPIO map; not interchangeable with ESP32-S3 or other boards without checking).

## 1. Built-in LED

- LED is assumed to be wired to **GPIO2** on the board used in the tutorial.
- Not every ESP32 board has a user LED on GPIO2.

## 2. One external LED

- **GPIO32** -> **220–330 Ω current-limiting resistor** -> LED **anode (+)**.
- LED **cathode (-)** -> ESP32 **GND**.
- You may place the resistor on either side of the LED, as long as it is in series.

## 3. Eight separate LEDs

| Physical LED position (left to right in the tutorial) | ESP32 GPIO |
|---:|---:|
| 1 | 13 |
| 2 | 12 |
| 3 | 14 |
| 4 | 27 |
| 5 | 26 |
| 6 | 25 |
| 7 | 33 |
| 8 | 32 |

**Each LED:** GPIO -> its **own** current-limiting resistor (typically 220–330 Ω for common low-current LEDs) -> LED anode, LED cathode -> GND. The **LED index order is identical** to the array in the sketch:

```cpp
int leds[] = {13, 12, 14, 27, 26, 25, 33, 32};
```

Do not connect an LED directly to a GPIO without a resistor. ESP32 GPIO logic is **3.3V**. Check your LED specifications and overall GPIO current budget. GPIO12 is a strapping pin on classic ESP32: attached circuits must not force an invalid level during boot. If upload/boot fails, disconnect the LED circuit and troubleshoot the wiring.

**Note:** The GPIO32 single-LED demo and the eighth LED in the eight-LED demo use the same GPIO in separate sketches; do not run both sketches simultaneously.

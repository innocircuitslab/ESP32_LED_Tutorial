# Source verification notes

The archive was recreated from the surviving project context, not from a recovered original `.ino` repository. We have intentionally distinguished verified parts from reconstructed ones.

## Confirmed from earlier material

- Built-in LED GPIO2, `HIGH` / `delay(500)` / `LOW` / `delay(500)`.
- External LED GPIO32.
- Exact eight-LED array order: `{13, 12, 14, 27, 26, 25, 33, 32}`.
- Exact chase loop: `for (int i = 0; i < 8; i++)`, `HIGH`, `delay(200)`, `LOW`, `delay(200)`.
- Function names associated with the final tutorial: `runningLight()`, `pingPong()`, `alternating()`, `centerOut()`, `outsideIn()`.

## Reconstructed (not confirmed verbatim from the video)

- The 500 ms delays in the external LED sketch.
- The function bodies and delay timings in the final patterns sketch. The implementations are functional examples that use the confirmed GPIO order; the precise historic pattern timing/ordering was not accessible from the source material. Please compare this final file with the original recorded code before describing it as *identical to the video*.

This archive has been built and checked for file structure, syntax shape, and pin order; it has **not** been uploaded to or hardware-tested on the target ESP32.

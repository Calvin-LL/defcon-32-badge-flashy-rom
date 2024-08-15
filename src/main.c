#include "Brightness.h"
#include "Color.c"
#include "ColorMode.h"
#include "background.c"
#include "background.h"
#include "led.h"
#include <gb/gb.h>
#include <stdio.h>

#define MAX_DELAY_MULTIPLIER 40
#define MIN_DELAY_MULTIPLIER 1
#define DEFAULT_DELAY_MULTIPLIER 10

#define BUTTON_DELAY 300

void main() {
  uint8_t count = 0;

  enum Brightness brightness = DEFAULT_BRIGHTNESS;
  enum ColorMode colorMode = DEFAULT_COLOR_MODE;
  uint8_t delay_multiplier = DEFAULT_DELAY_MULTIPLIER;

  // Load background to VRAM
  set_bkg_data(0, backgroundTileDataCount, background);
  set_bkg_tiles(0, 0, backgroundTilesX, backgroundTilesY, backgroundMap);

  DISPLAY_ON;
  SHOW_BKG;

  while (1) {
    switch (joypad()) {
    case J_RIGHT:
      if (delay_multiplier >= MIN_DELAY_MULTIPLIER + 1) {
        delay_multiplier--;
      }
      delay(BUTTON_DELAY);
      break;
    case J_LEFT:
      if (delay_multiplier <= MAX_DELAY_MULTIPLIER - 1) {
        delay_multiplier++;
      }
      delay(BUTTON_DELAY);
      break;
    case J_UP:
      brightness = Brightness_increment(brightness);
      delay(BUTTON_DELAY);
      break;
    case J_DOWN:
      brightness = Brightness_decrement(brightness);
      delay(BUTTON_DELAY);
      break;
    case J_A:
      if (colorMode == COLOR_MODE_VIBRANT) {
        colorMode = COLOR_MODE_RANDOM;
      } else {
        colorMode = COLOR_MODE_VIBRANT;
      }
      delay(BUTTON_DELAY);
      break;
    default:
      break;
    }

    if (count++ % delay_multiplier == 0) {
      switch (colorMode) {
      case COLOR_MODE_VIBRANT:
        for (uint8_t i = 0; i < LED_COUNT; i++) {
          struct Color color;
          color = randomVibrantColor(brightness);
          set_led_color(i, color);
        }
        break;
      case COLOR_MODE_RANDOM:
        for (uint8_t i = 0; i < LED_COUNT; i++) {
          struct Color color;
          color = randomColor(brightness);
          set_led_color(i, color);
        }
        break;
      }
    }

    delay(40);
  }
}

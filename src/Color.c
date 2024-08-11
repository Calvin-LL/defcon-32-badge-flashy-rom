#include "Color.h"
#include <rand.h>

typedef struct Color ColorRatio;

// since the colors are only gonna be 0, 64, 128, 192, 255, we can just use 3
// bits to represent the color, map it to [0, 255] according to the brightness
ColorRatio vibrantColorRatios[] = {
    // red
    {8, 0, 0},
    // green
    {0, 8, 0},
    // blue
    {0, 0, 8},
    // yellow
    {8, 8, 0},
    // cyan
    {0, 8, 8},
    // magenta
    {8, 0, 8},
    // orange
    {8, 2, 0},
    // purple
    {4, 0, 8},
};

uint8_t randomNumber(uint8_t max) { return (rand() % (max + 1)); }

struct Color randomVibrantColor(enum Brightness brightness) {
  ColorRatio colorRatio;
  colorRatio = vibrantColorRatios[randomNumber(7)];
  struct Color newColor;

  uint16_t brightnessMultiplier = brightness * 8;

  newColor.red = better_uint16_to_8(colorRatio.red * brightnessMultiplier);
  newColor.green = better_uint16_to_8(colorRatio.green * brightnessMultiplier);
  newColor.blue = better_uint16_to_8(colorRatio.blue * brightnessMultiplier);

  return newColor;
}

struct Color randomColor(enum Brightness brightness) {
  struct Color newColor;

  uint8_t brightnessValue = better_uint16_to_8(Brightness_getValue(brightness));

  newColor.red = randomNumber(brightnessValue);
  newColor.green = randomNumber(brightnessValue);
  newColor.blue = randomNumber(brightnessValue);

  return newColor;
}

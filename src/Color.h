#ifndef COLOR_H
#define COLOR_H

#include "Brightness.h"
#include <gb/gb.h>

struct Color {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
};

struct Color randomVibrantColor(enum Brightness brightness);
struct Color randomColor(enum Brightness brightness);

uint8_t better_uint16_to_8(uint16_t value) {
  if (value > 255) {
    return 255;
  } else {
    return (uint8_t)value;
  }
}

#endif // COLOR_H

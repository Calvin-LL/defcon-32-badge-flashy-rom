#ifndef BRIGHTNESS_H
#define BRIGHTNESS_H

#include <gb/gb.h>

enum Brightness {
  BRIGHTNESS_0 = 0,
  BRIGHTNESS_1 = 1,
  BRIGHTNESS_2 = 2,
  BRIGHTNESS_3 = 4,
  BRIGHTNESS_4 = 8,
};

#define DEFAULT_BRIGHTNESS BRIGHTNESS_2

uint16_t Brightness_getValue(enum Brightness brightness);

enum Brightness Brightness_increment(enum Brightness brightness) {
  switch (brightness) {
  case BRIGHTNESS_0:
    return BRIGHTNESS_1;
  case BRIGHTNESS_1:
    return BRIGHTNESS_2;
  case BRIGHTNESS_2:
    return BRIGHTNESS_3;
  case BRIGHTNESS_3:
    return BRIGHTNESS_4;
  case BRIGHTNESS_4:
    return BRIGHTNESS_4;
  default:
    return BRIGHTNESS_4;
  }
}

enum Brightness Brightness_decrement(enum Brightness brightness) {
  switch (brightness) {
  case BRIGHTNESS_0:
    return BRIGHTNESS_0;
  case BRIGHTNESS_1:
    return BRIGHTNESS_0;
  case BRIGHTNESS_2:
    return BRIGHTNESS_1;
  case BRIGHTNESS_3:
    return BRIGHTNESS_2;
  case BRIGHTNESS_4:
    return BRIGHTNESS_3;
  default:
    return BRIGHTNESS_0;
  }
}

#endif // BRIGHTNESS_H

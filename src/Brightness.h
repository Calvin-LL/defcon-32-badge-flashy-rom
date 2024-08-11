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
  if (brightness < BRIGHTNESS_4) {
    return (brightness + 1);
  } else {
    return BRIGHTNESS_4;
  }
}

enum Brightness Brightness_decrement(enum Brightness brightness) {
  if (brightness > BRIGHTNESS_0) {
    return (brightness - 1);
  } else {
    return BRIGHTNESS_0;
  }
}

#endif // BRIGHTNESS_H

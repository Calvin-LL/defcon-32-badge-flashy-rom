#include "Brightness.h"

uint16_t Brightness_getValue(enum Brightness brightness) {
  return (uint16_t)brightness * 32;
}
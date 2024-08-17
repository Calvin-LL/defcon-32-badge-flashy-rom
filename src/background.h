/**
 * background.h
 *
 * Generated with game-boy-tile-tools.calvin.sh
 */

#include <stdint.h>

#define BACKGROUND_TILE_WIDTH 8
#define BACKGROUND_TILE_HEIGHT 8
#define BACKGROUND_WIDTH 20
#define BACKGROUND_HEIGHT 18
#define BACKGROUND_TILE_COUNT 146
#define BACKGROUND_MAP_SIZE 360
#define BACKGROUND_TILE_OFFSET 0
#define BACKGROUND_PALETTE_OFFSET 0

extern const unsigned char backgroundTiles[BACKGROUND_TILE_COUNT * 16];
extern const unsigned char backgroundMap[BACKGROUND_MAP_SIZE];
extern const uint16_t backgroundPalette[4];


/*
 background.c

 Info:
  Tile size            : 8 x 8
  TileDataCount        : 146
  TileMapCount         : 1
  map size             : 20 x 18
  CGB Palette          : 1 Byte per entry.
  tileOffset           : 0
  paletteOffset        : 0
  Includes palette     : true
  Includes map         : true
*/

/* properties */
#define backgroundTileWidth 8
#define backgroundTileHeight 8
#define backgroundTilesX 20
#define backgroundTilesY 18
#define backgroundTileDataCount 146
#define backgroundTileMapCount 360
#define backgroundTileOffset 0
#define backgroundPaletteOffset 0

/* Gameboy Color palette 0 */
#define backgroundCGBPal0c0 32767
#define backgroundCGBPal0c1 15855
#define backgroundCGBPal0c2 7399
#define backgroundCGBPal0c3 0

/* Start of tile array. */
extern unsigned char background[];

/* CGBpalette entries. */
extern unsigned char backgroundPaletteEntries[];

/* map array. */
extern unsigned char backgroundMap[];

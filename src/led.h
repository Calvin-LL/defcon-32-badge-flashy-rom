

#ifndef LED_H
#define LED_H

#define DAT0_REG (*(volatile uint8_t *)0xFF7D)
#define DAT1_REG (*(volatile uint8_t *)0xFF7E)
#define IDR_REG (*(volatile uint8_t *)0xFF7F)
#define CTL_REG (*(volatile uint8_t *)0xFF7F)

#define LED_COUNT 8

// from
// https://discord.com/channels/867438418212683796/1271303192399052822/1271458494922620969
void set_led_color(uint8_t led_index, struct Color color) {
  DAT0_REG = color.red;
  CTL_REG = ((led_index << 4) | 0x01);
  DAT0_REG = color.green;
  CTL_REG = ((led_index << 4) | 0x00);
  DAT0_REG = color.blue;
  CTL_REG = ((led_index << 4) | 0x02);
  CTL_REG = 0x90;
}

#endif // LED_H

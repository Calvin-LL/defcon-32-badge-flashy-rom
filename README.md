# DEF CON 32 Badge Flashy ROM

This is a simple ROM for the DEF CON 32 Badge that makes the LEDs flash in a pattern.

Big thanks to https://docs.google.com/document/d/1COY5n0HhBcBq7ILwsKtOjV-_0-arNPkk_qBH9PI9fms/edit#heading=h.w6qk3bk85pvz and https://github.com/jaku/DEFCON-32-BadgeFirmware and @jaku's https://defrom.lol/

## How to flash

1. Power off the badge
2. Plug in a USB cable into a computer
3. Hold the button on the back of the badge while plugging the USB cable into the badge
4. The badge should show up as a USB drive on your computer, drag the `rom-firmware.uf2` file onto the drive
5. Wait for the badge to reboot
6. Enjoy the flashing lights!

## Features

- **Up arrow**: Increase the brightness of the LEDs
- **Down arrow**: Decrease the brightness of the LEDs
- **Left arrow**: Decrease the speed of the flashing
- **Right arrow**: Increase the speed of the flashing
- **A button**: Randomly generate R, G, and B values for the LEDs instead of the predefined colors

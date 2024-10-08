# DEF CON 32 Badge Flashy ROM

This is a simple ROM for the DEF CON 32 Badge that makes the LEDs flash in random colors.

Big thanks to https://docs.google.com/document/d/1COY5n0HhBcBq7ILwsKtOjV-_0-arNPkk_qBH9PI9fms/edit and https://github.com/jaku/DEFCON-32-BadgeFirmware and [@jaku](https://github.com/jaku/DEFCON-32-BadgeFirmware)'s https://defrom.lol/

![](https://github.com/user-attachments/assets/e83193f0-fa00-4bd8-98d5-6ff2d827bf4a)

## Features

- 🔼 **Up arrow**: Increase the brightness of the LEDs
- 🔽 **Down arrow**: Decrease the brightness of the LEDs
- ◀️ **Left arrow**: Decrease the speed of the flashing
- ▶️ **Right arrow**: Increase the speed of the flashing
- 🅰️ **A button**: Toggle between the randomly generate R, G, and B values for the LEDs and randomly choosing from the predefined colors

## How to add to ROM

1. Add the `flashy.gbc` file to the `ROM` directory of the SD card
2. In the menu, go to "Select Another Game" to select the flashy ROM
3. Enjoy the flashing lights!
4. (If you like it, give this repo a star!)

## How to flash

If you can't write to your SD card and don't mind losing the current firmware, you can flash the badge with the `rom-firmware.uf2` file.

1. Power off the badge
2. Plug in a USB cable into a computer
3. Hold the top right button on the back of the badge while plugging the USB cable into the badge
   ![](https://github.com/user-attachments/assets/441b5171-761d-4846-adae-64805828e640)
4. The badge should show up as a USB drive on your computer, drag the `rom-firmware.uf2` file onto the drive
5. Wait for the badge to reboot
6. Enjoy the flashing lights!
7. (If you like it, give this repo a star!)

## How to build

1. Download gbdk from https://github.com/gbdk-2020/gbdk-2020
2. Run
   ```bash
   ./gbdk/bin/lcc -Wm-yC -o flashy.gbc ./src/main.c
   ```
   (replace `./gbdk` with the path to your gbdk directory)
3. The `flashy.gbc` file is the ROM that you can add to the SD card, or you can make a firmware with https://defrom.lol/
4. If you want to run the ROM on an emulator first for testing. I used https://taisel.github.io/GameBoy-Online/

## Images

The background files were generated with https://github.com/Calvin-LL/game-boy-tile-tools. The font of the text is [Early GameBoy](https://www.dafont.com/early-gameboy.font).

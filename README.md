# Arduino Scrolling Marquee

This project implements a scrolling marquee on a 20x4 I2C LCD display using an Arduino. The code displays static and scrolling text on different rows of the LCD, with adjustable scrolling speed.

## Features

- Displays a static message centered on the second row of the LCD.
- Scrolls a custom message on the first and fourth rows of the display.
- Adjustable scroll speed using a delay in the loop.

## Requirements

- Arduino board (e.g., Arduino Uno, Nano)
- 20x4 I2C LCD display
- Arduino IDE installed on your computer
- LiquidCrystal I2C library (Ensure it's installed in your Arduino IDE)

## Installation

1. Clone this repository:

   ```bash
   git clone https://github.com/Mark-Langston/ScrollingMarquee.git

2. Ensure the LiquidCrystal_I2C library is installed in the Arduino IDE. You can install it via the Library Manager by searching for "LiquidCrystal I2C".
3. Connect your 20x4 I2C LCD display to the Arduino according to its I2C address (default is 0x27). Adjust the address in the code if necessary.

## Usage
1. Connect your Arduino to your computer.
2. Upload the code to the Arduino board using the Arduino IDE.
3. The LCD will display the static message on the second row and scroll text on the first and fourth rows.

## Code Overview
- The scrolling text is defined in row1Text and row4Text.
- The scroll speed can be adjusted by changing the delay value in the loop() function.
- The LCD backlight is enabled for better visibility.

## Author

Mark Langston - Mark-Langston

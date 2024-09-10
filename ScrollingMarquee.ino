// Arduino Scrolling Marquee

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 20 chars and 4 line display
LiquidCrystal_I2C lcd(0x27, 20, 4); // Specify 20 columns, 4 rows in constructor

const String row1Text = "Stranger Things PC Puppet Does";
const String row4Text = "I'm taking over!";
int row1Pos = 0;
int row4Pos = 0;

void setup() {
  // Initialize the LCD (no arguments in begin() since your library expects it this way)
  lcd.begin(); 
  
  // Turn on the backlight
  lcd.backlight();

  // Print the static message on the second row centered
  lcd.setCursor((20 - 13) / 2, 1); // Center "Hello, World!" on the second row
  lcd.print("Hello, World!");
}

void loop() {
  // Scroll the first row text
  lcd.setCursor(0, 0);
  lcd.print(row1Text.substring(row1Pos, row1Pos + 20)); // Print scrolling text for the first row

  // Scroll the fourth row text
  lcd.setCursor(0, 3);
  lcd.print(row4Text.substring(row4Pos, row4Pos + 20)); // Print scrolling text for the fourth row

  delay(250); // Adjust delay to control scroll speed

  // Update positions for scrolling effect
  row1Pos++;
  row4Pos++;

  // Reset positions if end of string is reached
  if (row1Pos > row1Text.length() - 20) {
    row1Pos = 0;
  }
  if (row4Pos > row4Text.length() - 20) {
    row4Pos = 0;
  }
}

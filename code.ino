 /* Demonstrates the use a 16x2 LCD display to print "Hi!" 
 * 
 * Hardware Component:
 * Arduino Uno
 * LCD 16x2 
 * 
 * Hardware Connection:
 * LCD is configured to work with 4 bit mode
 *  LCD D4 pin to digital pin 5 of Arduino Uno
 *  LCD D5 pin to digital pin 4 of Arduino Uno
 *  LCD D6 pin to digital pin 3 of Arduino Uno
 *  LCD D7 pin to digital pin 2 of Arduino Uno
 *  LCD RS pin to digital pin 12 of Arduino Uno
 *  LCD EN pin to digital pin 11 of Arduino Uno
 *  LCD R/W pin to ground
 * 
 * Author : Sahana B G
 * Date   : 30 Apr 2021
 * 
*/

// Include the header file
#include <LiquidCrystal.h>

// Initialize the library by associating any needed LCD interface pin
// with the Arduino Uno pin number it is connected to
const int RS = 12, EN = 11, D4 = 5, D5 = 4, D6 = 3, D7 = 2;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() 
{
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
 
}

void loop()
{
  // Set cursor column 0, and row 0
  lcd.setCursor(0,0);
  
  // Print a message to the LCD.
  lcd.print("HI!");
  for(int i=0;i<=2;i++)
  {
     lcd.scrollDisplayRight(); // Scrolls the contents of the display (text and cursor) one space to the right.
     delay(500); // Wait for 500ms. 
  } 
}

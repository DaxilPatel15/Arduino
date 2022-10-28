#include <LiquidCrystal.h>
// Initialise the Serial LCD.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // These pin numbers are hard coded in on the serial backpack
// board.
char *question[4] = {"Are you fine?", "Do you need help", "Are you vegan?", "Do you have food"};
int ans[2] = {0, 0};
int button1Pin = 8; // The SW1 button is connect to pin 8 of the Arduino.
int button2Pin = 9; // The SW2 button is connect to pin 9 of the Arduino.
int press = 0;      // variable
bool exit1 = true;  // boolean variable.
void setup()
{
    lcd.begin(16, 2); // Initialize the LCD.
    lcd.print("DAXIL");
    pinMode(button1Pin, INPUT); // Setup button1 pin as an input pin.
    pinMode(button2Pin, INPUT); // Setup button2 pin as an input pin.
}
void loop()
{

    // level1();
    level2();
    level3();
}
// LEVEL 1

void level1()
{

    lcd.clear();
    lcd.setCursor(0, 0); // goto first column and first line (0,0)
    lcd.print("321");    // Print at cursor Location
    lcd.setCursor(0, 1); // goto first column and second line
    lcd.print("Maker");  // Print at cursor Location
    delay(1000);
}

// LEVEL 2

void level2()
{

    for (int count = 0; count <= 11; count++)
    {
        // scroll one position right:

        lcd.setCursor(count, 0); // goto first column and first line (0,0)
        lcd.print("DAXIL");      // Print at cursor Location
        delay(400);              // delay of 400 milliseconds.
        lcd.clear();             // clear out lcd screen
    }

    for (int position = 11; position >= 0; position--)
    {
        // scroll one position left:

        lcd.setCursor(position, 1); // goto first column and first line (0,0)
        lcd.print("DAXIL");         // Print at cursor Location
        delay(400);                 // delay 400 milliseconds.
        lcd.clear();                // clear out lcd screen
    }
}
// LEVEL 3
void level3()
{

    if (digitalRead(button1Pin) == HIGH)
    {

        press++;    // increment
        delay(300); // delay of 300milliseconds.
        if (press > 2)
        {

            press = 0;
        }

        lcd.clear(); // to clear out screen
        if (press == 0)
        {

            lcd.setCursor(0, 0); // goto first column and first line (0,0)
            lcd.print("DAXIL");  // Print at cursor Location
        }

        else if (press == 1)
        {

            lcd.setCursor(0, 0);     // goto first column and first line (0,0)
            lcd.print("BASKETBALL"); // Print at cursor Location
        }
        else if (press == 2)
        {

            lcd.setCursor(0, 0);         // goto first column and first line (0,0)
            lcd.print("BUTTER CHICKEN"); // Print at cursor Location
        }

        delay(500); // delay of 500 milliseconds.
    }
}

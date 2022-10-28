//  FINAL PROJECT
// ADVANCE GAS ALARM SYSTEM

#include <LiquidCrystal.h>
LiquidCrystal lcd(5, 6, 8, 9, 10, 11);

int redlight = 2;      // The red led light is connected pin 2 of the Arduino.
int bluelight = 3;     // The blue led light is connected pin 3 of the Arduino.
int redrgb = 13;       // The red rgb is connected pin 13 of the Arduino.
int bluergb = 1;       // The blue rgb is connected pin 1 of the Arduino.
int greenrgb = 0;      // The green rgb is connected pin 0 of the Arduino.
int buzzer = 4;        // the buzzer is connected to pin 4 of the Arduino.
int gassensor = A0;    // the gas sensor is coonected to the pin A0 of the Arduino.
int sensorlimit = 300; // sensorlimit is a range of sensor.
int motor = 7;         // the motor is connected to pin 7 of the Arduino.

void setup()
{
    pinMode(redlight, OUTPUT);  // to give red led light output
    pinMode(bluelight, OUTPUT); // to give blue led light output
    pinMode(buzzer, OUTPUT);    // to give a strong noise of buzzer
    pinMode(gassensor, INPUT);  // gas sensor input
    pinMode(redrgb, OUTPUT);    // to give red rgb light output
    pinMode(bluergb, OUTPUT);   // to give blue rgb light output
    pinMode(greenrgb, OUTPUT);  // to give green rgb light output
    Serial.begin(9600);         // to print the value of variables.
    lcd.begin(16, 2);           // to display the characters in lcd screen
    pinMode(motor, OUTPUT);     // motor output.
}

void loop()
{
    int gassensorValue = analogRead(gassensor);
    Serial.print(gassensorValue);

    // starting of if else  statement
    if (gassensorValue > sensorlimit)

    {

        analogWrite(motor, 128);       // motor is turn on
        digitalWrite(redlight, LOW);   // red light is turn off
        digitalWrite(bluelight, HIGH); // blue light is turn on

        tone(buzzer, 1000, 10000); // sound will be produce from the buzzer.
        lcd.clear();               // to clear screen after displaying
        lcd.setCursor(0, 0);       // to display below content in 0,0.
        lcd.print("GAS LEAK");
        delay(900); // delay of 900 millisec

        lcd.clear();
        lcd.setCursor(0, 1); // to display below content in 0,1.
        lcd.print("OPENING WINDOWS");
        delay(900);          // delay of 900 millisec
        lcd.clear();         // to clear screen after displaying
        lcd.setCursor(0, 0); // to display below content in 0,0.
        lcd.print("CALLING");
        lcd.setCursor(0, 1); // to display below content in 0,1.
        lcd.print("911...");
        delay(1000); // delay of 1 sec

        analogWrite(redrgb, 255);   // red rgb light is turn on
        analogWrite(greenrgb, 0);   // green rgb light is turn off
        analogWrite(bluergb, 0);    // blue rgb light is turn off
        delay(1000);                // delay of 1 sec
        analogWrite(redrgb, 0);     // red rgb light is turn off
        analogWrite(greenrgb, 255); // green rgb light is turn on
        analogWrite(bluergb, 0);    // blue rgb light is turn off
        delay(1000);                // delay of 1 sec
        analogWrite(redrgb, 0);     // red rgb light is turn off
        analogWrite(greenrgb, 0);   // green rgb light is turn off
        analogWrite(bluergb, 255);  // blue rgb light is turn on
        delay(1000);                // delay of 1 sec

        analogWrite(redrgb, 255);
        analogWrite(greenrgb, 0);
        analogWrite(bluergb, 0);
        delay(1000); // delay of 1 sec
        analogWrite(redrgb, 0);
        analogWrite(greenrgb, 255);
        analogWrite(bluergb, 0);
        delay(1000); // delay of 1 sec
        analogWrite(redrgb, 0);
        analogWrite(greenrgb, 0);
        analogWrite(bluergb, 255);
        delay(1000); // delay of 1 sec

        analogWrite(redrgb, 255);
        analogWrite(greenrgb, 0);
        analogWrite(bluergb, 0);
        delay(1000); // delay of 1 sec
        analogWrite(redrgb, 0);
        analogWrite(greenrgb, 255);
        analogWrite(bluergb, 0);
        delay(1000); // delay of 1 sec
        analogWrite(redrgb, 0);
        analogWrite(greenrgb, 0);
        analogWrite(bluergb, 255);
        delay(1000); // delay of 1 sec

        analogWrite(redrgb, 255);
        analogWrite(greenrgb, 0);
        analogWrite(bluergb, 0);
        delay(1000); // delay of 1 sec
        analogWrite(redrgb, 0);
        analogWrite(greenrgb, 255);
        analogWrite(bluergb, 0);
        delay(1000); // delay of 1 sec
        analogWrite(redrgb, 0);
        analogWrite(greenrgb, 0);
        analogWrite(bluergb, 255);
        delay(1000); // delay of 1 sec
    }
    else
    {
        digitalWrite(bluelight, LOW); // blue light is turn off
        digitalWrite(redlight, HIGH); // red light is turn off
        analogWrite(redrgb, 0);       // red rgb light is turn off
        analogWrite(greenrgb, 0);     // green rgb light is turn off
        analogWrite(bluergb, 0);      // blue rgb light is turn off
        delay(500);                   // delay of 500 millisec
        noTone(buzzer);               // no sound will be produce in buzzer.
        lcd.clear();                  // to clear screen after displaying
        lcd.setCursor(0, 0);          // to display below content in 0,0.
        lcd.print("SAFE");
        delay(500);          // delay of 500 millisec
        lcd.clear();         // to clear screen after displaying
        lcd.setCursor(0, 1); // to display below content in 0,1.
        lcd.print("ALL CLEAR");
        delay(500);            // delay of 500 millisec
        analogWrite(motor, 0); // to stop the motor
    }

    // ending if else statement.
}

// END

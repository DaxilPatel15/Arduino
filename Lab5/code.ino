int blueLedPin = 13; // The blue LED is connected pin 13 of the Arduino.
int button1Pin = 2;  // The SW1 button is connect to pin 2 of the Arduino.
int redLedPin = 12;  // The blue LED is connected pin 12 of the Arduino.
int button2Pin = 3;  // The SW2 button is connect to pin 3 of the Arduino.

void setup()
{                                // The Setup function runs once
    pinMode(blueLedPin, OUTPUT); // Setup blue LED pin as an output pin.
    pinMode(button1Pin, INPUT);  // Setup button1 pin as an input pin.
    pinMode(redLedPin, OUTPUT);  // Setup blue LED pin as an output pin.
    pinMode(button2Pin, INPUT);  // Setup button2 pin as an input pin.
}
void loop()
{
    //level1();
    //level2();
}

void level1()
{
    // The loop function runs forever.
    if (digitalRead(button1Pin) == HIGH)
    {                                   // Check to see if button1 is pressed.
        digitalWrite(blueLedPin, HIGH); // Turn on the blue LED.
    }
    else
    {
        digitalWrite(blueLedPin, LOW); // Turn off the blue LED.
    }
}
void level2()
{
    if (digitalRead(button2Pin) == HIGH)
    {                                  // Check to see if button1 is pressed.
        digitalWrite(redLedPin, HIGH); // Turn on the red LED.
    }
    else
    {
        digitalWrite(redLedPin, LOW); // Turn off the red LED.
    }
}

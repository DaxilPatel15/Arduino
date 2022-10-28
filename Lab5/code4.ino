int redRGBPin = 9;    // The red RGB LED is connected pin 9 of the Arduino.
int blueRGBPin = 10;  // The blue RGB LED is connected pin 10 of the Arduino.
int greenRGBPin = 11; // The green RGB LED is connected pin 11 of the Arduino.
int redPin = 13;      // The red LED is connected pin 13 of the Arduino.
int greenPin = 12;    // The green LED is connected pin 12 of the Arduino.
int button1Pin = 2;   // The SW1 button is connect to pin 2 of the Arduino.
int button2Pin = 3;   // The SW2 button is connect to pin 3 of the Arduino.

int start1 = 0; // variable
int start = 0;  // variable
int start2 = 0;

void setup()
{
    pinMode(redRGBPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(greenRGBPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(blueRGBPin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
    pinMode(redPin, OUTPUT);      // Setup red LED pin as an output pin.
    pinMode(greenPin, OUTPUT);    // Setup green LED pin as an output pin.
    pinMode(button1Pin, INPUT);   // Setup button1 pin as an input pin.
    pinMode(button2Pin, INPUT);   // Setup button2 pin as an input pin.
}

void loop()
{
    if (digitalRead(button1Pin) == HIGH)
    {

        if (start == 0)
        {
            start = 1;
        }

        else if (start == 1)
        {
            start = 2;
        }
        else if (start == 2)
        {
            start = 1;
        }

        if (start == 0)
        {
            digitalWrite(redPin, LOW);
            digitalWrite(greenPin, LOW);

            delay(500);
        }
        if (start == 1)
        {
            digitalWrite(redPin, LOW);
            digitalWrite(greenPin, HIGH);

            delay(500);
        }
        if (start == 2)
        {
            digitalWrite(redPin, HIGH);
            digitalWrite(greenPin, LOW);

            delay(500);
        }
    }

    // button 2

    if (digitalRead(button2Pin) == HIGH)
    {
        if (start1 == 0)
        {
            start1 = 1;
            delay(500);
        }
        else if (start1 == 1)
        {
            start1 = 0;
            delay(500);
        }
        else if (start1 = 2)
        {
            start1 = 0;
            delay(500);
        }
        else if (start1 = 3)
        {
            start1 = 0;
            delay(500);
        }
    }

    if (start1 == 1)
    {
        digitalWrite(redRGBPin, HIGH);
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }
    else if (start1 == 2)
    {
        digitalWrite(redRGBPin, LOW);
        digitalWrite(greenRGBPin, HIGH);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }
    else if (start1 == 3)
    {
        digitalWrite(redRGBPin, LOW);
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, HIGH);
        delay(500);
    }

    if (start1 == 1)
    {
        start1 = 2;
        delay(500);
    }
    else if (start1 == 2)
    {
        start1 = 3;
        delay(500);
    }
    else if (start1 == 3)
    {
        start1 = 1;
        delay(500);
    }
    else if (start1 == 1)
    {
        start1 = 0;
        delay(500);
    }
    else if (start1 == 2)
    {
        start1 = 0;
        delay(500);
    }
    else if (start1 == 3)
    {
        start1 = 0;
        delay(500);
    }

    if (start1 == 0)
    {
        digitalWrite(redRGBPin, LOW);
        digitalWrite(greenRGBPin, LOW);
        digitalWrite(blueRGBPin, LOW);
        delay(500);
    }
}

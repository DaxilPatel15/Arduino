int redPin = 9;     // The red LED is connected pin 9 of the Arduino.
int bluePin = 10;   // The blue LED is connected pin 10 of the Arduino.
int greenPin = 11;  // The green LED is connected pin 11 of the Arduino.
int button1Pin = 2; // The SW1 button is connect to pin 2 of the Arduino.
int button2Pin = 3; // The SW2 button is connect to pin 3 of the Arduino.
int yup = 0;        // variable

void setup()
{
    pinMode(redPin, OUTPUT);    // Setup red LED pin as an output pin.
    pinMode(bluePin, OUTPUT);   // Setup blue LED pin as an output pin.
    pinMode(greenPin, OUTPUT);  // Setup green LED pin as an output pin.
    pinMode(button1Pin, INPUT); // Setup button1 pin as an input pin.
    pinMode(button2Pin, INPUT); // Setup button2 pin as an input pin.
}

void loop()
{

    //level3();
}

void level3()
{
    if (digitalRead(button1Pin) == HIGH)
    {

        yup = 1;    // for button1 to turn on RGB light.
        delay(300); // delay of 300 millisecond.
    }

    if (digitalRead(button2Pin) == HIGH)
    {

        yup = 0; // for button 2 to turn off RGB light.

        delay(300); // delay of 300 millisecond.
    }

    if (yup == 0)
    {                                // no light will turn on
        digitalWrite(redPin, LOW);   // red light will turn of.
        digitalWrite(greenPin, LOW); // green light will turn of.
        digitalWrite(bluePin, LOW);  // blue light will turn of.
    }

    if (yup == 1)
    {
        digitalWrite(redPin, HIGH);  // red light will turn on.
        digitalWrite(greenPin, LOW); // green light will turn of.
        digitalWrite(bluePin, LOW);  // blue light will turn of.
        delay(500);
    }
    else if (yup == 2)
    {
        digitalWrite(redPin, LOW);    // red light will turn of.
        digitalWrite(greenPin, HIGH); // green light will turn on.
        digitalWrite(bluePin, LOW);   // blue light will turn of.
        delay(500);
    }
    else if (yup == 3)
    {
        digitalWrite(redPin, LOW);   // red light will turn of.
        digitalWrite(greenPin, LOW); // green light will turn of.
        digitalWrite(bluePin, HIGH); // blue light will turn on.
        delay(500);
    }

    if (yup == 1)
    {
        yup = 2;
    }
    else if (yup == 2)
    {
        yup = 3;
    }
    else if (yup == 3)
    {
        yup = 1;
    }
}

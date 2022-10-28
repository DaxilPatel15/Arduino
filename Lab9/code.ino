#include <IRremote.h> //including infrared remote header file
int RECV_PIN = 11;    // the pin where you connect the output pin of IR sensor
IRrecv irrecv(RECV_PIN);
decode_results results;
int blueLed = 12;  // The blue LED is connected pin 12 of the Arduino.
int redLed = 13;   // the red  LED is connected pin 13 of the Arduino.
int rgbred = 10;   // The red RGB LED is connected pin 10 of the Arduino.
int rgbblue = 9;   // The blue RGB LED is connected pin 9 of the Arduino.
int rgbgreen = 6;  // The green RGB LED is connected pin 6 of the Arduino.
int value = 0;     // variable.
int lighthigh = 0; // variable.
int lightlow = 3;  // variable.
void setup()
{
    Serial.begin(9600); // tp print in serial monitor.
    irrecv.enableIRIn();

    pinMode(rgbred, OUTPUT);   // pin output for rgb red.
    pinMode(rgbblue, OUTPUT);  // pin output for rgb blue.
    pinMode(rgbgreen, OUTPUT); // pin output for rgb green.
}

void loop()
{
    /// level1();
    // level2();
    // level3();
    level4();
}

// LEVEL 1

void level1()
{

    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 2295)
        {
            digitalWrite(blueLed, HIGH); // blue led is turn high.
            delay(500);                  // delay of 500 milliseconds
        }
        else
        {
            digitalWrite(blueLed, LOW); // blue led is turn low.
            delay(500);                 // delay of 500 milliseconds
        }
    }
}

// LEVEL 2

void level2()
{

    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");
        if (value == 2295)
        {
            digitalWrite(blueLed, HIGH);
            delay(500); // delay of 500 milliseconds
        }
        else if (value == -30601)
        {
            digitalWrite(redLed, HIGH);
            delay(500); // delay of 500 milliseconds
        }
        else if (value == 18615)
        {
            digitalWrite(blueLed, LOW);
        }
        else if (value == 10455)
        {
            digitalWrite(redLed, LOW);
        }
        else if (value == -22441)
        {
            digitalWrite(blueLed, HIGH);
            digitalWrite(redLed, HIGH);
            delay(500);
            digitalWrite(blueLed, LOW);
            digitalWrite(redLed, LOW);

            delay(1000); // delay of 1 seconds.

            digitalWrite(blueLed, HIGH);
            digitalWrite(redLed, HIGH);
            delay(500); // delay of 500 milliseconds
            digitalWrite(blueLed, LOW);
            digitalWrite(redLed, LOW);

            delay(1000); // delay of 1000 milliseconds
            digitalWrite(blueLed, HIGH);
            digitalWrite(redLed, HIGH);
            delay(500); // delay of 500 milliseconds
            digitalWrite(blueLed, LOW);
            digitalWrite(redLed, LOW);
        }
    }
}

// LEVEL 3

void level3()
{

    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println(lighthigh);
        if (value == 2295)
        {
            lighthigh++; // to incerse the value

            if (lighthigh == 1)
            { // for button 1
                analogWrite(rgbgreen, 30);
            }
            else if (lighthigh == 2)
            { // for button 2

                analogWrite(rgbgreen, 111);
            }
            else if (lighthigh == 3)
            { // for button 3
                analogWrite(rgbgreen, 255);
            }
            else if (lighthigh == 4)
            { // for button 4
                lighthigh = 3;
            }
        }

        if (value == -30601)
        {
            lightlow--;
            Serial.println(lightlow);

            if (lightlow == 2)
            {
                analogWrite(rgbgreen, 111);
            }
            else if (lightlow == 1)
            {

                analogWrite(rgbgreen, 30);
            }

            else if (lightlow == 0)
            {
                lightlow = 1;
            }
        }

        if (value == 18615)
        {

            if (lighthigh == 1)
            {

                analogWrite(rgbblue, 30);
            }
            else if (lighthigh == 2)
            {
                analogWrite(rgbblue, 111);
            }
            else if (lighthigh == 3)
            {
                analogWrite(rgbblue, 255);
            }
            else if (lighthigh == 4)
            {
                lighthigh = 3;
            }

            if (lightlow == 2)
            {

                analogWrite(rgbblue, 111);
            }
            else if (lightlow == 1)
            {
                analogWrite(rgbblue, 30);
            }
            else if (lightlow == 0)
            {
                lightlow = 1;
            }
        }
    }
}

// LEVEL 4

void level4()
{
    if (irrecv.decode(&results))
    {
        value = results.value;
        Serial.println(" ");
        Serial.print("Code: ");
        Serial.println(value); // prints the value a a button press
        Serial.println(" ");
        irrecv.resume(); // Receive the next value
        Serial.println("*****************");

        if (value == 2295)
        {

            digitalWrite(rgbred, HIGH);

            digitalWrite(redLed, HIGH);
            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbred, LOW);

            digitalWrite(redLed, LOW);

            delay(500); // delay of 500 milliseconds
            digitalWrite(rgbred, HIGH);

            digitalWrite(redLed, HIGH);
            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbred, LOW);

            digitalWrite(redLed, LOW);

            delay(500); // delay of 500 milliseconds
            digitalWrite(rgbred, HIGH);

            digitalWrite(redLed, HIGH);
            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbred, LOW);

            digitalWrite(redLed, LOW);

            delay(500); // delay of 500 milliseconds
        }
        else if (value == -30601)
        {
            digitalWrite(rgbblue, HIGH);

            digitalWrite(blueLed, HIGH);
            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbblue, LOW);

            digitalWrite(blueLed, LOW);

            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbblue, HIGH);

            digitalWrite(blueLed, HIGH);
            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbblue, LOW);

            digitalWrite(blueLed, LOW);

            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbblue, HIGH);

            digitalWrite(blueLed, HIGH);
            delay(500); // delay of 500 milliseconds

            digitalWrite(rgbblue, LOW);

            digitalWrite(blueLed, LOW);

            delay(500); // delay of 500 milliseconds
        }
    }

    if (value == 18615)
    {

        digitalWrite(rgbred, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, HIGH);
        delay(500); // delay of 500 milliseconds
        digitalWrite(rgbred, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, LOW);
        delay(500); // delay of 500 milliseconds

        digitalWrite(blueLed, HIGH);

        digitalWrite(rgbred, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, HIGH);
        delay(500); // delay of 500 milliseconds
        digitalWrite(rgbred, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, LOW);
        delay(500); // delay of 500 milliseconds

        digitalWrite(blueLed, LOW);

        digitalWrite(rgbred, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, HIGH);
        delay(500); // delay of 500 milliseconds
        digitalWrite(rgbred, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, LOW);
        delay(500); // delay of 500 milliseconds

        digitalWrite(redLed, HIGH);
        digitalWrite(rgbred, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, HIGH);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, HIGH);
        delay(500); // delay of 500 milliseconds
        digitalWrite(rgbred, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbgreen, LOW);
        delay(200); // delay of 200 milliseconds
        digitalWrite(rgbblue, LOW);
        delay(500); // delay of 500 milliseconds
        digitalWrite(redLed, LOW);
    }
}

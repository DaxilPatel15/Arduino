int RGBRedPin = 9;    // The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; // The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  // The blue RGB LED is connected pin 11 of the Arduino.
int waitTime = 2000;  // Sets the amount of time to wait between color changes.
void setup()
{                                 // The Setup function runs once.
    Serial.begin(9600);           // for printing output.
    pinMode(RGBRedPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
}
void loop()
{ // The loop function runs forever.
    level1();
    // level2();
    // level3();
}

void level1()
{
    // LEVEL1

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(waitTime);               // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red
    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(waitTime);                // Wait for 2 seconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE
    // Display Magenta (Red + Blue)
    digitalWrite(RGBRedPin, HIGH);  // Turn on RED
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(waitTime);                // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);   // Turn off Red
    digitalWrite(RGBBluePin, LOW);  // Turn on BLUE
    // Display Yellow (Red + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);    // Turn off Red
    digitalWrite(RGBGreenPin, LOW);  // Turn of GREEN
    // Display Cyan (Blue + Green)
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(waitTime);                 // Wait for 2 seconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
}

void level2()
{
    // Challenge 2

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(750);                    // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red
    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750  milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(500);                     // Wait for 500 milliseconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE
    // Display Magenta (Red + Blue)
    digitalWrite(RGBRedPin, HIGH);  // Turn on RED
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(1000);                    // Wait for 1 seconds
    digitalWrite(RGBRedPin, LOW);   // Turn off Red
    digitalWrite(RGBBluePin, LOW);  // Turn on BLUE
    // Display Yellow (Red + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(500);                      // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off Red
    digitalWrite(RGBGreenPin, LOW);  // Turn of GREEN
    // Display Cyan (Blue + Green)
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    Serial.println("5 SECONDS HAS PASSED");

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(750);                    // Wait for 750 miliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red
    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(500);                     // Wait for 500 milliseconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE
    // Display Magenta (Red + Blue)
    digitalWrite(RGBRedPin, HIGH);  // Turn on RED
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(1000);                    // Wait for 1 seconds
    digitalWrite(RGBRedPin, LOW);   // Turn off RED
    digitalWrite(RGBBluePin, LOW);  // Turn on BLUE
    // Display Yellow (Red + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(500);                      // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off Red
    digitalWrite(RGBGreenPin, LOW);  // Turn of GREEN
    // Display Cyan (Blue + Green)
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    Serial.println("5 SECONDS HAS PASSED");

    // Display Red
    digitalWrite(RGBRedPin, HIGH); // Turn on RED
    delay(750);                    // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);  // Turn off Red
    // Display Green
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display Blue
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(500);                     // Wait for 500 milliseconds
    digitalWrite(RGBBluePin, LOW);  // Turn off BLUE
    // Display Magenta (Red + Blue)
    digitalWrite(RGBRedPin, HIGH);  // Turn on RED
    digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
    delay(1000);                    // Wait for 1 seconds
    digitalWrite(RGBRedPin, LOW);   // Turn off Red
    digitalWrite(RGBBluePin, LOW);  // Turn on BLUE
    // Display Yellow (Red + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(500);                      // Wait for 500 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off Red
    digitalWrite(RGBGreenPin, LOW);  // Turn of GREEN
    // Display Cyan (Blue + Green)
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
    // Display White (Red + Blue + Green)
    digitalWrite(RGBRedPin, HIGH);   // Turn on RED
    digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
    digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
    delay(750);                      // Wait for 750 milliseconds
    digitalWrite(RGBRedPin, LOW);    // Turn off RED
    digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
    digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

    Serial.println("5 SECONDS HAS PASSED");
}

void level3()

// Challenge 3

{

    for (int i = 0; i < 9; i = i + 3) // for increasing the time as 1 cycle ends for 10 cycle.
    {
        Serial.print(i);
        Serial.print(",");
        // Display Red
        digitalWrite(RGBRedPin, HIGH); // Turn on RED
        delay(i);                      // Wait for 2 seconds
        digitalWrite(RGBRedPin, LOW);  // Turn off Red
        // Display Green
        digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
        delay(i);                        // Wait for 2 seconds
        digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
        // Display Blue
        digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
        delay(i);                       // Wait for 2 seconds
        digitalWrite(RGBBluePin, LOW);  // Turn off BLUE
        // Display Magenta (Red + Blue)
        digitalWrite(RGBRedPin, HIGH);  // Turn on RED
        digitalWrite(RGBBluePin, HIGH); // Turn on BLUE
        delay(i);                       // Wait for 2 seconds
        digitalWrite(RGBRedPin, LOW);   // Turn off Red
        digitalWrite(RGBBluePin, LOW);  // Turn on BLUE
        // Display Yellow (Red + Green)
        digitalWrite(RGBRedPin, HIGH);   // Turn on RED
        digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
        delay(i);                        // Wait for 2 seconds
        digitalWrite(RGBRedPin, LOW);    // Turn off Red
        digitalWrite(RGBGreenPin, LOW);  // Turn of GREEN
        // Display Cyan (Blue + Green)
        digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
        digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
        delay(i);                        // Wait for 2 seconds
        digitalWrite(RGBBluePin, LOW);   // Turn of BLUE
        digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN
        // Display White (Red + Blue + Green)
        digitalWrite(RGBRedPin, HIGH);   // Turn on RED
        digitalWrite(RGBBluePin, HIGH);  // Turn on BLUE
        digitalWrite(RGBGreenPin, HIGH); // Turn on GREEN
        delay(i);                        // Wait for 2 seconds
        digitalWrite(RGBRedPin, LOW);    // Turn off RED
        digitalWrite(RGBBluePin, LOW);   // Turn off BLUE
        digitalWrite(RGBGreenPin, LOW);  // Turn off GREEN

        delay(1000); // delay is used to know that cycle ends
    }
}

int RGBRedPin = 9;    // The red RGB LED is connected pin 9 of the Arduino.
int RGBBluePin = 10;  // The green RGB LED is connected pin 10 of the Arduino.
int RGBGreenPin = 11; // The blue RGB LED is connected pin 11 of the Arduino.
int fadeDelay = 5;    // This is the number of milliseconds that it will take between steps
int rotationPin = A0; // The rotation sensor nt data=0; //Used to store data from sensor.
int data = 0;         // variable
int button1Pin = 2;   // The SW1 button is connect to pin 2 of the Arduino.
int start = 0;        // variable.
int incomingByte = 0;

void setup()
{                       // The Setup function runs once.
    Serial.begin(9600); // This will enable the Arduino to send data to the Serial
    // monitor.
    pinMode(RGBRedPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
    pinMode(rotationPin, INPUT);  // Setup rotation pin as an input pin.
    pinMode(button1Pin, INPUT);   // Setup button1 pin as an input pin.
}
void loop()
{
    // level1();
    // level2();
    //level3();
    // level4();
}

void level1()
{
    // The loop function runs forever.
    for (int x = 0; x <= 255; x++)
    { // Fade in red.
        analogWrite(RGBRedPin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red.
        analogWrite(RGBRedPin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in green.
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out green.
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in blue.
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out blue.
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in red and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in red and green.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red and green.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in green and blue.
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out green and blue.
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 0; x <= 255; x++)
    { // Fade in red, green and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--)
    { // Fade out red, green and blue.
        analogWrite(RGBRedPin, x);
        analogWrite(RGBGreenPin, x);
        analogWrite(RGBBluePin, x);
        delay(fadeDelay);
        Serial.println(x);
    }
}

void level2()
{

    data = analogRead(rotationPin); // for reading rotation pin.

    data = map(data, 0, 1023, 0, 255); // data mapping for brightness.

    Serial.print("Rotation value="); // printing roatation value in serial monitor.

    Serial.println(data); // printing data.

    delay(20); // delay 20 milli seconds.

    analogWrite(RGBGreenPin, data);
}

void level3()
{

    data = analogRead(rotationPin); // for reading rotation pin.
    data = map(data, 0, 1023, 0, 255);
    // using if for button1Pin
    if (digitalRead(button1Pin) == HIGH)
    {

        start++; // to increse start variable.

        // using if
        if (start > 3)
        {
            start = 1;
        }

        Serial.print("NUMBER:"); // printing number value in serial monitor
        Serial.println(start);   // printing data of start variable.
        delay(200);              // delay 200 millisecond.
    }

    // using if else
    if (start == 1)
    {
        analogWrite(RGBRedPin, data); // Red RGB light will be turn on and it`s brightness can be adjust.
    }

    else if (start == 2)
    {
        analogWrite(RGBBluePin, data); // Blue RGB light will be turn on and it`s brightness can be adjust
    }

    else if (start == 3)
    {
        analogWrite(RGBGreenPin, data); // Green RGB light will be turn on and it`s brightness can be adjust
    }
}

void level4()
{

    Serial.println("Please enter the value:R=RED G=GREEN B=BLUE"); // printing the input value for RGB light in serial monitor
    delay(300);                                                    // delay of 300 millisecond.

    while (Serial.available() == 0)
    {

        // using while to hold the printing until the button is press.
    }

    incomingByte = Serial.read();

    while (digitalRead(button1Pin) == LOW)
    {

        // using while for butoon1pin so that the code stay`s in loop.

        data = analogRead(rotationPin);
        data = map(data, 0, 1023, 0, 255); // data mapping for brightness.

        // using if else
        if (incomingByte == 82)
        {

            analogWrite(RGBRedPin, data); // Red RGB light will be turn on and it`s brightness can be adjust.Moreover,if the button is press the light will lock it`s brightness.
        }

        else if (incomingByte == 71)
        {

            analogWrite(RGBGreenPin, data); // Green RGB light will be turn on and it`s brightness can be adjust.Moreover,if the button is press the light will lock it`s brightness.
        }
        else if (incomingByte == 66)
        {

            analogWrite(RGBBluePin, data); // Blue RGB light will be turn on and it`s brightness can be adjust.Moreover,if the button is press the light will lock it`s brightness.
        }
    }
}

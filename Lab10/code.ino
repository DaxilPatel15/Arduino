#include <Servo.h>
Servo myservo;
int forward = 0; // variable
int b1 = 2;      //
int b2 = 3;
int redrgb = 9;
int bluergb = 10;
int greenrgb = 11;
void setup()
{
    myservo.attach(4);
    Serial.begin(9600); // to print the value.
    pinMode(b1, INPUT); // pin input for button1.
    pinMode(b2, INPUT); // pin input for button2.
    myservo.write(0);
    pinMode(redrgb, OUTPUT);   // pin input for red rgb.
    pinMode(bluergb, OUTPUT);  // pin input for blue rgb.
    pinMode(greenrgb, OUTPUT); // pin input for green rgb.
}
void loop()
{
    // level1();
    // level2();
    // level3();
}

// LEVEL1

void level1()
{

    myservo.write(180); // the motor will go at 180 degree
    delay(1500);
    myservo.write(0); // the motor will go at 0 degree
    delay(500);
}

// LEVEL2

void level2()
{

    if (digitalRead(b1) == HIGH)
    {

        forward++; // to increase the value of forward.

        if (forward == 0)
        {
            forward = 1;
        }

        else if (forward == 1)
        {

            myservo.write(45); // the motor will go at 45 degree
            delay(1500);       // delay of 1.5 seconds.
        }
        else if (forward == 2)
        {

            myservo.write(90); // the motor will go at 90 degree
            delay(1500);       // delay of 1.5 seconds.
        }
        else if (forward == 3)
        {

            myservo.write(135); // the motor will go at 135 degree
            delay(1500);        // delay of 1.5 seconds.
        }
        else if (forward == 4)
        {

            myservo.write(180); // the motor will go at 180 degree
            delay(1500);        // delay of 1.5 seconds.
        }
    }
    else if (digitalRead(b2) == HIGH)
    {

        forward--;

        if (forward == 4)
        {
            myservo.write(180); // the motor will go at 180 degree
            delay(1500);        // delay of 1.5 seconds.
        }
        else if (forward == 3)
        {

            myservo.write(135); // the motor will go at 135 degree
            delay(1500);        // delay of 1.5 seconds.
        }
        else if (forward == 2)
        {

            myservo.write(90); // the motor will go at 90 degree
            delay(1500);       // delay of 1.5 seconds.
        }
        else if (forward == 1)
        {

            myservo.write(45); // the motor will go at 45 degree
            delay(1500);       // delay of 1.5 seconds.
        }
        else if (forward == 0)
        {

            myservo.write(0); // the motor will go at 0 degree
            delay(1500);      // delay of 1.5 seconds.
        }
    }
}

// LEVEL3

void level3()
{

    if (forward == 0)
    {

        myservo.write(0); // the motor will go at 0 degree
        analogWrite(greenrgb, 255);
        analogWrite(bluergb, 255);
        analogWrite(redrgb, 0);
        delay(1200); // delay of 1.2 seconds.
    }

    if (digitalRead(b1) == HIGH)
    {

        forward++;

        if (forward == 0)
        {

            forward = 1;
        }

        else if (forward == 1)
        {

            myservo.write(45); // the motor will go at 45 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 0);
            analogWrite(redrgb, 0);
            delay(1200); // delay of 1.2 seconds.
        }

        else if (forward == 2)
        {

            myservo.write(90); // the motor will go at 90 degree
            analogWrite(greenrgb, 0);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 0);
            delay(1200); // delay of 1.2 seconds.
        }
        else if (forward == 3)
        {

            myservo.write(135); // the motor will go at 135 degree
            analogWrite(greenrgb, 0);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 255);
            delay(1200); // delay of 1.2 seconds.
        }
        else if (forward == 4)
        {

            myservo.write(180); // the motor will go at 180 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 0);
            analogWrite(redrgb, 255);
            delay(1200); // delay of 1.2 seconds.
        }

        else if (forward == 5)
        {

            myservo.write(180); // the motor will go at 180 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 0);
            analogWrite(redrgb, 255);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(135); // the motor will go at 135 degree
            analogWrite(greenrgb, 0);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 255);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(90); // the motor will go at 90 degree
            analogWrite(greenrgb, 0);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 0);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(45); // the motor will go at 45 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 0);
            analogWrite(redrgb, 0);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(0); // the motor will go at 0 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 0);
            delay(1500); // delay of 1.5 seconds.
        }
    }
    else if (digitalRead(b2) == HIGH)
    {

        forward++;

        if (forward == 6)
        {

            myservo.write(45); // the motor will go at 45 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 0);
            analogWrite(redrgb, 0);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(90); // the motor will go at 90 degree
            analogWrite(greenrgb, 255);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 0);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(135); // the motor will go at 135 degree
            analogWrite(greenrgb, 0);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 0);
            delay(1500); // delay of 1.5 seconds.

            myservo.write(180); // the motor will go at 180 degree
            analogWrite(greenrgb, 0);
            analogWrite(bluergb, 255);
            analogWrite(redrgb, 255);
            delay(1500); // delay of 1.5 seconds.
        }
    }
}

// END

int lightPin = A1; // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;      // This will store the data from the sensor.
int red = 12;      // the red light is connected to pin 12
int blue = 13;     // the blue light is connected to pin 13
int green = 10;    // the green light is connected to pin 11
int yellow = 11;   // the yellow light is connected to pin 10
int darkness = 40; //
int number = 15;   // for binary 15

void setup()
{                            // The Setup function runs once.
    Serial.begin(9600);      // to show information on serial monitor
    pinMode(red, OUTPUT);    // setup red light fro output colour.
    pinMode(blue, OUTPUT);   // setup blue light fro output colour.
    pinMode(green, OUTPUT);  // setup green light fro output colour.
    pinMode(yellow, OUTPUT); // setup yellow light fro output colour.
}
void loop()
{

    // level1();
    // level2();
    //level4();
}

void level1()
{
    // The loop function runs forever.
    data = analogRead(lightPin); // Read the value from the light sensor and store it in the lightData
    // variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
    delay(400);           // Wait 4 millisecond (400mS) before running again.
}

void level2()
{
    // The loop function runs forever.
    data = analogRead(lightPin); // Read the value from the light sensor and store it in the lightData
    // variable.
    data = map(data, 6, 679, 0, 100); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
                          // Wait 1 second (1000mS) before running again.

    if (data < darkness)
    {
        digitalWrite(red, HIGH);
        digitalWrite(blue, HIGH);
    }
    // As we move the Photeresistor side to the brighter side the brightness of the led decrese.
    else
    {
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
    }
}

void level4()
{
    // The loop function runs forever.
    data = analogRead(lightPin); // Read the value from the light sensor and store it in the lightData
    // variable.
    data = map(data, 6, 679, 0, 15); // map the data value to a percentage
    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.

    // to display binary number(1-2-4-8) through photoresistor side from 0 to 15 by four light

    if (data <= 0)
    { // the number is 0 so the light are kept off
        digitalWrite(green, LOW);
        digitalWrite(red, LOW);
        digitalWrite(yellow, LOW);
        digitalWrite(blue, LOW);
    }
    else if (data > 0 && data <= 1)
    { // only green is turn on because green is declare as 1.
        digitalWrite(green, HIGH);
        digitalWrite(red, LOW);
        digitalWrite(yellow, LOW);
        digitalWrite(blue, LOW);
    }
    else if (data > 1 && data <= 2)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, LOW);
        digitalWrite(yellow, HIGH); // only yellow is turn on because yellow is declare as 2.
        digitalWrite(blue, LOW);
    }
    else if (data > 2 && data <= 3)
    {
        // here 2 light are kept on high as the addition of light green and yellow is 3.
        digitalWrite(green, HIGH);
        digitalWrite(red, LOW);
        digitalWrite(yellow, HIGH);
        digitalWrite(blue, LOW);
    }
    else if (data > 3 && data <= 4)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, LOW); // only blue is turn on because blue is declare as 4.
        digitalWrite(yellow, LOW);
        digitalWrite(blue, HIGH);
    }
    else if (data > 4 && data <= 5)
    {
        digitalWrite(green, HIGH); // here 2 light are kept on high as the addition of light green and blue is 5.
        digitalWrite(red, LOW);
        digitalWrite(yellow, LOW);
        digitalWrite(blue, HIGH);
    }
    else if (data > 5 && data <= 6)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, LOW);
        digitalWrite(yellow, HIGH);
        digitalWrite(blue, HIGH); // here 2 light are kept on high as the addition of light blue and yellow is 6.
    }
    else if (data > 6 && data <= 7)
    {
        digitalWrite(green, HIGH);
        digitalWrite(red, LOW);
        digitalWrite(yellow, HIGH);
        digitalWrite(blue, HIGH); // here 3 light are kept on high as the addition of light green,yellow and blue is 7.
    }
    else if (data > 7 && data <= 8)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, HIGH); // only red is turn on because blue is declare as 8.
        digitalWrite(yellow, LOW);
        digitalWrite(blue, LOW);
    }
    else if (data > 8 && data <= 9)
    {
        digitalWrite(green, HIGH);
        digitalWrite(red, HIGH);
        digitalWrite(yellow, LOW); // here 2 light are kept on high as the addition of light green and red is 9.
        digitalWrite(blue, LOW);
    }
    else if (data > 9 && data <= 10)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, HIGH);
        digitalWrite(yellow, HIGH); // here 2 light are kept on high as the addition of light red and yellow is 10.
        digitalWrite(blue, LOW);
    }
    else if (data > 10 && data <= 11)
    {
        digitalWrite(green, HIGH);
        digitalWrite(red, HIGH);
        digitalWrite(yellow, HIGH);
        digitalWrite(blue, LOW); // here 3 light are kept on high as the addition of light green,yellow and red is 11.
    }
    else if (data > 11 && data <= 12)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, HIGH);
        digitalWrite(yellow, LOW); // here 2 light are kept on high as the addition of light red and blue is 12.
        digitalWrite(blue, HIGH);
    }
    else if (data > 12 && data <= 13)
    {
        digitalWrite(green, HIGH);
        digitalWrite(red, HIGH); // here 3 light are kept on high as the addition of light green,blue and red is 13.
        digitalWrite(yellow, LOW);
        digitalWrite(blue, HIGH);
    }
    else if (data > 13 && data <= 14)
    {
        digitalWrite(green, LOW);
        digitalWrite(red, HIGH);
        digitalWrite(yellow, HIGH); // here 3 light are kept on high as the addition of light blue,yellow and red is 14.
        digitalWrite(blue, HIGH);
    }
    else if (data > 14 && data <= 15)
    {
        digitalWrite(green, HIGH);
        digitalWrite(red, HIGH);
        digitalWrite(yellow, HIGH);
        digitalWrite(blue, HIGH); // here 4 light are kept on high as the addition of light green,yellow,red and blue is 15.
    }
}

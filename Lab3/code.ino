int rotationPin = A0; // The rotation sensor nt data=0; //Used to store data from sensor.
int slow = 1500;
int speed = 0;
int RGBRedPin = 9;
int RGBGreenPin = 10;
int RGBBluePin = 11;
int data = 0;
int incomingByte = 0;
void setup()
{                                 // The Setup function runs once.
    pinMode(RGBRedPin, OUTPUT);   // Setup red RGB LED pin as an output pin.
    pinMode(RGBGreenPin, OUTPUT); // Setup green RGB LED pin as an output pin.
    pinMode(RGBBluePin, OUTPUT);  // Setup blue RGB LED pin as an output pin.
    Serial.begin(9600);           // This will enable the Arduino to send data to the Serial
    // monitor.
    pinMode(rotationPin, INPUT);
}
void loop()
{
    // level1();
    // level2();
    // level3();
    level4();
}

void level1()
{

    // LEVEL 1

    // The loop function runs forever.
    data = analogRead(rotationPin); // Read the value from the light sensor and store it
    // in the lightData variable.
    Serial.print("Rotation value ="); // to print the ROTATION VALUE
    Serial.println(data);             // Print the data to the serial port.
    delay(1000);                      // Wait 1 second (1000mS) before running again.
}

void level2()
{

    // LEVEL 2

    data = analogRead(rotationPin); // Read the value from the light sensor and store it
    // in the lightData variable.
    Serial.print("Rotation value =");
    Serial.println(data); // Print the data to the serial port.

    speed = slow - data;   // To increase the speed as we move the dial form right to left.
    Serial.println(speed); // To print the value of speed.

    digitalWrite(RGBRedPin, HIGH); // To turn on  RED light.
    delay(speed);
    digitalWrite(RGBRedPin, LOW);   // To turn off RED light
    digitalWrite(RGBBluePin, HIGH); // TO turn on BLUE light.
    delay(speed);
    digitalWrite(RGBBluePin, LOW);   // To turn off BLUE light.
    digitalWrite(RGBGreenPin, HIGH); // TO turn on GREEN light.
    delay(speed);
    digitalWrite(RGBGreenPin, LOW); // To turn off GREEN light.
}

void level3()
{
    // LEVEL 3

    // Showing ROYGBP light through rotating the dial .

    data = analogRead(rotationPin);
    if (data < 150)
    {
        analogWrite(RGBRedPin, 255); // 0-150 to show RED light.
        analogWrite(RGBGreenPin, 0);
        analogWrite(RGBBluePin, 0);
    }
    else if (data >= 150 && data < 300)
    {
        analogWrite(RGBRedPin, 255);  // 150-300 to show ORANGE light.
        analogWrite(RGBGreenPin, 10); // Mixture of red-255 and green-10 gives ORANGE
        analogWrite(RGBBluePin, 0);
    }
    else if (data >= 300 && data < 450)
    {
        analogWrite(RGBRedPin, 255);   // 300-450 to show YELLOW light.
        analogWrite(RGBGreenPin, 255); // Mixture of red-255 and green-255 gives YELLOW.
        analogWrite(RGBBluePin, 0);
    }
    else if (data >= 450 && data < 600)
    {
        analogWrite(RGBRedPin, 0); // 450-600 to show GREEN light.
        analogWrite(RGBGreenPin, 255);
        analogWrite(RGBBluePin, 0);
    }
    else if (data >= 600 && data < 750)
    {
        analogWrite(RGBBluePin, 255); // 600-750 to show BLUE light.
        analogWrite(RGBRedPin, 0);
        analogWrite(RGBGreenPin, 0);
    }
    else if (data >= 750 && data < 950)
    {
        analogWrite(RGBRedPin, 155); // 750-950 to show PURPLE light.
        analogWrite(RGBGreenPin, 0); // Mixture of red-155 and blue-255 gives PURPLE.
        analogWrite(RGBBluePin, 255);
    }
}

void level4()

{
    // LEVEL 4

    Serial.println("\nPlease input any combination of R, G or B letters");
    delay(3000); // delay 3 sec

    while (Serial.available() > 0)
    {
        // read the incoming byte:
        incomingByte = Serial.read();

        if (incomingByte == 82)
        {
            analogWrite(RGBRedPin, 255);
            analogWrite(RGBGreenPin, 0);
            analogWrite(RGBBluePin, 0);
            Serial.print("R,"); // When type letter R RED light turn`s on.
            delay(1000);        // delay of 1 sec
        }

        if (incomingByte == 66)
        {
            analogWrite(RGBBluePin, 255);
            analogWrite(RGBRedPin, 0);
            analogWrite(RGBGreenPin, 0);
            Serial.print("B,"); // When type letter B BLUE light turn`s on.
            delay(1000);        // delay of 1 sec
        }
        if (incomingByte == 71)
        {
            analogWrite(RGBGreenPin, 255);
            analogWrite(RGBRedPin, 0);
            analogWrite(RGBBluePin, 0);
            Serial.print("G,"); // When type letter G GREEN light turn`s on.
            delay(1000);        // delay of 1 sec
        }
    }
}

int lightPin = A1; // The light sensor is plugged into pin A1 of the Arduino.
int data = 0;      // This will store the data from the sensor.
int red = 9;       // the red light is connected to pin 9.
int green = 10;    // the green light is connected to pin 10.
int blue = 11;     // the blue light is connected to pin 11.
int bright = 100;
int mid = 85;
int dark = 45;
void setup()
{ // The Setup function runs once.
    Serial.begin(9600);
    pinMode(red, OUTPUT);   // setup red light fro output colour.
    pinMode(green, OUTPUT); // setup green light fro output colour.
    pinMode(blue, OUTPUT);  // setup blue light fro output colour.
}
void loop()
{
    level3();
}

void level3()
{
    // The loop function runs forever.
    data = analogRead(lightPin); // Read the value from the light sensor and store it in the lightData
    // variable.

    Serial.print("Light value =");
    Serial.println(data); // Print the data to the serial port.
    delay(100);           // Wait 100 millisecond (100mS) before running again.

    if (data < dark)
    { // from range 0-45 the red RGB will turn on.
        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 0);
    }
    else if (data > dark && data < mid)
    {
        analogWrite(red, 0); // from range 45-85 the blue RGB will turn on.
        analogWrite(green, 0);
        analogWrite(blue, 255);
    }
    else if (data > mid && data < bright)
    {
        analogWrite(green, 255); // from range 85-100 the green RGB will turn on.
        analogWrite(blue, 0);
        analogWrite(red, 0);
    }
}

/*************************************************
 * Public Constants
 *************************************************/
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978

int buzzerPin = 5;  // The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2; // The SW1 button is connect to pin 2 of the Arduino.
int REDLED = 9;     // RED RGB LIGHT.
int GREENLED = 10;  // GREEN RGB LIGHT.
int BLUELED = 11;   // BLUE RGB LIGHT.
int notes[] = {NOTE_B5, NOTE_A4, NOTE_G5, NOTE_A4, NOTE_B5, NOTE_B4, NOTE_B5, NOTE_A4, NOTE_B4};
int duration[] = {408, 408, 408, 408, 408, 408, 408, 408, 408};
int colour;           // variable
int incomingByte = 0; // incomingbyte.
void setup()
{                               // The Setup function runs once.
    pinMode(buzzerPin, OUTPUT); // Setup buzzer pin as an input pin.
    pinMode(button1Pin, INPUT); // Setup button1 pin as an input pin.
    pinMode(REDLED, OUTPUT);    // Setup red LED pin as an output pin.
    pinMode(GREENLED, OUTPUT);  // Setup green led pin as an input pin..
    pinMode(BLUELED, OUTPUT);   // Setup blue led pin as an input pin..
    randomSeed(analogRead(A0)); // RANDOM LIGHT SHOW.
    Serial.begin(9600);         // FOR PRINTING.
}
void loop()
{ // The loop function runs forever.
    // level1();
    // level2();
    level3();
    // level4();
}

// LEVEL1

void level1()
{

    if (digitalRead(button1Pin) == HIGH)
    {                              // Check to see if button1 is pressed.
        tone(buzzerPin, 1000, 50); // Play a tone of 1000Hz for 50 milliseconds.
    }
}

// level2

void level2()
{

    if (digitalRead(button1Pin) == HIGH)
    { // Check to see if button1 is pressed.
        tone(buzzerPin, NOTE_B5, 408);
        delay(408);
        tone(buzzerPin, NOTE_A4, 408);
        delay(408);
        tone(buzzerPin, NOTE_G5, 408);
        delay(408);
        tone(buzzerPin, NOTE_A4, 408);
        delay(408);
        tone(buzzerPin, NOTE_B5, 408);
        delay(408);
        tone(buzzerPin, NOTE_B4, 408);
        delay(408);
        tone(buzzerPin, NOTE_B5, 408);
        delay(408);
        tone(buzzerPin, NOTE_A4, 408);
        delay(408);
        tone(buzzerPin, NOTE_B4, 408);
        delay(408);
    }
}

// level3

void level3()
{

    if (digitalRead(button1Pin) == HIGH)
    {

        for (int j = 0; j < (sizeof(notes) / sizeof(notes[0])); j++)
        {

            colour = random(9, 12); // for getting random colour
            tone(buzzerPin, notes[j], duration[j]);
            digitalWrite(colour, HIGH);
            delay(duration[j] + 20);
            digitalWrite(colour, LOW);
        }
    }
}

// level4

void level4()
{

    if (digitalRead(button1Pin) == HIGH)
    {

        Serial.println("Please type the number to play the tone!"); // for displaying the statement.
        Serial.println("1.Song 1");
        Serial.println("2.Song 2");
        Serial.println("3.Song 3");
        delay(300); // delay

        while (Serial.available() == 0)
        {

            // using while to hold the printing until the button is press.
        }

        incomingByte = Serial.read();

        Serial.print("PLAYING:"); // displaying the value we enter.
        Serial.println(incomingByte);

        if (incomingByte == 49)
        {

            tone(buzzerPin, NOTE_D4, 408);
            delay(300); // delay
            tone(buzzerPin, NOTE_A4, 408);
            delay(300); // delay
            tone(buzzerPin, NOTE_E4, 408);
            delay(300); // delay
            tone(buzzerPin, NOTE_F4, 408);
            delay(300); // delay
            tone(buzzerPin, NOTE_FS1, 408);
            delay(300); // delay
            tone(buzzerPin, NOTE_FS1, 408);
        }
        else if (incomingByte == 50)
        {

            tone(buzzerPin, NOTE_A3, 408);
            delay(200); // delay
            tone(buzzerPin, NOTE_B3, 408);
            delay(200); // delay
            tone(buzzerPin, NOTE_C3, 408);
            delay(200); // delay
            tone(buzzerPin, NOTE_D3, 408);
        }
        else if (incomingByte == 51)
        {

            tone(buzzerPin, NOTE_F3, 408);
            delay(500); // delay
            tone(buzzerPin, NOTE_C2, 408);
            delay(500); // delay
            tone(buzzerPin, NOTE_D5, 408);
            delay(500); // delay
            tone(buzzerPin, NOTE_E6, 408);
            delay(500); // delay
            tone(buzzerPin, NOTE_E1, 408);
        }
    }
}

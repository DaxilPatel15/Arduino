// variables
int blueLED = 12;
int redLED = 13;
void setup()
{
    pinMode(blueLED, OUTPUT);
    pinMode(redLED, OUTPUT);
}
void loop()
{ // plz enter level
  // level1();
  // level2();
  // level3();
}

// LEVEL 1

void level1()
{
    // Slow flash 3 times(BLUE)
    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    // Fast flash 3 times(BLUE)
    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}

// LEVEL2
void level2()
{
    // Letter D(Dash-Dot-Dot)(BLUE)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    // Letter P(Dot-Dash-Dash-Dot)(BLUE)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)

    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}
// LEVEL3(Light simulation of emergency vehicle)

void level3()
{
    digitalWrite(blueLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(redLED, LOW);
    delay(700); // Wait for 700 millisecond(s)

    digitalWrite(redLED, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(blueLED, LOW);
    delay(700); // Wait for 700 millisecond(s)
}

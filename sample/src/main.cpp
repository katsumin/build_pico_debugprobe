#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

#define PICO_LED 25

void setup()
{
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  Serial.begin(115200);
  while (!Serial && millis() < 5000)
    ;

  pinMode(PICO_LED, OUTPUT);
  digitalWrite(PICO_LED, HIGH);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(PICO_LED, LOW);
  delay(500);
  digitalWrite(PICO_LED, HIGH);
  delay(500);
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}
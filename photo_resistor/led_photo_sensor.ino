#include <stdio.h>


# make pin 13 output for the led
# make pin A0 receive input from the photoresistor
void setup()  {
  // setup code
  Serial.begin(9600); // begin serial read
  pinMode(13, OUTPUT); // Led pin 13 as output for led
  pinMode(A0, INPUT); // resistor read input value
  }


# read anolog input from photoresistor
# write digital output to led
void loop() { 
  // main code
  digitalWrite(13, LOW);
  if(analogRead(A0)<1)  {
    digitalWrite(13, HIGH);
    }
  else  {
    digitalWrite(13, LOW);
    }
  }

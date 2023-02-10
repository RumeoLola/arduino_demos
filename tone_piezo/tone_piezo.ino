#include <stdio.h>


# set pin 8 as an output
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}


# the tone takes 3 arguments
# pin, frequency, & time
void loop() {
  // put your main code here, to run repeatedly:
  tone(8, 980, 1000);
  delay(1000);
  tone(8, 1047, 1000);
  delay(1000);

}

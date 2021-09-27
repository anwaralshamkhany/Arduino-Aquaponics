#include <Servo.h>
Servo feeder;  // create servo object to control a servo
int pos = 0;   // saves location of the 0 postion/ origin

void setup() {
  feeder.attach(10);
}

void loop() {
  delay(10000);
  for (pos = 0; pos <= -720; pos += 1) { // goes from 0 degrees to -720 degree (change this number in future to adjust for growing fish
    feeder.write(pos);              // servo executes the line above which is to go from 0 to -720
    delay(14);                      // controls the speed the servo turns (bigger value = slower)
  }
    delay(43200000);                // wait the 12 hours before the feeder turns on again
  }

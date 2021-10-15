#include <Servo.h>
Servo feeder;  // create servo object to control a servo
int pos = 0;   // saves location of the 0 postion/ origin

void setup() {
  feeder.attach(10);
}

void loop() {
  feeder.write(-100);  // goes counterclockwise at a speed of -100 (max is -18)
  delay(4000);       // controls the amount of time the servo is on for. More time more rotations
  feeder.write(90); // Sets Servo speed to zero
  delay(43200000);  // wait the 12 hours before the feeder turns on again
  }

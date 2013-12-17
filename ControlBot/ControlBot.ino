#include <Servo.h>

Servo frontRight;
Servo frontLeft;
Servo backRight;
Servo backLeft;

void setup() {
  frontRight.attach(23);
  frontLeft.attach(24);
  backRight.attach(25);
  backLeft.attach(26);
  frontRight.writeMicroseconds(1575);
  frontLeft.writeMicroseconds(1425);
  backRight.writeMicroseconds(1550);
  backLeft.writeMicroseconds(1425);
}

void loop() {
  delay(3000);
  frontRight.detach();
  frontLeft.detach();
  backRight.detach();
  backLeft.detach();
}

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield MotorShield = Adafruit_MotorShield();
Adafruit_DCMotor *backLeft = MotorShield.getMotor(1);
Adafruit_DCMotor *backRight = MotorShield.getMotor(2);
Adafruit_DCMotor *frontRight = MotorShield.getMotor(3);
Adafruit_DCMotor *frontLeft = MotorShield.getMotor(4);

void setup() {
  MotorShield.begin();
}

void goForward(float feet) {
  uint8_t on = 255;
  uint8_t off = 0;
  backLeft->run(BACKWARD);
  backRight->run(FORWARD);
  frontLeft->run(BACKWARD);
  frontRight->run(FORWARD);
  backLeft->setSpeed(on);
  backRight->setSpeed(on);
  frontLeft->setSpeed(on);
  frontRight->setSpeed(on);
  delay(feet*654.5454);
  backLeft->setSpeed(off);
  backRight->setSpeed(off);
  frontLeft->setSpeed(off);
  frontRight->setSpeed(off);
}

void goBackward(float feet) {
  uint8_t on = 255;
  uint8_t off = 0;
  backLeft->run(FORWARD);
  backRight->run(BACKWARD);
  frontLeft->run(FORWARD);
  frontRight->run(BACKWARD);
  backLeft->setSpeed(on);
  backRight->setSpeed(on);
  frontLeft->setSpeed(on);
  frontRight->setSpeed(on);
  delay(feet*654.5454);
  backLeft->setSpeed(off);
  backRight->setSpeed(off);
  frontLeft->setSpeed(off);
  frontRight->setSpeed(off);
}

void turnLeft(float seconds) {
  uint8_t on = 255;
  uint8_t middle= 50;
  uint8_t off = 0;
  backLeft->run(BACKWARD);
  backRight->run(FORWARD);
  frontLeft->run(BACKWARD);
  frontRight->run(FORWARD);
  backLeft->setSpeed(middle);
  frontLeft->setSpeed(middle);
  backRight->setSpeed(on);
  frontRight->setSpeed(on);
  delay(seconds*1000);
  backLeft->setSpeed(off);
  backRight->setSpeed(off);
  frontLeft->setSpeed(off);
  frontRight->setSpeed(off);
}

void turnRight(float seconds) {
  uint8_t on = 255;
  uint8_t middle =50;
  uint8_t off = 0;
  backLeft->run(BACKWARD);
  backRight->run(FORWARD);
  frontLeft->run(BACKWARD);
  frontRight->run(FORWARD);
  backLeft->setSpeed(on);
  frontLeft->setSpeed(on);
  backRight->setSpeed(middle);
  frontRight->setSpeed(middle);
  delay(seconds*1000);
  backLeft->setSpeed(off);
  backRight->setSpeed(off);
  frontLeft->setSpeed(off);
  frontRight->setSpeed(off);
}

void rotateLeft(float seconds) {
  uint8_t on = 255;
  uint8_t middle = 150;
  uint8_t off = 0;
  backLeft->run(FORWARD);
  backRight->run(FORWARD);
  frontLeft->run(FORWARD);
  frontRight->run(FORWARD);
  backLeft->setSpeed(off);
  frontLeft->setSpeed(off);
  backRight->setSpeed(on);
  frontRight->setSpeed(on);
  delay(seconds*1000);
  backLeft->setSpeed(off);
  backRight->setSpeed(off);
  frontLeft->setSpeed(off);
  frontRight->setSpeed(off);
}

void rotateRight(float seconds) {
  uint8_t on = 255;
  uint8_t middle = 150;
  uint8_t off = 0;
  backLeft->run(BACKWARD);
  backRight->run(BACKWARD);
  frontLeft->run(BACKWARD);
  frontRight->run(BACKWARD);
  backLeft->setSpeed(on);
  frontLeft->setSpeed(on);
  backRight->setSpeed(off);
  frontRight->setSpeed(off);
  delay(seconds*1000);
  backLeft->setSpeed(off);
  backRight->setSpeed(off);
  frontLeft->setSpeed(off);
  frontRight->setSpeed(off);
}

void loop() {
  
}

#include <Servo.h>
#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield MotorShield = Adafruit_MotorShield();
Adafruit_DCMotor *backLeft = MotorShield.getMotor(1);
Adafruit_DCMotor *backRight = MotorShield.getMotor(2);
Adafruit_DCMotor *frontRight = MotorShield.getMotor(3);
Adafruit_DCMotor *frontLeft = MotorShield.getMotor(4);
Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(10);
  servo2.attach(9);
  MotorShield.begin();
  backLeft->run(BACKWARD);
  backRight->run(FORWARD);
  frontLeft->run(BACKWARD);
  frontRight->run(FORWARD);
  backLeft->setSpeed(255);
  backRight->setSpeed(255);
  frontLeft->setSpeed(255);
  frontRight->setSpeed(255);
}

void loop() {
  delay(500);
  servo1.write(120);
  servo2.write(120);
  delay(200);
  servo1.write(0);
  servo2.write(0);
}

#include <Servo.h>

Servo x;
Servo y;

void turnCamera(int newX, int newY) {
  x.write(graph(newX));
  y.write(graph(newY));
}

int graph(int input) {
  int output = map(input, -90, 90, 0, 180);
  return (output);
}

void setup() {
  x.attach(10);
  y.attach(9);
}

void loop() {
  turnCamera(40, 40);
  delay(300);
  turnCamera(40, -40);
  delay(300);
  turnCamera(-40, -40);
  delay(300);
  turnCamera(-40, 40);
  delay(300);
  turnCamera(0, 0);
  delay(300);
}


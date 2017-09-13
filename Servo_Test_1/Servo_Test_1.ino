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
  for (int i = -80; i <= 80; i++) {
    turnCamera(i, 0);
    delay(25);
  }
  delay(100);
  
  for (int i = 80; i >= -80; i--) {
    turnCamera(i, 0);
    delay(25);
  }
  delay(100);
}

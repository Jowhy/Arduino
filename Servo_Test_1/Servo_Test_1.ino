#include <Servo.h>

Servo x;
Servo y;

void turnCamera(int newX, int newY) {
  x.write(graph(newX));
  y.write(graph(newY));
}

int graph(int input) {
  int output = map(input, -90, 90, 0, 180);
  //Serial.println("--");
  //Serial.println(input);
  //Serial.println(output);
  return (output);
}

void setup() {
  x.attach(10);
  y.attach(9);
  Serial.begin(9600);
}

void loop() {
  turnCamera(0, 0);
  delay(1000);
  
  turnCamera(90, 90);
  delay(1000);
  
  turnCamera(-90, -90);
  delay(1000);
}

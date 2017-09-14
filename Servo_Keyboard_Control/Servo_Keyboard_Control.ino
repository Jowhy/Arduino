#include <Servo.h>
 
Servo x;
Servo y;
 
int xpos = 0;
int ypos = 0;
 
void setup() 
{ 
  Serial.begin(9600);
  x.attach(10);
  y.attach(9);
  x.write(90);
  y.write(90);
} 
 
void loop() 
{
  if (Serial.available()) {
    char ch = Serial.read();
    
    if (ch == 'a') {
      if (xpos < 170) {
        xpos += 5;
      }
    } else if (ch == 'd') {
      if (xpos > 10) {
        xpos -= 5;
      }
    } else if (ch == 's') {
      // Make sure not to exceed the mechanical limitation.
      if (ypos < 170) {
        ypos += 5;
      }
    } else if (ch == 'w') {
      // Make sure not to exceed the mechanical limitation.
      if (ypos > 10) {
        ypos -= 5;
      }
    }
    
    x.write(xpos);
    y.write(ypos);
    delay(100);
  }
}

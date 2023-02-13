#include <Servo.h>

int width = 640, height = 480;  
int xpos = 180;

Servo srv;

void setup() {
  Serial.begin(9600);
  srv.attach(5);
}
const int angle = 2;  
 
 
void loop() {
  if (Serial.available() > 0)
  {
    int x_mid, y_mid;
    if (Serial.read() == 'X')
    {
      x_mid = Serial.parseInt();
      if (Serial.read() == 'Y')
        y_mid = Serial.parseInt();
    }
 
  int xo = map(x_mid, 350,400, 0,180);
    srv.write(xo);
  }
}

#include <ESP32Servo.h>
#define servo 25     //declaracion del servo
Servo s;              //servo x2


void setup() {
  // put your setup code here, to run once:
  pinMode(servo, OUTPUT);
  s.attach(servo);
  s.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  s.write(0);
  delay(1000); // this speeds up the simulation
  s.write(180);
  delay(1000);
}

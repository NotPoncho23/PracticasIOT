#include <Servo.h>
#define led 3
#define ser 4
#define trig 5
#define echo 6
Servo s;
int distancia, tiempo;

void setup() {
  s.attach(ser);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(led, OUTPUT);
  s.write(0);
}

void loop() {
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.4;

  if (distancia < 30) {
    s.write(180);
    digitalWrite(led, HIGH);
    delay(1000);
    
  }else if(distancia >= 30){ 
    s.write(0);
    digitalWrite(led, LOW);
    delay(10);
    }
  delay(100);
}

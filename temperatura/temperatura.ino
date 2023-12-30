#include <Servo.h>
#define led 3
#define buzzer 4
#define ser 5
Servo s;
int sens;
float temp;

void setup() {
  s.attach(ser);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ser, OUTPUT);
  s.write(0);
}

void loop() {
  sens = analogRead(A6);
  temp = ((sens * 5000.0)/1023)/10;
  Serial.println(temp, 1);
  delay(1000);

  if (temp >= 26) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    s.write(180);
    delay(500);
  }else{
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    s.write(0);
    delay(500);
  }
  delay(100);
}

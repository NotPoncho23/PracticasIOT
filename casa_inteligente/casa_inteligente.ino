#include <ESP32Servo.h>
#include <DHT.h>
#define ledGas 13     //led sensor gas
#define ledProx 10    //Este no se usa
#define buzzer 27     //declaracion del buzzer
#define servo 32      //declaracion del servo
#define rele 25       //declaracion del rele
#define sensorPin 26  //sensor de gas
#define temp 14       //sensor de temperatura
#define DHTTYPE DHT11 //sensor de temperatura x2

Servo s;              //servo x2

DHT dht(temp, DHTTYPE);// temperatura x3
int sens, tiempo, distancia;  //variables de apoyo
float temp;

void setup() {
  pinMode(ledGas, OUTPUT);
  pinMode(ledProx, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(servo, OUTPUT);
  pinMode(rele, OUTPUT);
  s.attach(servo);
  Serial.begin(115200);
  s.write(0);
  dht.begin();
}

void loop() {
  //dist();
  digitalWrite(rele, HIGH);
  temperatura();
  sensorGas();
  
}
void temperatura() {
  // put your main code here, to run repeatedly:
  double t = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" *C ");
  delay(1000);
  if(t > 25){
    digitalWrite(ledGas, HIGH);
    delay(2500);
  }else{
    digitalWrite(ledGas, LOW);
    delay(200);
  }
}

/*void dist(){
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.4;

  if (distancia > 50) {
    digitalWrite(ledProx, LOW);
  }else{
    digitalWrite(ledProx, HIGH);
  }
}*/

/*void temperatura(){
  sens = analogRead(14);
  temp = ((sens * 5000.0)/1023)/10;
  Serial.println(temp, 1);
  delay(1000);

  if (temp >= 500) {
    s.write(180);
    delay(500);
  }else{
    s.write(0);
    delay(500);
  }
}*/

void sensorGas(){
  int sensorPin = analogRead(Gas_analog);
  //int gassensorDigital = digitalRead(Gas_digital);

  Serial.print("Gas Sensor: ");
  Serial.print(sensorPin);
  Serial.print("\t");
  //Serial.print("Gas Class: ");
  //Serial.print(gassensorDigital);
 // Serial.print("\t");
  Serial.print("\t");

  if(sensorPin > 15){
    digitalWrite(rele, HIGH);
    digitalWrite(ledGas, HIGH);
    s.write(180);
    for (int i=0; i<=9; i++){
    tone (8, 400, 100);
    delay(500);
    }
    delay(3000);
  }else {
    digitalWrite(ledGas, LOW);
    digitalWrite(rele, LOW);
  }
  digitalWrite(rele, LOW);
}

//--------- **  librerias  ** ----------------
#include <ESP32Servo.h> //libreria servo
#include <DHT.h>        //libreria temperatura y humedad

//--------- **  variables  ** ----------------
#define ledGas 27       //led que activa el sensor de gas
#define buzzer 33       //pin del buzzer
#define sensorGas 14    //pin del sensor de gas (analogo)
#define digGas 13       //pin del sensor de gas (digital)
#define servo 23        //declaracion del servo
#define rele 21          //pin para el relay
#define temp 19         //pin para el sensor de temperatura
#define DHTTYPE DHT11   //definicion del tipo de sensor de temperatura 

//--------- **  instancias  ** ----------------
DHT dht(temp, DHTTYPE); //temperatura
Servo s;                //servo x2


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledGas, OUTPUT);
  pinMode(buzzer, OUTPUT); 
  pinMode(digGas, INPUT);
  pinMode(servo, OUTPUT);
  pinMode(rele, OUTPUT);
  dht.begin();
  s.attach(servo);
  s.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  gas();
  temperatura();
  s.write(0);
}

/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------**funcion sensor de gas**-----------------------------------------
---------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------*/

void gas(){
  int gassensorAnalog = analogRead(sensorGas);
  int gassensorDigital = digitalRead(digGas);

  Serial.print("Gas Sensor: ");
  Serial.print(gassensorAnalog);
  Serial.print("\t");
  Serial.print("Gas Class: ");
  Serial.print(gassensorDigital);
  Serial.print("\t");
  Serial.print("\t");

  if (gassensorAnalog > 2100) {
    Serial.println("Gas");
    digitalWrite (buzzer, HIGH) ; //send tone
    s.write(90);
    digitalWrite(rele, HIGH);
    digitalWrite(ledGas, HIGH);
    delay(5000);
    digitalWrite(buzzer, LOW) ;  //no tone
  }
  else{
    Serial.println("No Gas");
    digitalWrite(rele, LOW);
    s.write(0);
  }
  delay(500);
}

/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
-------------------------------**funcion sensor de temperatura**-----------------------------------------
---------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------*/

void temperatura(){
  double t = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" *C ");
  delay(500);
  if(t > 27.5){
    digitalWrite (buzzer, HIGH) ; //send tone
    s.write(90);
    digitalWrite(rele, HIGH);
    digitalWrite(ledGas, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW) ;  //no tone
  }else{
    digitalWrite(ledGas, LOW);
    delay(2000);
    s.write(0);
  }
}
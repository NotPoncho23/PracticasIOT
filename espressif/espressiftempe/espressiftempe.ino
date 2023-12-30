#include <DHT.h>
#define temp 14
#define led 19
#define DHTTYPE DHT11

DHT dht(temp, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Iniciando...");
  pinMode(led, OUTPUT);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  double t = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" *C ");
  delay(1000);
  if(t > 25){
    digitalWrite(led, HIGH);
    delay(2500);
  }else{
    digitalWrite(led, LOW);
    delay(200);
  }
}

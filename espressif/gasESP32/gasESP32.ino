#define ledGas 19
#define buzzer 27 
#define sensorPin 26

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Iniciando...");
  pinMode(ledGas, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin); // Leer el valor analógico del sensor
  int outputValue = map(sensorValue, 0, 150, 0, 255);
  Serial.println(outputValue);
  if(outputValue > 40){
    //digitalWrite(rele, LOW);
    digitalWrite(ledGas, HIGH);
    //s.write(180);
    for (int i=0; i<=9; i++){
    tone (27, 400, 100);
    delay(500);
    }
    delay(3000);
  }else {
    digitalWrite(ledGas, LOW);
    //digitalWrite(rele, HIGH);
  }
  //digitalWrite(rele, HIGH);
}

#define RELE 2
int dato;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RELE, OUTPUT);
  Serial.println("Escribe un numero;");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
  dato = Serial.read();
  Serial.println(dato);
  switch (dato) {
  case '1':
  digitalWrite(RELE, LOW);
    break;
    case '2':
    digitalWrite(RELE, HIGH);
  }
  }
  delay(50);
}

#define rele 21

void setup() {
  // put your setup code here, to run once:
  pinMode(rele, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rele, LOW);
  delay(5000);
  digitalWrite(rele, HIGH);
  delay(3000);
}

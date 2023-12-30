#define LED1 8
#define BOTON1 1
#define LED2 9
#define BOTON2 2
#define LED3 10
#define BOTON3 3
int val;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(BOTON1, INPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BOTON2, INPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BOTON3, INPUT);
}
void loop() {
  val = digitalRead(BOTON1);
  if (val == HIGH) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }
  val = digitalRead(BOTON2);
  if (val == HIGH) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
  val = digitalRead(BOTON3);
  if (val == HIGH) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }
}
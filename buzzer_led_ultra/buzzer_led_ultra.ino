#define led 4
#define echo 5
#define trig 6
#define buzzer 3
int tiempo, distancia;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

void loop(){
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.4;

  if (distancia < 50) {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }else{
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);

  }
}

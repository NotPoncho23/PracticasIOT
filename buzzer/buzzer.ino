// C++ code
//
#define LED 6
#define BUZZER 7
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(1000);
  digitalWrite(LED, LOW);
  digitalWrite(BUZZER, HIGH);
  delay(1000);
}
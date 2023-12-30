// C++ code
//
int x = 0;

void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
  x = analogRead(A5);
  Serial.println(x);
  delay(50); // Wait for 500 millisecond(s)
  if (x < 8) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}
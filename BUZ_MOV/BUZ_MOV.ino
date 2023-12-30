int buz = 2; // pin para el buzzer
int PIR = 3; // pin de entrada (for PIR sensor)
int x =0;
void setup()
{
pinMode(buz, OUTPUT);
pinMode(PIR, INPUT);
Serial.begin(9600);
}
void loop()
{
  x = analogRead(PIR);
  Serial.println(x);
  delay(100);
if(digitalRead(PIR)==1)
{
digitalWrite(buz,HIGH);
delay(500);
digitalWrite(buz,LOW);

}
}
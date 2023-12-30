// C++ code
//
#define VER_SEM 13
#define AMA_SEM 12
#define ROJ_SEM 11
#define VER_PEA 10
#define ROJ_PEA 9
#define BUZZER 2
void setup()
{
  pinMode(VER_SEM, OUTPUT);
  pinMode(AMA_SEM, OUTPUT);
  pinMode(ROJ_SEM, OUTPUT);
  pinMode(VER_PEA, OUTPUT);
  pinMode(ROJ_PEA, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop()
{
  //SEMAFORO EN VERDE
  digitalWrite(VER_SEM, HIGH);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(5000);
 //SEMAFORO EN VERDE PARPADEANDO
 //1 VEZ
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(250);
  
  digitalWrite(VER_SEM, HIGH);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(250);
  //2DA VEZ
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(250);
  
  digitalWrite(VER_SEM, HIGH);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(250);
  //3RA VEZ
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(250);
  
  digitalWrite(VER_SEM, HIGH);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(250);
  
  //SEMAFORO EN AMARILLO
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, HIGH);
  digitalWrite(ROJ_SEM, LOW);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, HIGH);
  digitalWrite(BUZZER, LOW);
  delay(1000);
  
  //SEMAFORO EN ROJO
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, HIGH);
  digitalWrite(ROJ_PEA, LOW);
  digitalWrite(BUZZER, LOW);
  delay(5000);
  
  //ADVERTENCIA CAMBIO A VERDE
  //1RA VEZ
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, LOW);
  for (int i=0; i<=9; i++){
    tone (11, 4400, 100);
    delay (900);}
  delay(250);
  
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, HIGH);
  digitalWrite(ROJ_PEA, LOW);
  digitalWrite(BUZZER, LOW);
  delay(250);
  
  //2DA VEZ
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, LOW);
  for (int i=0; i<=9; i++){
    tone (11, 4400, 100);
    delay (900);}
  delay(250);
  
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, HIGH);
  digitalWrite(ROJ_PEA, LOW);
  digitalWrite(BUZZER, LOW);
  delay(250);
  
  //3RA VEZ
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, LOW);
  digitalWrite(ROJ_PEA, LOW);
  for (int i=0; i<=9; i++){
    tone (11, 4400, 100);
    delay (900);}
  delay(250);
  
  digitalWrite(VER_SEM, LOW);
  digitalWrite(AMA_SEM, LOW);
  digitalWrite(ROJ_SEM, HIGH);
  digitalWrite(VER_PEA, HIGH);
  digitalWrite(ROJ_PEA, LOW);
  digitalWrite(BUZZER, LOW);
  delay(250);
}
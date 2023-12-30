#define IRA A0
#define RELE 2
#define IRD 4
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 pantalla = Adafruit_SSD1306 (128, 64, &Wire);
int ana, dig;

void setup() {
  // put your setup code here, to run once:}
  pantalla.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  Serial.begin(9600);
  pinMode(IRA, INPUT);
  pinMode(RELE, OUTPUT);
  pinMode(IRD, INPUT);
}

void printLCD(String a){
  pantalla.clearDisplay();
  pantalla.setTextSize(2);
  pantalla.setTextColor(WHITE); 
  pantalla.setCursor(0,0);
  pantalla.println(a);
  Serial.println("aaaaa");
  pantalla.display();
}

void loop() {
  // put your main code here, to run repeatedly:
  ana = analogRead(IRA);
  dig = digitalRead(IRD);
  Serial.println(ana);
  digitalWrite(RELE, dig);
  printLCD(String(ana));
  delay(500);
}


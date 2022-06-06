  #include <DHT.h>
#include <LiquidCrystal.h>
#include "DHT.h"

#define DHTPIN 8
// ingresso 8 a cui collego il rilevatore di temperatura e umidità
#define DHTTYPE DHT11
// dht11 è il nome del nostro rilevatore di temperatura e umidità
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// connessione del display LCD e i vari ingressi che mi servono per far comparire le scritte
int red, red2, green, green2, blue, blue2;
int DoorRed , DoorGreen, DoorBlue, DoorRed1, DoorGreen1, DoorBlue1;
// dichiarazioni per i led RGB


void setup() {
lcd.begin(16, 2); // grandezza del display LCD
lcd.print("Temperatura");
lcd.setCursor(0, 1);
lcd.print("Umidita'");
}

void loop() {
int t = dht.readTemperature();
int h = dht.readHumidity();
// posiziono il cursore alla colonna 14 e riga 0
lcd.setCursor(14, 0);
lcd.print(t);
// posiziono il cursore alla colonna 14 e riga 1
lcd.setCursor(14, 1);
lcd.print(h);
if (t < 12) {
    analogWrite(DoorRed, 0);
    analogWrite(DoorGreen, 0);
    analogWrite(DoorBlue, 255);
} else if (t >= 12 && t <= 30){
    analogWrite(DoorRed, 0);
    analogWrite(DoorGreen, 255);
    analogWrite(DoorBlue, 0);
} else{
    analogWrite(DoorRed, 255);
    analogWrite(DoorGreen, 0);
    analogWrite(DoorBlue, 0);
}
if (h < 40) {
    analogWrite(DoorRed1, 255);
    analogWrite(DoorGreen1, 255);
    analogWrite(DoorBlue1, 0);
} else if (h >= 40 && h <= 60){
    analogWrite(DoorRed1, 0);
    analogWrite(DoorGreen1, 255);
    analogWrite(DoorBlue1, 0);
} else {
    analogWrite(DoorRed1, 0);
    analogWrite(DoorGreen1, 0);
    analogWrite(DoorBlue1, 255);
    }

if (Serial.available()){
    red=Serial.parseInt();
    green=Serial.parseInt();
    blue=Serial.parseInt();
    red2=Serial.parseInt();
    green2=Serial.parseInt();
    blue2=Serial.parseInt();
  }
  analogWrite(9, red);
  analogWrite(10, green);
  analogWrite(13, blue);
  analogWrite(1, red);
  analogWrite(6, green);analogWrite(7, blue);
}
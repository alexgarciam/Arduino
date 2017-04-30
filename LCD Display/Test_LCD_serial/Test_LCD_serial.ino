#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);
int luzFondo = 13; //Defino el pin para la luz de fondo

void setup() {
  pinMode(luzFondo, OUTPUT);
  digitalWrite(luzFondo, HIGH); //Activo la luz de fondo
  lcd.begin(20,4);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()>0) {
    //Me espero un poco para que llegue el mensaje entero
    delay(100);
    lcd.clear();
    //Leo todos los caracteres disponibles del buffer
    while (Serial.available() > 0) {
      //Muestro cada carácter en el LCD
      lcd.write(Serial.read());
    }
  }
}

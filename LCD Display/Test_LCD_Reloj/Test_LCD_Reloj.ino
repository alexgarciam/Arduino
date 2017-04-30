#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() 
   {
       lcd.begin(16, 2);           // Fijamos el numero de caracteres y filas
       lcd.print("Prometec.net");  // Aqi va el mensaje
   }

void loop()
   {
       lcd.setCursor(6, 1);    // Ponte en la line 1, posicion 6
       String s = reloj() ;
       lcd.print(s) ;
   }
String reloj()
   {
       int n = millis() / 1000 ;       // Lo pasamos a segundos
       int segundos = n % 60  ;
       int minutos =  n / 60  ;

       String S = String(minutos) + ":" + String(segundos);
       return (S);
   }

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

String texto="Test LCD de Alex! ";

void setup() { 
  lcd.begin(16, 2);
 
  lcd.print(texto+"heello");
}

void loop() {
  int i=0;

  while(true){
    
    
    lcd.setCursor(i,0);
    lcd.print(texto+i);
    i++;
  
    lcd.setCursor(6, 1); 
    String s = reloj() ;
    lcd.print(i) ;
    delay(1000);
    lcd.clear();
  }


  
 }

 String reloj()
   {
       int n = millis() / 1000 ;       // Lo pasamos a segundos
       int segundos = n % 60  ;
       int minutos =  n / 60  ;

       String S = String(minutos) + ":" + String(segundos);
       return (S);
   }

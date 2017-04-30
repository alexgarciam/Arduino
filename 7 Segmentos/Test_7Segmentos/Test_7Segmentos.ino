int pausa=1000; // Variable que define el intervalo
                // de tiempo entre cada digito
 
void setup()
{
  pinMode(7, OUTPUT);  // Asignación de las salidas digitales
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void display (int a, int b, int c, int d, int e, int f, int g)
// Funcion del display
{
  digitalWrite (7,a);   //Se reciben 7 variables y se asignan
  digitalWrite (8,b);   //a cada una de las salidas
  digitalWrite (9,c);
  digitalWrite (10,d);
  digitalWrite (11,e);
  digitalWrite (12,f);
  digitalWrite (13,g);
}
 
void loop() //Funcion principal
// Dependiendo de cada dígito, se envía a la función display
// los estados (0 y 1) a cada uno de los segmentos
{
  display (1,1,1,1,1,1,0); //escribe 0
  delay(pausa);
  display (0,1,1,0,0,0,0); //escribe 1
  delay(pausa);
  display (1,1,0,1,1,0,1); //escribe 2
  delay(pausa);
  display (1,1,1,1,0,0,1); //escribe 3
  delay(pausa);
  display (0,1,1,0,0,1,1); //escribe 4
  delay(pausa);
  display (1,0,1,1,0,1,1); //escribe 5
  delay(pausa);
  display (1,0,1,1,1,1,1); //escribe 6
  delay(pausa);
  display (1,1,1,0,0,0,0); //escribe 7
  delay(pausa);
  display (1,1,1,1,1,1,1); //escribe 8
  delay(pausa);
  display (1,1,1,0,0,1,1); //escribe 9
  delay(pausa);
}


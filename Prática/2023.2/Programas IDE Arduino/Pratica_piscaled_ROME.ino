// Pratica : Pisque um LED
// Autor : Maicon Parizotto
  
void setup()
{
  //Define a porta do led como saida
  pinMode(30, OUTPUT);
}
  
void loop()
{
  //Acende o led
  digitalWrite(30, HIGH);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
    
  //Apaga o led
  digitalWrite(30, LOW);
    
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
}

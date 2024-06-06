/* Baixar Arduino genuino 1.8.19,
biblioteca Sparkfun TB6612FNG
link <https://github.com/sparkfun/SparkFun_TB6612FNG_Arduino_Library>
link <https://github.com/makerhero/Ultrasonic>
sensor ultrassônico HC-SR04


*/

#include <Ultrasonic.h>; // biblioteca para o Sensor Ultrassônico 
#include <SparkFun_TB6612.h> // biblioteca Para o controle dos motores   

#define TRIGGER_PIN 5  // Pino Trigger do sensor na porta 31       
#define ECHO_PIN    12  // Pino Trigger do sensor na porta 26
             
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN); 


#define AIN1 A0
#define AIN2 A1
#define PWMA A9

#define BIN1 A2

#define BIN2 A3
#define PWMB A10

#define STBY 13

const int offsetA = 1;
const int offsetB = 1;


Motor m1 = Motor(AIN1, AIN2, PWMA, offsetA, STBY);
Motor motor2 = Motor(BIN1, BIN2, PWMB, offsetB, STBY);   
void setup() 
{
                 
}


void loop()
{
//Robô inicia andando para frente
  
         
             
  float dist_cm = distancia(); //Declara variável que armazena a distância do obstáculo  

    if(dist_cm < 20) //distância
    {
      decisao();
    } else {
      robo_frente();
}

delay(10);                           
} 

float distancia() //função que mede a distância em cm                  
{
  
  float cmMsec; //declara a variável tipo float cmMsec 

  //Associa à variável tipo long microsec o tempo em microsegundos 
  
  long microsec = ultrasonic.timing();

  //função da biblioteca para converter a distância em cm
  
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  return(cmMsec); // retorna o valor em cm para a função delay(10);                   
delay(10);
} 

void robo_frente()  //função para mover o robô para frente        
{
     m1.drive(-200,1000);
     motor2.drive(200,1000);
 
} 

void robo_atras() //função para mover o robô para atras             
{
     m1.drive(200,1000);
     motor2.drive(-200,1000);
    
} 

void robo_esquerda() //função para mover o robô para esquerda             
{
     m1.drive(200,1000);
     motor2.drive(255,1000);
   
} 

void robo_parado() //função para parar o robô               
{

  brake(m1, motor2); 
} 

void decisao() //função para decidir a ação do robô                      
{
  robo_parado();
  robo_atras();
  robo_esquerda();
  
}

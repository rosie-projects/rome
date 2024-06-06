#include <SparkFun_TB6612.h> // biblioteca Para o controle dos motores   




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

   decisao();
                         
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
     motor2.drive(-200,1000);
   
} 

void robo_parado() //função para parar o robô               
{

  brake(m1, motor2); 
} 

void decisao() //função para decidir a ação do robô                      
{
 
  delay(500);
  robo_frente();
  delay(500);
  robo_esquerda();
  delay(500);
  robo_atras();
  delay(500);
  
}

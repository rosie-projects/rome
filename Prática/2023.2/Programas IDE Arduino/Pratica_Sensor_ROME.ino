// Definições dos pinos
const int trigPin = 5;  // Pino de trigger do sensor ultrassônico
const int echoPin = 12;  // Pino de echo do sensor ultrassônico
const int ledPin = 30;  // Pino do LED

// Variáveis
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Limpa o pino de trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Envia um pulso no pino de trigger
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lê a duração do echo
  duration = pulseIn(echoPin, HIGH);

  // Calcula a distância em centímetros
  distance= duration*0.034/2;

  // Imprime a distância no monitor serial
  Serial.print("Distancia: ");
  Serial.println(distance);

  // Liga o LED se a distância for menor que 10 cm
  if(distance < 10) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // Aguarda um curto período de tempo antes de realizar a próxima leitura
  delay(500);
}

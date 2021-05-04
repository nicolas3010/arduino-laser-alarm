// Component pin declaration 
//Declaração dos pinos dos componentes
const int pinoLDR = A0;
const int pinoBuzzer = 9;
const int pinoBotao = 8; 

// General variables
// Variáveis gerais
int leituraLDR = 0;
int leituraBotao;

void setup() {


  // Configures the pins
  // Configura os pinos
  pinMode(pinoLDR, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP);
}

void loop() {

   // read the voltage value on the LDR pin 
  // le o valor de tensão no pino do LDR
  leituraLDR = analogRead(pinoLDR);
  // read button state
  // le o estado do botao
  leituraBotao = digitalRead(pinoBotao);
  
  // If there is an obstacle
  // Se existir um obstáculo
  if (leituraLDR <= 512) {
  	tone(pinoBuzzer, 1000); // on buzzer // aciona o buzzer 
  }
  else if (leituraBotao == LOW) {  
  	noTone(pinoBuzzer); // off buzzer // desliga o buzzer
  }
  
  delay(100); 
}
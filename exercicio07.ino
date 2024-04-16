const int POT_PIN = 0; 
const int LED_PIN = 9; 

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  
  int valorPotenciometro = analogRead(POT_PIN);
  
  
  int valorMapeado = map(valorPotenciometro, 0, 1023, 0, 255);
  
  
  analogWrite(LED_PIN, valorMapeado);
}

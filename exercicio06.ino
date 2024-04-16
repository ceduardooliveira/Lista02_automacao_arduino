#define pot A0 
int potValor; // Cria variável para armazenar o valor do potenciômetro

void setup() {
  Serial.begin(9600); 
}

void loop() {
  potValor = analogRead(pot); // Lê o potenciômetro e armazena na variável potValor
  Serial.print("Valor do Potenciometro = ");
  Serial.println(potValor); // Imprime valor lido
  delay(250); 
}
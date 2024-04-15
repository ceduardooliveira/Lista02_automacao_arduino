#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600); // Inicia a comunicação serial com uma taxa de 9600 bps
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("LED " + String(LED) + ": Ligado"); 
  delay(1000);
  
  digitalWrite(LED, LOW);
  Serial.println("LED " + String(LED) + ": Desligado"); 
  delay(1000);
}
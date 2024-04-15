int led = 9; 
int brilho = 0; 
int fade = 5; 

void setup() {
  
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  analogWrite(led, brilho);

  
  Serial.print("LED ");
  Serial.print(led);
  Serial.print(": ");
  if (brilho == 0) {
    Serial.println("Desligado");
  } else if (brilho == 255) {
    Serial.println("Ligado");
  }

  
  brilho = brilho + fade;
  
  
  if (brilho == 0 || brilho == 255) {
    fade = -fade;
  }

  
  delay(30);
}

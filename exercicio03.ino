char leitura; 

const int ledGreen = 8; 
const int ledYellow = 9; 
const int ledRed  = 10; 

void setup() {
  Serial.begin(9600); 
  
  pinMode(ledRed, OUTPUT); 
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT); 
  
  digitalWrite(ledRed, LOW); 
  digitalWrite(ledGreen, LOW); 
  digitalWrite(ledYellow, LOW); 
}

void loop() {
  while (Serial.available() > 0) { 
    leitura = Serial.read(); 
    
    if (leitura == 'r' || leitura =='R') {
      digitalWrite(ledRed, !digitalRead(ledRed)); 
      Serial.print("LED Red: "); 
      if (digitalRead(ledRed) == HIGH) { 
        Serial.println("Ligado");
      } else {
        Serial.println("Desligado"); 
      }
    }

    else if (leitura == 'g' || leitura =='G') {
      digitalWrite(ledGreen, !digitalRead(ledGreen));
      Serial.print("LED Green: ");
      if (digitalRead(ledGreen) == HIGH) {
        Serial.println("Ligado");
      } else {
        Serial.println("Desligado");
      }
    }
    else if (leitura == 'y' || leitura =='Y') {
      digitalWrite(ledYellow, !digitalRead(ledYellow));
      Serial.print("LED Yellow: ");
      if (digitalRead(ledYellow) == HIGH) {
        Serial.println("Ligado");
      } else {
        Serial.println("Desligado");
      }
    }
    Serial.println(leitura); 
  }
}

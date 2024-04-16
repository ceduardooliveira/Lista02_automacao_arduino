
const int pinA = 2;
const int pinB = 3;
const int pinLED_OR = 8;
const int pinLED_AND = 9;
const int pinLED_XOR = 10;

void setup() {
  
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(pinLED_OR, OUTPUT);
  pinMode(pinLED_AND, OUTPUT);
  pinMode(pinLED_XOR, OUTPUT);
}

void loop() {
  // Lê o estado das teclas A e B
  int stateA = digitalRead(pinA);
  int stateB = digitalRead(pinB);
  
  
  int resultOR = stateA || stateB;
  int resultAND = stateA && stateB;
  int resultXOR = stateA ^ stateB;
  
  
  digitalWrite(pinLED_OR, resultOR);
  digitalWrite(pinLED_AND, resultAND);
  digitalWrite(pinLED_XOR, resultXOR);
  
  
  delay(100);
}

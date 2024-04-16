
const int SENSOR_TEMPERATURA_PIN = A0; 

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  // leitura da tensão no pino do sensor de temperatura
  int tensaoSensor = analogRead(SENSOR_TEMPERATURA_PIN);
  
  // conversao da tensão para temperatura em graus Celsius
  float temperaturaCelsius = (tensaoSensor * 5.0 / 1024.0) * 100.0;
  
  
  Serial.print("Temperatura: ");
  Serial.print(temperaturaCelsius);
  Serial.println(" °C");
  
  
  delay(1000);
}

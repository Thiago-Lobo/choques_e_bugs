uint8_t PINO_BOTAO = 4;
uint8_t PINO_LED = 2;

void setup() {
  pinMode(PINO_BOTAO, INPUT);
  pinMode(PINO_LED, OUTPUT);
}

void loop() {
  uint16_t tempo_de_espera = digitalRead(PINO_BOTAO) * 900 + 100;
  
  digitalWrite(PINO_LED, HIGH);
  delay(tempo_de_espera);
  digitalWrite(PINO_LED, LOW);
  delay(tempo_de_espera);
}

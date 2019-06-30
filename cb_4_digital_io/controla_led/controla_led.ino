uint8_t PINO_BOTAO = 4;
uint8_t PINO_LED = 2;

void setup() {
  pinMode(PINO_BOTAO, INPUT);
  pinMode(PINO_LED, OUTPUT);
}

void loop() {
  uint8_t valor_lido = digitalRead(PINO_BOTAO);
  digitalWrite(PINO_LED, valor_lido);
}

uint8_t PINO_BOTAO = 4;

void setup() {
  Serial.begin(115200);
  pinMode(PINO_BOTAO, INPUT);
}

void loop() {
  uint8_t valor_lido = digitalRead(PINO_BOTAO);
  Serial.println(valor_lido);
  delay(20);
}

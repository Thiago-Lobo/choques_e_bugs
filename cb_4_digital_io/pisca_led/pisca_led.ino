uint8_t PINO_LED = 2;

void setup() {
  pinMode(PINO_LED, OUTPUT);
}

void loop() {
  digitalWrite(PINO_LED, HIGH);
  delay(300);
  digitalWrite(PINO_LED, LOW);
  delay(300);
}

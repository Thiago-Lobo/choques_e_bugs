int32_t contador = 0;

// Preparar...
void setup() 
{
  Serial.begin(115200);
}

// Executar!
void loop() 
{
  Serial.println(contador);
  
  contador = contador + 1;
  
  delay(1000);
}

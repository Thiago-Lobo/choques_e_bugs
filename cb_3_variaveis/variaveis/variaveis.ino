//  int8_t: -128 a 127
int8_t var_int8_t = 42;
// int16_t: -32768 a 32767
int16_t var_int16_t = 4096;
// int32_t: -2147483648 a 2147483647
int32_t var_int32_t = 128000;

//  uint8_t: 0 a 255
uint8_t var_uint8_t = 0;
// uint16_t: 0 a 65535
uint16_t var_uint16_t = 7428;
// uint32_t: 0 a 4294967295
uint32_t var_uint32_t = 3867463928;

//  float: -3.4 * 10^38 a +3.4 * 10^38
float var_float = 3.14;

// false ou true (0 ou 1)
bool var_bool = true;

// Caracteres entre ""
String var_string = "testando 123";

// Preparar...
void setup() 
{
  Serial.begin(115200);
}

// Executar!
void loop() 
{
  Serial.print("Variavel int8_t: ");
  Serial.println(var_int8_t);
  Serial.print("Variavel int16_t: ");
  Serial.println(var_int16_t);
  Serial.print("Variavel int32_t: ");
  Serial.println(var_int32_t);
  
  Serial.print("Variavel uint8_t: ");
  Serial.println(var_uint8_t);
  Serial.print("Variavel int16_t: ");
  Serial.println(var_uint16_t);
  Serial.print("Variavel int32_t: ");
  Serial.println(var_uint32_t);
  
  Serial.print("Variavel float: ");
  Serial.println(var_float);
  Serial.print("Variavel bool: ");
  Serial.println(var_bool);
  
  Serial.print("Variavel String: ");
  Serial.println(var_string);
  
  delay(1000);
}

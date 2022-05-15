/*
 * Мой самый первый скетч.
 * Поочередное мигание шести светодиодов
*/

void setup() //иницинлизация цифровых контактов № 2, 4, 6, 8, 10, 12 как "выход"
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() //бесконечный цикл
{
  digitalWrite(2, HIGH); //засветить светодиод
  delay(400); //задержка на 0,4 с.
  
  digitalWrite(2, LOW); //погасить светодиод
  
  digitalWrite(4, HIGH);
  delay(400);
  digitalWrite(4, LOW);
  
  digitalWrite(6, HIGH);
  delay(400);
  digitalWrite(6, LOW);
  
  digitalWrite(8, HIGH);
  delay(400);
  digitalWrite(8, LOW);
  
  digitalWrite(10, HIGH);
  delay(400);
  digitalWrite(10, LOW);
  
  digitalWrite(12, HIGH);
  delay(400);
  digitalWrite(12, LOW);
}

//обозначаем выходы и входы константами
  #define RGB_LED_RED 3
  #define RGB_LED_GREEN 5
  #define RGB_LED_BLUE 9

  #define VAR_RES_RED A5
  #define VAR_RES_GREEN A2
  #define VAR_RES_BLUE A0

  // Определяем переменные для входа типа int
  int in_red;
  int in_green;
  int in_blue;

  // Определяем переменные для выхода типа int
  int out_red;
  int out_green;
  int out_blue;
  
void setup()
{
// Пины, к которым подсоединятся светодиоды определяем как выходы
  pinMode(RGB_LED_RED, OUTPUT);
  pinMode(RGB_LED_GREEN, OUTPUT);
  pinMode(RGB_LED_BLUE, OUTPUT);

// Пины с переменными резисторами определяем как входы
  pinMode(VAR_RES_RED, INPUT);
  pinMode(VAR_RES_GREEN, INPUT);
  pinMode(VAR_RES_BLUE, INPUT);
}
 
void loop(){
/*
  Считывание в переменные in_ напряжения с переменного резистора.
  Микроконтроллер будет выдавать числа от 0 до 1023 пропорциональны положению поворота вала
*/
  
  in_red = analogRead(VAR_RES_RED);
  in_green = analogRead(VAR_LED_GREEN);
  in_blue = analogRead(VAR_LED_BLUE);

/*
  Преобразуем значение в яркость. Для этого делим in_ на 4, что с учетом округления даст нам число от 0 до 255.
  Именно это число мы подадим на шим-выход, с помощью которого можно управлять яркостью.
*/
  
  out_red = in_red / 4;
  out_green = in_green / 4;
  out_blue = in_blue / 4;
 
// Запись шим значения яркости на светодиоды
  analogWrite(RGB_LED_RED, out_red);
  analogWrite(RGB_LED_GREEN, out_green);
  analogWrite(RGB_LED_BLUE, out_blue);
}

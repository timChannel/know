// считывание данных с потенциометра и вывод на терминал

const int POT = 0;  // создаём переменную POT для вывода A0
int val = 0;  // создаём переменную val для хранения данных с потенциометра

void setup() 

{
  Serial.begin(9600); // настраиваем скорость передачи даннх по последовательному порту как 9600
}

void loop() 

{
  val = analogRead(POT);  // переносим в переменную val значения из POT
  Serial.println(val); // выводим на экран терминала
  delay(150); // делаем задержку в 0,4 секунды
}

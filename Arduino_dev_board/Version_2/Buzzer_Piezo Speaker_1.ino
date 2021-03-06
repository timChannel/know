// Arduino_dev_board v 2.0
// Buzzer / Piezo Speaker
// V 1.0
const int buzzer = 4;
int note = 440; // Тональность сигнала

// Функция для генерации 3-х точек
void threeDots()
{
  // Конструкция для приращения и завершения цикла
  for (int i=0; i<3; i++) //
  {
    // Генерация звукового сигнала, включение светодиода,
    // длительность 0,1 сек.
    tone(buzzer, note, 100);
    delay(200);
    // Завершение генерации сигнала и выключение светодиода
    noTone(buzzer);
  }
  delay(300); //
}

//
void threeDashes()
{
  // Конструкция для приращения и завершения цикла
  for (int i=0; i<3; i++) //
  {
    // Генерация звукового сигнала, включение светодиода,
    // длительность 0,3 сек.
    tone(buzzer, note, 300);
    delay(500);
    // Завершение генерации сигнала и выключение светодиода
    noTone(buzzer);
  }
  delay(300); //
}

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  // Циклично повторяем функции генерации сигнала с задержкой
  threeDots();
  threeDashes();
  threeDots();
  delay(1500);
}

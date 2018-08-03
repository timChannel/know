// Debounсe button 2 using Class & Metod for Arduino dev board 2.0
// V 1.0

const int led = 8;
const int inPin = 13;

class Button // Класс
{
  public:
    boolean buttonState;      // Текущее состояние кнопки
    boolean buttonPrevState;  // Предыдущее состояние кнопки
    boolean ledState;
    void scanState(); // Метод проверки состояния кнопки
};

void Button::scanState() // Метод, содержащийся в классе Button
{
  buttonState = digitalRead(inPin); // Записываем состояние кнопки в переменную buttonState
  if (buttonPrevState == HIGH && buttonState == LOW)
  {
    // Предыдущее состояние кнопки - отжата, а текущее - нажата
    ledState = !ledState;        // Инвертируем состояние светодиода
    digitalWrite(led, ledState); // Управляем светодиодом
  }
  buttonPrevState = buttonState; // Присваиваем предыдущему состоянию кнопки текущее
}

Button button1; // Объект кнопки

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  button1.scanState();
}

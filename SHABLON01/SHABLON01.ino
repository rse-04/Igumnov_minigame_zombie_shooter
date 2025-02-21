
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец


#define BUTTON1 2
#define BUTTON2 3
#define BUTTON3 4

int lastButtonState1; //[3](https://arduinogetstarted.com/faq/arduino-how-to-detect-button-press-event)

//--------------------------настройка экрана---------------------------
#include <TM1637.h>

// Pin 2 — > CLK, Pin 3 — > DIO
TM1637 tm1637(2, 3)

//--------------------------------------------
//Сложных приказов
// способности
// игрок
// вверх 
void iVerh(){}
//  вниз  
void iVniz(){}
// выстрел 
void iVistrel(){}

// враг
// появиться 
void vPoy(){}
// идти влево 
void vLev(){}
// кусать 
void vKus(){}

// проверить нажатие кнопки 1  
void knop1(){
  // прочитать значение кнопки
    int buttonState1 = digitalRead(BUTTON1);
    if (lastButtonState1 != buttonState1) {  // состояние изменилось
        delay(50);  // время антидребезга
        if (buttonState1 == LOW)
            Serial.println("Нажатие кнопки");
        else
            Serial.println("Отпускание кнопки");
        lastButtonState1 = buttonState1;
    }
}
// проверить нажатие кнопки 2  
void knop2(){
   // прочитать значение кнопки
    int buttonState2 = digitalRead(BUTTON2);
    if (lastButtonState2 != buttonState2) {  // состояние изменилось
        delay(50);  // время антидребезга
        if (buttonState2 == LOW)
            Serial.println("Нажатие кнопки");
        else
            Serial.println("Отпускание кнопки");
        lastButtonState2 = buttonState2;
    }
}
// проверить нажатие кнопки 3  
void knop3(){
 // прочитать значение кнопки
    int buttonState3 = digitalRead(BUTTON3);
    if (lastButtonState3 != buttonState3) {  // состояние изменилось
        delay(50);  // время антидребезга
        if (buttonState3 == LOW)
            Serial.println("Нажатие кнопки");
        else
            Serial.println("Отпускание кнопки");
        lastButtonState3 = buttonState3;
    }  
}

// зажечь пиксель матрицы  
void pixel(){}
// очистить матрицу  
void ochist(){}

// показать число на индикаторе Tm1637
void chisl(){}





void setup() {       //-слэш - разрез /слэш в гору \слэш с горы
  Serial.begin(9600);
    pinMode(BUTTON_PIN, INPUT_PULLUP);  // включить внутренний подтягивающий резистор
    lastButtonState = digitalRead(BUTTON_PIN);
  //------------------------------------------------------
void setup()
{
    tm1637.init();  // инициализируем библиотеку
    tm1637.setBrightness(5);  // устанавливаем яркость дисплея
}
  //-------------------------------------------------------
}

void loop() {
 //-----------------------------------------------------------
void loop()
{
    // выводим число
    tm1637.dispNumber(2020);
}
//------------------------------------------------------------
}

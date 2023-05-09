void setup() {
  pinMode(8, OUTPUT); // устанавливаем пин 1 на выход
  pinMode(9, OUTPUT); // устанавливаем пин 2 на выход
  pinMode(2, INPUT_PULLUP); // устанавливаем пин 3 на вход с подтяжкой
  pinMode(3, INPUT_PULLUP); // устанавливаем пин 4 на вход с подтяжкой
}

void loop() {
  if (digitalRead(2) == LOW) { // если нажата кнопка на пине 3
    delay(500);
    digitalWrite(8, HIGH); // включаем светодиод на пине 1
  } else {
    digitalWrite(8, LOW); // выключаем светодиод на пине 1
  }
  
  if (digitalRead(3) == LOW) { // если нажата кнопка на пине 4
    delay(500);
    digitalWrite(9, HIGH); // включаем светодиод на пине 2
  } else {
    digitalWrite(9, LOW); // выключаем светодиод на пине 2
  }
}
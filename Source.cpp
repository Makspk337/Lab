#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления периметра прямоугольника
float calculatePerimeter(float length, float width) {
  return 2 * (length + width);
}

// Функция для вычисления площади прямоугольника
float calculateArea(float length, float width) {
  return length * width;
}

// Функция для вычисления длины диагонали прямоугольника
float calculateDiagonal(float length, float width) {
  return sqrt(length * length + width * width);
}

int main() {
  float length, width;

  cout << "Введите длину прямоугольника: ";
  cin >> length;

  cout << "Введите ширину прямоугольника: ";
  cin >> width;
  if (length <= 0 || width <= 0) {
    cout << "Ошибка!";
    }else{
        cout << "Периметр прямоугольника: " << calculatePerimeter(length, width) << endl;
        cout << "Площадь прямоугольника: " << calculateArea(length, width) << endl;
        cout << "Длина диагонали прямоугольника: " << calculateDiagonal(length, width) << endl;
    }

  return 0;
}


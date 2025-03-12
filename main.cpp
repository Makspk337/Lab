#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    // Запрос ввода сторон треугольника
    cout << "Введите стороны треугольника через пробел: ";
    cin >> a >> b >> c;
    // Проверка существования треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: треугольник с такими сторонами не может существовать." << endl;
        return 1;
    }
    // Вычисление периметра треугольника
    double perimeter = a + b + c;
    // Вычисление полупериметра для формулы Герона
    double half = perimeter / 2.0;
    // Вычисление площади треугольника по формуле Герона
    double area = sqrt(half * (half - a) * (half - b) * (half - c));
    // Вывод периметра и площади треугольника
    cout << "Периметр треугольника: " << perimeter << endl;
    cout << "Площадь (по формуле Герона): " << area << endl;
    // Проверка, является ли треугольник равнобедренным
    if (a == b || b == c || a == c)
        cout << "Треугольник является равнобедренным." << endl;
    else
        cout << "Треугольник не является равнобедренным." << endl;

    return 0;
}

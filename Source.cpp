main.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float length;
	float width;

	cout << "Введите длину прямоугольника: ";
	cin >> length;

	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	cout << "Периметр прямоугольника: " << 2 * (length + width) << endl;
	cout << "Площадь прямоугольника: " << length * width << endl;
	cout << "Длина диагонали прямоугольника: " << sqrt(length * length + width * width) << endl;

	return 0;
}

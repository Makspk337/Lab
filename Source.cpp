main.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float length;
	float width;

	cout << "������� ����� ��������������: ";
	cin >> length;

	cout << "������� ������ ��������������: ";
	cin >> width;

	cout << "�������� ��������������: " << 2 * (length + width) << endl;
	cout << "������� ��������������: " << length * width << endl;
	cout << "����� ��������� ��������������: " << sqrt(length * length + width * width) << endl;

	return 0;
}

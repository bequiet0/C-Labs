#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float x, y, b;
	cout << "������� ���������� x: ";
	cin >> x;
	cout << "������� ���������� y: ";
	cin >> y;
	b = ((8 * x + 4 * y - 90) / x);
	cout << "����� ����������: " <<  b;
	return 0;
}


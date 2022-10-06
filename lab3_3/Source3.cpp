#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double z, x, b, y;

	cout << "Введите z: " << endl;
	cin >> z;
	cout << "Введите b: " << endl;
	cin >> b;

	if (z <= 0)
	{
		x = pow(z, b) + abs(b / 2);
		cout << "Вы идёте по ведке при z <= 0" << endl;
	}
	else
	{
		x = pow(z, 1.0 / 2.0);
		cout << "Вы идёте по ведке при z < 0" << endl;
	}

	y = 1 / cos(x) + log10(abs(tan(x / 2)));

	cout << "Ответ: " << y;



}
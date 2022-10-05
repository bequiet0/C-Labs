#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int p;
	double x, y, f, r;

	cout << "Меню:\n1-рассчитать sh(x)\n2-рассчитать x^2\n3-рассчитать epx(x)" << endl;
	cin >> p;
	cout << "Введите x: " << endl;
	cin >> x;
	cout << "Введите y: " << endl;
	cin >> y;


	switch (p)
	{
	case 1:
	{
		f = sinh(x);
		cout << p << endl;
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		cout << p << endl;
		break;
	}
	case 3:
	{
		f = exp(x);
		cout << p << endl;
		break;
	}
	}

	cout << "f(x): " << f << endl;

	if (x > y)
	{
		r = pow(abs(f - y), 1 / 3) + tan(f);
		cout << "Вы выбрали первую ветку\n" << "Ответ: " << r << endl;
	}
	else
	{
		if (y > x)
		{
			r = pow((y - f), 3) + cos(f);
			cout << "Вы выбрали вторую ветку\n" << "Ответ: " << r << endl;
		}

		else 
		{
			if (y == x)
			{
				r = pow((f + y), 2) + pow(x, 3);
				cout << "Вы выбрали третью ветку\n" << "Ответ: " << r << endl;
			}
		}
	}



}



	
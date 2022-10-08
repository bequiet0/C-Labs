#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y, s;
	int p;

	cout << "Введите первое число" << endl;
	cin >> x;
	cout << "Введите второе число" << endl;
	cin >> y;

	cout << "Меню\n1-сложение\n2-вычитание\n3-деление\n4-умножение" << endl;
	cin >> p;

	switch (p)
	{
	case 1:
	{
		s = x + y;
		cout << "Ответ: " << s;
	}
	case 2:
	{
		s = x - y;
		cout << "Ответ: " << s;
	}
	case 3:
	{
		if (y == 0 && x == 0)
		{
			cout << "на ноль делить нельзя";
			return 0;
		}
		else
		{
			s = x / y;
			cout << "Ответ: " << s << endl;
			system("pause");
			return 0;
		}
	}
	case 4:
	{
		s = x * y;
		cout << "Ответ: " << s;
	}


	}
}

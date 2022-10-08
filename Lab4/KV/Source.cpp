#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int p;

	cout << "Выберите номер вопроса 1-3" << endl;
	cin >> p;

	switch (p)
	{
	case 1:
	{
		double x, y;

		cout << "Введите x" << endl;
		cin >> x;
		cout << "Введите y" << endl;
		cin >> y;


		if (x <= 100 && x != -x)
		{
			x = x - 100;
			cout << "Ответ: " << x << endl;
		}
		else
		{
			x = x + 100;
			cout << "Ответ: " << x << endl;
		}

	}
	case 2:
	{
		int x = 3, y = 13;
		int s;
		int(a);
		switch (a)
		{
		case 1:
		{
			s = x & y;
			cout << "Ответ: " << s << endl;
		}
		case 2:
		{
			s = x | y;
			cout << "Ответ: " << s << endl;
		}
		case 3:
		{
			s = x ^ y;
			cout << "Ответ: " << s << endl;
		}
		case 4:
		{
			s = -x;
			cout << "Ответ: " << s << endl;
		}
		case 5:
		{
			s = x << y;
			cout << "Ответ: " << s << endl;
		}
		}

	}
	case 3:
	{

	}

	}
	



}
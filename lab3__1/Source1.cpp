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

	cout << "����:\n1-���������� sh(x)\n2-���������� x^2\n3-���������� epx(x)" << endl;
	cin >> p;
	cout << "������� x: " << endl;
	cin >> x;
	cout << "������� y: " << endl;
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
		cout << "�� ������� ������ �����\n" << "�����: " << r << endl;
	}
	else
	{
		if (y > x)
		{
			r = pow((y - f), 3) + cos(f);
			cout << "�� ������� ������ �����\n" << "�����: " << r << endl;
		}

		else 
		{
			if (y == x)
			{
				r = pow((f + y), 2) + pow(x, 3);
				cout << "�� ������� ������ �����\n" << "�����: " << r << endl;
			}
		}
	}



}



	
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a;
	double x, f, l, p;

	cout << "¬ведите x" << endl;
	cin >> x;
	cout << "¬ведите p" << endl;
	cin >> p;
	cout << "1-exp(x)\n2-x^2" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
	{
		f = exp(x);
		if (x > 10)
		{
			l = 2 * pow(f, 3) + 3 * pow(p, 2);
			cout << "x = " << x << endl;
			cout << "p = " << p << endl;
			cout << "f(x [exp(x)]) = " << f << endl;
			cout << "l = " << l << endl;
			system("pause");
			return 0;
		}
		else
		{
			if (3 < x)
			{
				l = abs(f - p);
				cout << "x = " << x << endl;
				cout << "p = " << p << endl;
				cout << "f(x [exp(x)]) = " << f << endl;
				cout << "l = " << l << endl;
				system("pause");
				return 0;
			}
			else
			{
				if (x == 1)
				{
					l = pow(f - p, 2);
					cout << "x = " << x << endl;
					cout << "p = " << p << endl;
					cout << "f(x [exp(x)]) = " << f << endl;
					cout << "l = " << l << endl;
					system("pause");
					return 0;
				}
				else
				{
					cout << "не соответствует услови€м" << endl;
					system("pause");
					return 0;
				}
			}
		}
	}
	case 2:
	{
		f = pow(x, 2);
		if (x > 10)
		{
			l = 2 * pow(f, 3) + 3 * pow(p, 2);
			cout << "x = " << x << endl;
			cout << "p = " << p << endl;
			cout << "f(x [exp(x)]) = " << f << endl;
			cout << "l = " << l << endl;
			system("pause");
			return 0;
		}
		else
		{
			if (3 < x)
			{
				l = abs(f - p);
				cout << "x = " << x << endl;
				cout << "p = " << p << endl;
				cout << "f(x [exp(x)]) = " << f << endl;
				cout << "l = " << l << endl;
				system("pause");
				return 0;
			}
			else
			{
				if (x == 1)
				{
					l = pow(f - p, 2);
				}
				else
				{
					cout << "не соответствует услови€м" << endl;
					system("pause");
					return 0;
				}
			}
		}
	}
	}
}
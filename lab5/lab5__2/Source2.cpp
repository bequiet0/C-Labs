#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	long double m, Y, x, S = 0.0, b, h, a, s0;
	long long int n = 0;

	cout << "Введите а: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
m:	cout << "Введите h: " << endl;
	cin >> h;

	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
		cout << "a и b поменяли.\n";
	}

	if (h > (b - a))
	{
		cout << "h должно быть меньше b - a" << endl;
		goto m;
	}

	cout << "Кол-во шагов: ";
	cin >> n;

	if (n < 0)
	{
		n = -n;
		cout << "Не отрицательное число шагов" << endl;
	}

	cout << "|\tx\t|\tS(x)\t|\tY(x)\t|\S(x)-Y(x)|\t|\n";

	for (x = a; x <= b; x = x + h)
	{
		for (int k = 1; k < n + 1; k++)
		{
			s0 = ((pow(-1, k + 1)) * ((pow(x, 2 * k + 1))) / (4 * pow(k, 2) - 1));
			S = S + s0;
		}
		Y = ((1 + pow(x, 2)) / 2) * atan(x) - x / 2;
		m = abs(S - Y);
		cout << "|\t" << x << "\t|\t" << S << "\t|\t" << Y << "\t|\t" << m << "\t|\n";
		S = 0;
	}


	system("pause");
	return 0;
}

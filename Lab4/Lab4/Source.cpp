#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double m1, m2, t2;

	cout << "Введите m1" << endl;
	cin >> m1;
	cout << "Введите m2" << endl;
	cin >> m2;


	if (0.1 < abs(m1 - 2 * m2) && abs(m1 - 2 * m2) <= 1)
	{
		t2 = (m1 - 2 * m2) / (2 * (m1 - m2));
		cout << "Вычесление идёт по ветке 1" << endl;
		cout << "Вот тебе t2: " << t2 << endl;
		system("pause");
		return 0;
	}

	else if (abs(m1 - 2 * m2) > 1)
	{
		t2 = (2 * (m1 - m2)) * exp((m1 / m2) - 1);
		cout << "Вычесление идёт по ветке 2" << endl;
		cout << "Вот тебе t2: " << t2 << endl;
		system("pause");
		return 0;
	}

	else
	{
		cout << "не соответствует условиям" << endl;
		system("pause");
		return 0;
	}

}
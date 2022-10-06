#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int x, y;

	cout << "Введите x" << endl;
	cin >> x;

	if (x % 17 == 0 && x > 0)
	{
		cout << "Число " << x << " относиться к группе А" << endl;
	}
	else
	{
		if (x % 2 == 0 && x < 1)
		{
			cout << "Число " << x << " относиться к группе B" << endl;
		}
		else
		{
			if (x % 2 > 0 && x < 1)
			{
				cout << "Число " << x << " относиться к группе C" << endl;
			}
			else
			{
				cout << "Число " << x << " относиться к группе D" << endl;
			}
		}
	}

}
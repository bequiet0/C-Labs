#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int x, y;

	cout << "������� x" << endl;
	cin >> x;

	if (x % 17 == 0 && x > 0)
	{
		cout << "����� " << x << " ���������� � ������ �" << endl;
	}
	else
	{
		if (x % 2 == 0 && x < 1)
		{
			cout << "����� " << x << " ���������� � ������ B" << endl;
		}
		else
		{
			if (x % 2 > 0 && x < 1)
			{
				cout << "����� " << x << " ���������� � ������ C" << endl;
			}
			else
			{
				cout << "����� " << x << " ���������� � ������ D" << endl;
			}
		}
	}

}
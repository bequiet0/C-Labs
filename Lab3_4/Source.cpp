#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y, w;

	for (;;)
	{

		cout << "������� x" << endl;
		cin >> x;
		cout << "������� y" << endl;
		cin >> y;

		if (x == y)
		{
			cout << "Error!\n������� ������ ��������" << endl;
			continue;
		}

		w = pow(max(max(x * y, x + y), 0), 2);
		cout << "������������ ��������: " << w;
		break;

	}
	
}


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

		cout << "¬ведите x" << endl;
		cin >> x;
		cout << "¬ведите y" << endl;
		cin >> y;

		if (x == y)
		{
			cout << "Error!\n¬ведите разные значени€" << endl;
			continue;
		}

		w = pow(max(max(x * y, x + y), 0), 2);
		cout << "максимальное значение: " << w;
		break;

	}
	
}


#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, R;
	const double PI = 3.141592653589793;

	cout << "������� ������� a: " << endl;
	cin >> a;
	cout << "������� ������ R: " << endl;
	cin >> R;

	a = pow(a, 2);
	R = 2 * PI * R;

		if (a > R)
		{
			cout << "������� �������� ������: \n" << a << endl;
			system("pause");
			return 0;
		}
		else
		{
			if (R > a)
			{
				cout << "������� ���������� ������: \n" << R << endl;
				system("pause");
				return 0;
			}
		}
}
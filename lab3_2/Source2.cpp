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

	cout << "¬ведите сторону a: " << endl;
	cin >> a;
	cout << "¬ведите радиус R: " << endl;
	cin >> R;

	a = pow(a, 2);
	R = 2 * PI * R;

		if (a > R)
		{
			cout << "ѕлощадь квадрата больше: \n" << a << endl;
			system("pause");
			return 0;
		}
		else
		{
			if (R > a)
			{
				cout << "ѕлощадь окружности больше: \n" << R << endl;
				system("pause");
				return 0;
			}
		}
}
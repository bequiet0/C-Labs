#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, b, z1, z2;

	cout << "������� ���������� a: " << endl;
	cin >> a;
	cout << "������� ���������� b: " << endl;
	cin >> b;
	

	z1 = pow((cos(a) - cos(b)), 2) - pow(sin(a) - sin(b), 2);
	cout << "���e� z1: " << z1 << endl;

    
	z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	cout << "���e� z2: " << z2 << endl;
 

	system("pause");
	return 0;
	
}


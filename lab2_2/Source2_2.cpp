#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	double w, x, y, z;
	cout << "������� ���������� x: " << endl;
	cin >> x;
	cout << "������� ���������� y: " << endl;
	cin >> y;
	cout << "������� ���������� z: " << endl;
	cin >> z;



	w = fabs(pow(x, (y / x)) - pow((y / x), 1.0 / 3.0))
		+ (y - x) * ((cos(y) - (z / (y - x))) / (1 + pow((y - x), 2)));

	cout << "���e� w: " << w << endl;


	system("pause");
	return 0;
	

}


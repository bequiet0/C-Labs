#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double const a = 11;
	double const b = 22;
	double const c = 33;

	float x, t, z;
	cout << "Введите x: ";
	cin >> x;
	t = pow(x, 2);
	z = (t - a * x + b - c);
	cout << "Ответ: "  << z;
	return 0;


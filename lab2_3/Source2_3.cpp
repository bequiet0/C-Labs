#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double u, r, i;

	cout << "����� ���" << endl;
	cout << "������� ���������� U: " << endl;
	cin >> u;
	cout << "������� ������������� R: " << endl;
	cin >> r;

	i = u / r;

	cout << "���: " << i << endl;

	


	system("pause");
	return 0;


}

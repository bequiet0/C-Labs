#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double m1, m2, t2;

	cout << "������� m1" << endl;
	cin >> m1;
	cout << "������� m2" << endl;
	cin >> m2;


	if (0.1 < abs(m1 - 2 * m2) && abs(m1 - 2 * m2) <= 1)
	{
		t2 = (m1 - 2 * m2) / (2 * (m1 - m2));
		cout << "���������� ��� �� ����� 1" << endl;
		cout << "��� ���� t2: " << t2 << endl;
		system("pause");
		return 0;
	}

	else if (abs(m1 - 2 * m2) > 1)
	{
		t2 = (2 * (m1 - m2)) * exp((m1 / m2) - 1);
		cout << "���������� ��� �� ����� 2" << endl;
		cout << "��� ���� t2: " << t2 << endl;
		system("pause");
		return 0;
	}

	else
	{
		cout << "�� ������������� ��������" << endl;
		system("pause");
		return 0;
	}

}
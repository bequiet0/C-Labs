#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y, s;
	int p;

	cout << "������� ������ �����" << endl;
	cin >> x;
	cout << "������� ������ �����" << endl;
	cin >> y;

	cout << "����\n1-��������\n2-���������\n3-�������\n4-���������" << endl;
	cin >> p;

	switch (p)
	{
	case 1:
	{
		s = x + y;
		cout << "�����: " << s;
	}
	case 2:
	{
		s = x - y;
		cout << "�����: " << s;
	}
	case 3:
	{
		if (y == 0 && x == 0)
		{
			cout << "�� ���� ������ ������";
			return 0;
		}
		else
		{
			s = x / y;
			cout << "�����: " << s << endl;
			system("pause");
			return 0;
		}
	}
	case 4:
	{
		s = x * y;
		cout << "�����: " << s;
	}


	}
}

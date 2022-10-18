#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    long long int n = 0;
    int k = 0, z = 1;
    long double x, a, b, h, Y, an, S;

    cout << "������� a:";
    cin >> a;
    cout << "������� b:";
    cin >> b;
    h = (b - a) / n;
    if (b >= a)
    {
        long double t = b;
        b = a;
        a = t;
    }
    cout << "������� ���-�� ����� ����� a � b:" << endl;
    cin >> n;
    if (n < 0)
    {
        n = -n;
        cout << "���������� ����� �� ����� ���� �������������, ������� ���� �������� �� ��������������� �� �����:" << n << endl;

    }

    h = (b - a) / n;

    if (h > (b - a))
    {
        cout << "������� �������� a � b ������" << endl;
    }
    
    cout << "x\tS(x)\tY(x)\tY(x)-S(x)\n"; 

    for (x = a; x <= b; x = x + h)
    {
        Y = ((1 + pow(x, 2)) / 2) * 1.0 / tan(x) - x / 2;
        an = a * n;
        S = a * n;
        for (int i = 1; i < n; i++)
        {
            for (i = 1; i < n; i++)
            {
                z *= i;
            }
            an = an * (pow(x, 2 * k + 1)) / 4 * pow(k, 2) - 1;
        }
        cout << setprecision(2) << fixed << x << "\t" << setprecision(6) << Y << " " << S << "\t";
        cout << "S(x) = " << S;
        cout << "Y(x) = " << Y;
       
    }

    

}

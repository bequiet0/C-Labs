#include <cstdio>
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a;
    int kolvo = 0;
    cout << "Введите число :";
    cin >> a;
    cout << "Кол-во символов в числе [ " << a << " ] - ";
    while (a > 0)
    {
        a = a / 10;
        kolvo++;
    }
    cout << kolvo << endl;
    system("pause");
}
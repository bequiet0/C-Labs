#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    const int a = 8;
    int A[a] = { 10, 20, 30, 40, 50, -60, 70, 80 };

    for (int i = 0; i < 8; i++)
    {
        cout << A[i] << endl;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << "\t" << A[i] - 5 << endl;
    }
}
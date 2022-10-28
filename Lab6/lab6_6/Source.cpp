#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    float arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << "[" << i + 1 << "]" << ": ";
        cout << arr[i] << "\n";
    }

    cout << "\n";

    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] >= 0)
        {
            cout << 0 - arr[i] << "\n";
        }


    }
}
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
        cout << arr[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < 10; ++i)
    {
        if( i % 2 == 0 || i % 3 == 0)
        {
            cout << "[" << i << "]" << ": ";
            cout << arr[i] << " "; 
        }

       
    }




}
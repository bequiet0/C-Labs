#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        if ( arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            cout << arr[i] << " ";
        }
    }
    
}
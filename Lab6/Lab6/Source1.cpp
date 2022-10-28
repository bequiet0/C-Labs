#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    const int a = 15;
    int A[a] = { 5, 16, 67, 34, 5, 14, 15, 67, 34, 10, 15, 67, 64, 52, 65 };
    float fMedian = 0.0;


    for (int i = 0; i != a; i++)
        fMedian += A[i];
    fMedian /= a;

    cout << "Median = " << fMedian << "\r\nB[]=\r\n";
    float B[a];

    for (int i = 0; i != a; i++)
    {
        B[i] = A[i] - fMedian;
        cout << B[i] << "\r\n";
    }

    
    return 0;
}

#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
    int n = 100;
    double x;
    double a = 0.1, b = 1.0, h = (b - a) / n, an, S, Y;
    cout << " x         Y(x)            S(x)\n";
    for (double x = a; x <= b; x = x + h)
    {
        an = 1.0;
        S = 1.0;
        for (int i = 1; i < n; i++)
        {
            an = an * ((2 * x) / i);
            S = S + an;
        }
        Y = exp(2 * x);
        cout << setprecision(2) << fixed << x << "\t" << setprecision(6) << Y << "\t" << S << endl;
    }
    return 0;
}
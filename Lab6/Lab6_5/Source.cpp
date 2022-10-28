#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{

	int arr[1159];

	for (int i = 0; i < 1159; i++)
	{

		arr[i] = 1 + rand() % 11;

	}

	for (int i = 0; i < 1159; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 365; i < 691; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 902; i < 1100; i++)
	{
		cout << arr[i] << " ";
	}
}
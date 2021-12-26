#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int m = 10, n = 10;
	int k = 0, l = 0;
	int iMax = 0, jMax = 0, Max = 0, q = 0;
	int mas[m][n] = { { 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
	{ -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
	{ -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
	{ 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
	{ -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
	{ -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
	{ 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
	{ -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
	{ 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
	{ 78, 60, -79, -18, 30, -13, -34, -92, 1, -38} };
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mas[i][j] > 0)
			{
				break;
			}
			else
			{
				q++;
			}
			if (q == 10)
			{
				cout << "Line fits ¹ " << i << endl;
			}
		}
		q = 0;
	}
	cout << "Part2" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Max < mas[i][j])
			{
				Max = mas[i][j];
			}
		}
		if (mas[k][l] < Max)
		{
			mas[k][l] = Max;
			k++;
			l++;
		}
		Max = 0;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

}
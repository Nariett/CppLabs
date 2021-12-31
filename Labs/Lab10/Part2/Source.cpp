#include<iostream>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	const int n = 100, n2 = 20, m = 5;
	int s = 0;
	int D = 0;
	int mas[n] = { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
	-79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
	-87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
	30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
	-97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
	-25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
	88, -61, 0, -64, -83, 97, 0, 90, 15, 8,
	-54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
	98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
	78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };
	int* mass = mas;
	for (int i = 0; i < n; i++)
	{
		if (mass[i] < 0)
		{
			s++;
		}
	}
	cout << "Namber of negative values " << s << endl;
	int nmas[n2][m];
	int q = 0, iMax, jMax, Max, iMin, jMin, Min;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			nmas[i][j] = mass[q];
			q++;
		}
	}
	Max = nmas[0][0];
	Min = nmas[0][0];

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (nmas[i][j] > Max)
			{
				Max = nmas[i][j];
				iMax = i;
				jMax = j;
			}
			if (nmas[i][j] < Min)
			{
				Min = nmas[i][j];
				iMin = i;
				jMin = j;
			}

		}
	}
	cout << "Max and Min with its indexes " << Max << " [" << iMax << "][" << jMax << "]" << " " << Min << " [" << iMin << "][" << jMin << "]" << endl;
	cout << "Output of a new array " << endl;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << nmas[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Part2" << endl;
	int const r = 15, t = 2, y = 2;
	char a = 'A', b = 'Z';
	int counter = 0;
	char cmas[r][t][y];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < t; j++)
		{
			for (int o = 0; o < y; o++)
			{
				cmas[i][j][o] = a + rand() % (b - a + 1);
			}
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < t; j++)
		{
			for (int o = 0; o < y; o++)
			{
				cout << cmas[i][j][o] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	int v = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < t; j++)
		{
			for (int o = 0; o < y; o++)
			{
				counter++;
				if (counter % 3 == 0)
				{
					cout << cmas[i][j][o] << " ";
					if (cmas[i][j][o] == v)
					{
						v++;
					}
				}
			}
		}
	}
	cout << endl;
	cout << "Symbol (v) repeated: " << v << " times" << endl;
}
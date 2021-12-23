#include <iostream>
#include <Windows.h>
#include <time.h>
#include<stdlib.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p;
	cout << "Enter the task number 1 - 5" << endl;
	cin >> p;
	switch (p)
	{
	case 1:
	{
		const int m = 2, n = 4;
		char ar[m][n] = { {'@','#','$','&'},{'t','z','x','c'} };
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ar[i][j] << " | ";
			}
			cout << endl;
		}
		system("pause");
		return 0;
	}
	case 2:
	{
		const int m = 4, n = 2;
		double ar[m][n];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "Enter ar[" << i << "][" << j << "]" << endl;
				cin >> ar[i][j];
			}
		}
		cout << "Print array" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ar[i][j] << "  ";
			}
			cout << endl;
		}
		system("pause");
		return 0;
	}
	case 3:
	{
		const int m = 26, n = 12;
		int a = -9, b = -3;
		int ar[m][n];
		srand(time(NULL));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				ar[i][j] = a + rand() % (b - a + 1);
			}
		}
		cout << "Show massive" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ar[i][j] << " ; ";
			}
			cout << endl;
		}
		cout << "«Show reverse massiv" << endl;
		for (int i = m - 1; i >= 0; i--)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				cout << ar[i][j] << " ; ";
			}
			cout << endl;
		}
	}
	case 4:
	{
		const int m = 19, n = 9;
		int f = 306;
		int ar[m][n];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{

				ar[i][j] = f;
				f -= 6;
			}
		}
		cout << "Print masive:" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ar[i][j] << " ; ";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				ar[i][j] = pow(ar[i][j], 2);
				cout << pow(ar[i][j], 2) << " ; ";
			}
			cout << endl;
		}
		system("payse");
		return 0;
	}
	case 5:
	{
		const int m = 4, n = 3;
		double ar[m][n];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "Enter ar[" << i << "][" << j << "]" << endl;
				cin >> ar[i][j];
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << ar[i][j] << " ";
			}
			cout << endl;
		}
		cout << "New vision of array:" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j)
				{
					cout << ar[i][j] << " ";
				}
			}
		}
		system("pause");
		return 0;
	}
	default:
	{
		cout << "Input error" << endl;
		system("pause");
		return 0;
	}
	}
}
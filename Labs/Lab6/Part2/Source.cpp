#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1215);
	int p;
	cout << "Enter the task number 1-5" << endl;
	cin >> p;
	switch (p)
	{
	case 1:
	{
		const int n = 9;
		bool mas[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Enter mas[" << i << "]" << endl;
			cin >> mas[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << "mas[" << i << "] = " << mas[i] << "  ";
		}
		for (int i = 0; i < n; i++)
		{
			cout << " " << "mas[" << i << "] = " << mas[i] << endl;
		}
		system("pause");
		return 0;
	}
	case 2:
	{
		const int n = 5;
		int mas[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Enter mas[" << i << "]" << endl;
			cin >> mas[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << "mas[" << i << "] = " << mas[i] << " ";
		}
		cout << "\n";
		for (int i = 0; i < n; i++)
		{
			if (mas[i] > 0 | mas[i] % 2 != 0)
			{
				cout << "mas[" << i << "] = " << mas[i] << endl;
			}
		}
		system("pause");
		return 0;
	}
	case 3:
	{
		const int n = 10;
		double massiv[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Enter massiv[" << i << "]" << endl;
			cin >> massiv[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << "massiv[" << i << "] = " << massiv[i] << endl;
		}
		cout << "5 < massiv < 10" << endl;
		for (int i = 5; i < n; i++)
		{
			cout << "massiv[" << i << "] = " << massiv[i] << endl;
		}
		system("pause");
		return 0;
	}
	case 4:
	{
		int a, b;
		a = -5;
		b = 9;
		const int n = 1154;
		int massiv[n];
		for (int i = 0; i < n; i++)
		{
			massiv[i] = a + rand() % (b - a + 1);
			cout << "massiv[" << i << "] = " << massiv[i] << " ";
		}
		cout << endl;
		for (int i = 698; i <= 1154; i++)
		{
			if (i % 2 != 0)
			{
				cout << "massiv[" << i << "] = " << massiv[i] << endl;
			}
		}
		system("pause");
		return 0;
	}
	case 5:
	{
		const int n = 10;
		int s = 0;
		int vector[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Enter vector[" << i << "]" << endl;
			cin >> vector[i];

		}
		for (int i = 0; i < n; i++)
		{
			cout << "vetor[" << i << "] = " << vector[i] << endl;
		}
		for (int i = 0; i < n; i++)
		{
			if (vector[i] >= (-15) & vector[i] <= 0)
			{
				s = s + vector[i];
			}
		}
		cout << "Amount = " << s << endl;
	}
	}
	system("pause");
	return 0;
}
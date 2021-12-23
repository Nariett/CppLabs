#include <iostream>
#include <Windows.h>
#include<time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	int n, n2, a = 0, b = 10, Max = 0, Max2 = 0;
	cout << "Enter dimension n for mas A" << endl;;
	cin >> n;
	cout << "Enter dimension n for mas B" << endl;
	cin >> n2;
	int* mas = new int[n];
	int* mas2 = new int[n2];
	if (mas == NULL)
	{
		cout << "No memory ";
		system("pause");
		return 0;
	}
	if (mas2 == NULL)
	{
		cout << "No memory ";
		system("pause");
		return 0;
	}
	cout << "Array A" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = a + rand() % (b - a + 1);
		if (mas[i] > Max)
		{
			Max = mas[i];
		}
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Array B" << endl;
	for (int i = 0; i < n2; i++)
	{
		mas2[i] = a + rand() % (b - a + 1);
		if (mas2[i] > Max2)
		{
			Max2 = mas2[i];
		}
		cout << mas2[i] << " ";
	}
	cout << endl;
	cout << "Массив a * Max" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] *= Max;
		cout << mas[i] << " ";
	}
	cout << endl;

	cout << "Array b * Max2" << endl;
	for (int i = 0; i < n2; i++)
	{
		mas2[i] *= Max2;
		cout << mas2[i] << " ";
	}
	delete[] mas;
	delete[] mas2;
	system("pause");
	return 0;
}
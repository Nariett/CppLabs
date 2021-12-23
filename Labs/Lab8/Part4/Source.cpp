#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int neg = 0, iMin = 0;
	double sum = 0, t;
	double mas[10] = { 3.24, -7.16, 2.28, -0.16, -3.22, 7.14, 2.88, -3.20, 0.99, -4.15 };
	double Min = mas[0];
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] < 0)
		{
			neg++;
		}
	}
	cout << "Negative number = " << neg << endl;
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] < Min)
		{
			Min = mas[i];
			iMin = i;
		}
	}
	for (int i = iMin + 1; i < 10; i++)
	{
		if (iMin < 10)
		{
			sum += mas[i];
		}
	}
	cout << "The sum of the numbers aften the minimum number in the array = " << sum << endl;
	cout << "Array changes " << endl;
	for (int i = 0; i < 10; i++)
	{

		if (mas[i] < 0)
		{
			mas[i] = pow(mas[i], 2);
		}
	}
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
			if (mas[j] > mas[j + 1])
			{
				t = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = t;
			}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << " ";
	}
	delete[] mas;
	system("pause");
	return 0;
}
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	int n, iMax, a = 0, b = 10, m = 0, k = 0;
	cout << "Enter n" << endl;;
	cin >> n;
	int* mas = new int[n];
	if (mas == NULL)
	{
		cout << "No memory";
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		mas[i] = a + rand() % (b - a + 1);
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		if (mas[i] < mas[i - 1])
		{
			m = m + 1;
		}
		for (i = 1; i < n; i++)
		{
			if (mas[i] > mas[i - 1])
			{
				k = k + 1;
			}
		}
	}
	int p = k + m;
	cout << "interval of monotony " << p << endl;
	delete[] mas;
	system("pause");
	return 0;
}
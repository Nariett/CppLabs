#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	double s = 0;
	int n, iMax, a = 0, b = 10, sum = 0;
	cout << "Enter n" << endl;;
	cin >> n;
	double* mas = new double[n];
	if (mas == NULL)
	{
		cout << "No memory";
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		mas[i] = a + rand() % (b - a + 1);
		s += mas[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	s = s / n;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > s)
		{
			iMax = i;
		}
	}
	for (int i = iMax + 1; i < n; i++)
	{
		if (iMax < n)
		{
			sum += mas[i];
		}
	}
	cout << endl;
	cout << "Index of the largest number " << iMax << " " << " Amount " << sum;
	delete[] mas;
	system("pause");
	return 0;

}
#include "/GitHub/CppLabs/Labs/Lab12/Part1/Header.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, m, counter;
	do
	{
		cout << "Enter the number of line" << endl;
		cin >> m;
	} while (m <= 0);
	do
	{
		cout << "Enter the number of columns" << endl;
		cin >> n;
	} while (n <= 0);
	double** mas = new double* [m];
	if (mas == NULL)
	{
		cout << "No memory 1" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < m; i++)
	{
		mas[i] = new double[n];
		if (mas[i] == NULL)
		{
			cout << "No memory 2" << "\nFor line ¹" << i << endl;
			for (int j = 0; j < i; j++)//////////////////////////////////////
			{
				delete[] mas[j];
			}
			delete[] mas;
			mas = NULL;
			system("pause");
			return 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter a value in " << "mas[" << i << "][" << j << "]" << endl;
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "|";
		}
		cout << endl;
	}
	double sum1, sumx, maxmas;
	int counter;
	sum1 = mainMas(mas, m, n);
	sumx = sumMas(mas, m, n);
	maxmas = maxMas(mas, m, n, counter);
	counter = number(mas, m, n);
	cout << "The sum of the main diagonal " << sum1 << endl;
	cout << "The sum of numbers not included in the main diagonal " << sumx << endl;
	cout << "The maximum value is " << maxmas << "\nNumber of repetitions " << counter << endl;
	cout << "Number smaller than the average arithmetic " << counter << endl;
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;
	mas = NULL;
	system("pause");
	return 0;
}
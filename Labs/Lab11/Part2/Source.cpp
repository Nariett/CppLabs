#include <iostream>
#include <Windows.h>

using namespace std;

void printTabl(double);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double r, x;
	cout << "Enter x" << endl;
	cin >> x;
	printTabl(x);
	system("pause");
	return 0;
}

void printTabl(double x)
{
	double r = 0, pi = 3.14;
	if (x > 2 | x < -3)
	{
		cout << "Error imput" << endl;
		return;
	}
	cout << "|\tx\t|\tr\t|" << endl;
	for (double i = x; i <= 2; i += 0.25)
	{
		if (i > 0)
		{
			for (int k = 1; k < 5; k++)
			{
				r = pow(i, k);
				cout << "|\t" << i << "\t|\t" << r << "\t|" << endl;
			}
		}
		if (i <= 0)
		{
			r = pow(pi, 3.5 * i);
			cout << "|\t" << i << "\t|\t" << r << "\t|" << endl;
		}
	}
}
#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double t2, o, f;
	int p;
	cout << "Enter o: ";
	cin >> o;
	cout << "Enter f: ";
	cin >> f;
	if (fabs(f) < 5 * fabs(o))
	{
		t2 = log(fabs(2 * f - 3 * exp(2) * o));
		cout << "Branch 1" << endl;
	}
	else
	{
		if (5 * fabs(o) < fabs(f) <= 7.5 * fabs(o))
		{
			t2 = log(fabs(2 * pow(f, 2) - 3 * o));
			cout << "Branch 2" << endl;
		}
	}
	cout << "Anser is " << t2 << endl;
	system("pause");
	return 0;
}
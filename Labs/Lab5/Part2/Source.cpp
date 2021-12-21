#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double m, o;
	int n;
	cout << "Enter a number m ";
	cin >> m;
	for (n = 1; n <= 1000; n++)
	{
		o = pow(n / m, 2);
		cout << "Anwser " << o << " " << "n = " << n << endl;
	}
}
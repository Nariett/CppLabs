#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double b, c;
	b = 1;
	c = 4;
	double a, x, y;
	cout << "Enter a";
	cin >> a;
	cout << "Enter x";
	cin >> x;
	y = pow(x, 2) - a * x + b - c;

	cout << "Answer =" << y << endl;
	system("pause");
	return 0;
}
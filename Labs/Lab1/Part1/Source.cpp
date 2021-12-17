#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, c;
	cout << "Enter x ";
	cin >> x;
	cout << "Enter y ";
	cin >> y;
	c = x * (x - 20) + (3 * y) / (x);
	cout << "Answer = " << c << endl;
	system("pause");
	return 0;
}
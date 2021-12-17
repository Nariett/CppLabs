#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, v, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	v = 5 * atan(x) - (1.0 / 4.0) * acos(x) * (x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z + pow(x, 2));
	cout << "Answer: " << v << endl;
	system("pause");
	return 0;
}
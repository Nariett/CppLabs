#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double z, x, y, u, r;
	cout << "Enter z ";
	cin >> z;
	cout << "Enter x ";
	cin >> x;
	cout << "Enter y ";
	cin >> y;
	r = (min(max(x, y), min(y, z)));
	if (r == 0)
	{
		cout << "Division by 0";
		return 0;
	}
	u = ((max(y, z)) / r);
	cout << "Number u = " << u << endl;
	return 0;
}
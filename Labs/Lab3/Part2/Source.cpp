#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y;
	double r = 5;//inner radius
	double R = 10;//Radius from the center of the torus
	cout << "Enter the coordinates x";
	cin >> x;
	cout << "Enter the coordinates y";
	cin >> y;
	double k = sqrt(x * x + y * y);
	if (r >= k or k <= R)
		cout << "The points are in a circle " << endl;
	else
		cout << "The points are not in a circle" << endl;
	return 0;

}
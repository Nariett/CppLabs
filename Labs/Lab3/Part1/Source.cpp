#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, f, r, x, y;
	int p;
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;
	cout << "Menu: \n1-calculate sh(x)\n2-calculate x^2\n3 calculate exponent exp(x)\nSelect the menu item:";
	cin >> p;
	switch (p)
	{
	case 1:
	{
		f = sinh(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	case 3:
	{
		f = exp(x);
		break;
	}
	default:
	{
		cout << "There is no such option. \n";
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x)=" << f << endl;
	if (x < y)
	{
		r = pow((y - f), 3) + cos(f);
		cout << "Calculation for 2 branches" << endl;
	}
	else
	{
		if (x == y)//x==y
		{
			r = pow(f + y, 2) + pow(x, 3);
			cout << "Calculation for 3 branches" << endl;
		}
		else
		{
			if (x > y)//x>y
			{
				r = pow(fabs(f - y), 1.0 / 3.0) + tan(x);
				cout << "Calculation for 1 branches" << endl;
			}
		}
	}
	cout << "Calculation result: " << r << endl;
	system("pause");
	return 0;
}

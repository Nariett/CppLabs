#include <iostream>
#include<cmath>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, f, c;
	int p;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Menu: \n1-Calculate exp(x)\n2-Calculate x^2\nSelet a menu item:";
	cin >> p;
	switch (p)
	{
	case 1:
	{
		f = exp(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
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
	if ((x / y) == 0)
	{
		cout << "For cass when (x/y)==0 There are no solutions provided.\n";
		system("pause");
		return 0;
	}
	else
	{
		if (x == y)
		{
			c = pow(pow(f, 2) + y, 2);
		}
		else
		{
			if ((x / y) < 0)
			{
				c = fabs(f / y) + pow(f + y, 2);
			}
			else
			{
				if ((x / y) > 0)
				{
					c = f + pow(pow(f, 2) + y, 3);
				}
			}
		}
	}
	cout << "x=" << x << " y=" << y << " f(x)=" << f << " c=" << c << endl;
	system("pause");
	return 0;
}
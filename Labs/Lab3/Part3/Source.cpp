#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double z, x, y;
	cout << "Enter z";
	cin >> z;
	if (z >= 0)
	{
		x = 2 * z + 1;
		cout << "Branch 1" << endl;
	}
	else
	{
		if (z < 0)
		{
			x = log(pow(z, 2) - z);
			cout << "Branch 2 " << endl;
		}
	}
	y = pow(sin(x), 2) + pow(cos(pow(x, 3)), 5) + log(pow(x, 2. / 5));
	cout << "Result" << y << endl;
	system("pause");
	return 0;

}
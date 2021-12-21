#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x;
	cout << "Enter x ";
	cin >> x;
	if (x > 50)
	{
		cout << "Number " << x << " Rushing to the group A" << endl;
	}
	else
	{
		if (x < -100 | 30 == x)
		{
			cout << "Number " << x << " Rushing to the group B" << endl;
		}
		else
		{
			if (x % 12 == 0)
			{
				cout << "Number " << x << " Rushing to the group C" << endl;
			}
			else
			{
				cout << "Number " << x << " Rushing to the group D" << endl;
			}
		}
	}
	system("pause");
	return 0;
}
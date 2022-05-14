#include <iostream>

using namespace std;

void main()
{
	system("chcp 1251");
	int s;
	cout << "Select input array type (1 - int; 2 - char; 3 - bool)";
	cin >> s;
	switch (s)
	{
	case 1:
	{
		int a[10], x;
		int	k;
		do
		{
			cout << "Enter the number of elements of type int (no more than ten): ";
			cin >> x;
		} while (x > 10 || x < 1);
		cout << "Enter elements\n";
		for (int i = 0; i < x; i++)
		{
			cin >> a[i];
		}
		k = pow(2, x);
		for (int i = 0; i < k; i++)
		{
			cout << i << ":\t{ ";
			for (int j = 0; j < x; j++)
			{
				if (i & (1 << j))
				{
					cout << a[j] << " ";
				}
			}
			cout << "}\n";
		}
		break;
	}
	case 2:
	{
		char b[10];
		int y, z;
		do
		{
			cout << "Enter the number of elements of type char(no more than ten): ";
			cin >> y;
		} while (y > 10 || y < 1);
		cout << "Enter elements:\n";
		for (int i = 0; i < y; i++)
		{
			cin >> b[i];
		}
		cout << endl;
		z = powf(2, y);
		for (int i = 0; i < z; i++)
		{
			cout << i << ":\t{";
			for (int j = 0; j < y; j++)
			{
				if (i & (1 << j))
				{
					cout << b[j] << " ";
				}
			}
			cout << "}\n";
		}
		break;
	}
	case 3:
	{
		bool b[10];
		int y, z;
		do
		{
			cout << "Enter the number of elements of type char(no more than ten): ";
			cin >> y;
		} while (y > 10 || y < 1);
		cout << "Enter elements:\n";
		for (int i = 0; i < y; i++)
		{
			cin >> b[i];
		}
		cout << endl;
		z = powf(2, y);
		for (int i = 0; i < z; i++)
		{
			cout << i << ":\t{";
			for (int j = 0; j < y; j++)
			{
				if (i & (1 << j))
				{
					if (b[j] == 1)
					{
						cout << "T" << " ";
					}
					else
					{
						cout << "F" << " ";
					}
				}
			}
			cout << "}\n";
		}
		break;
	}
	default:
	{
		cout << "Error. \n";
		break;
	}
	}
}
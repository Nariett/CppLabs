#include<iostream>
#include <windows.h>
#include<string.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int r = 10;
	char n, s[r];
	cout << "Enter the text: ";
	cin.getline(s, r);
	cout << "Enter the symbol to be found " << endl;
	cin >> n;
	for (int i = 0; i < r; i++)
	{
		if (s[i] == n)
		{
			cout << "Symbol found  " << n << " in symbol ¹ " << i + 1 << endl;
		}
	}
	const int size = 10;
	char q[size];
	bool c = 0;
	int counter = 0;
	cin.getline(q, size);
	for (int i = 0; i < size; i++)
	{
		c = isspace(q[i]);
		if (c == true)
		{
			q[i] = '-';
		}
	}
	cout << q;
	system("pause");
	return 0;
}
#include <iostream>
#include <windows.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int r = 1000, n = 13;
	char s[r];
	bool  c, g, t;
	cout << "Enter some words " << endl;
	cin.getline(s, r);
	int counter = 0, slova = 1, aver = 0, glas = 0, counter2 = 0, start = 0, slova2 = 0;
	char a[n] = "AaEeIiOoUuYy";
	for (int i = 0; i < strlen(s); i++)
	{
		c = isgraph(s[i]);
		if (c == true)
		{
			counter++;
		}
		g = isspace(s[i]);
		if (g == true)
		{
			slova++;
		}
		for (int j = 0; j < n; j++)
		{
			if ((s[i - 1] == a[j]) & s[i] == ' ')
			{
				glas++;
			}
		}
	}
	aver = counter / slova;
	cout << "Average word length: " << aver << endl;
	cout << "Words corresponding to medium length: " << endl;
	for (int j = 0; j < strlen(s); j++)
	{
		t = isspace(s[j]);
		if (t != true)
		{
			counter2++;
		}
		else
		{
			if (counter2 == aver)
			{
				for (int i = j - aver; i < j; i++)
				{
					cout << s[i];
				}
				cout << endl;
				slova2++;
			}
			counter2 = 0;

		}
	}
	if (slova2 == 0)
	{
		cout << "There are no words whose length is equal to the average word length" << endl;
	}
	cout << counter << " " << "Symbols \n" << slova << " Words" << "\nWords that end in a vowel " << glas << endl;
}
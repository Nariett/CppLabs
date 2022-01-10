#include <iostream>
#include <windows.h>

using namespace std;

struct student
{
	char name[10];
	char Surname[10];
	double avgscore;;
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n = 0;
	cout << "Enter the number of people in the group" << endl;
	cin >> n;
	student* group = new student[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter name" << endl;
		cin >> group[i].name;
		cout << "Enter surname" << endl;
		cin >> group[i].Surname;
		cout << "Enter grade average score" << endl;
		cin >> group[i].avgscore;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Name " << group[i].name << endl;
		cout << "surname " << group[i].Surname << endl;
		cout << "average score " << group[i].avgscore << endl;
	}
	cout << "Sort " << endl;
	int p = 0;
	cout << "1)Sort for name\n2)Sort for average score" << endl;
	cin >> p;
	switch (p)
	{
	case 1:
	{
		cout << "Sort for name " << endl;
		for (int i = 0; i < n; i++)
		{
			student t = group[i];
			int q = i;
			for (int j = i - 1; j > -1 && strcmp(t.Surname, group[j].Surname) < 0; j--)
			{
				group[j + 1] = group[j];
				group[j] = t;
			}
		}

		break;
	}
	case 2:
	{
		cout << "Sort for average score" << endl;
		for (int i = n / 2; i > 0; i = i / 2)
		{
			for (int j = 0; j < n - i; j++)
			{
				for (int k = j; k > -1; k = k - i)
				{
					if (group[k].avgscore > group[i + k].avgscore)
					{
						student t = group[k];
						group[k] = group[i + k];
						group[i + k] = t;
					}
					else
					{
						k = 0;
					}
				}
			}
		}
	}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Name " << group[i].name << endl;
		cout << "surname " << group[i].Surname << endl;
		cout << "average score " << group[i].avgscore << endl;
	}
}
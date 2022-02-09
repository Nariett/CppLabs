#include <iostream>
#include <windows.h>

using namespace std;

struct znak
{
	char name[10];
	char surname[10];
	char znak[10];
	int data[3];
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int const n = 2;
	int counter = 0, dat = 0;
	znak zn[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter name" << endl;
		cin >> zn[i].name;
		cout << "Enter surname" << endl;
		cin >> zn[i].surname;
		cout << "Enter sign" << endl;
		cin >> zn[i].znak;
		cout << "Enter date of birth" << endl;
		for (int j = 0; j < 3; j++)
		{
			cin >> zn[i].data[j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << zn[i].name << endl;
		cout << zn[i].surname << endl;
		cout << zn[i].znak << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << zn[i].data[j] << " ";
		}
		cout << endl;
	}
	cout << "Enter the number you wanr to find" << endl;
	cin >> dat;
	for (int i = 0; i < n; i++)
	{
		if (dat == zn[i].data[1])
		{
			counter++;
		}
	}
	cout << "The system found a person with the given month of birth " << counter;
	if (counter == 0)
	{
		cout << "There are no people found with this month of birth" << endl;
	}
	system("pause");
	return 0;
}

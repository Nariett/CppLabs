#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 6;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter mas[" << i << "]" << endl;
		cin >> mas[i];
	}
	int Max = mas[0];
	int Min = mas[0];
	for (int i = 0; i < n; i++)
	{

		if (mas[i] > Max)
		{
			Max = mas[i];
		}
		if (mas[i] < Min)
		{
			Min = mas[i];
		}
	}
	cout <<"Minimum number "<< Min << "  " <<"Maximum  number "<<Max << endl;
	system("pause");
	return 0;
}
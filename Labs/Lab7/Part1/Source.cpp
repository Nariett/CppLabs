#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 4, m = 4;
	int sum = 1;
	int ar[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter ar[" << i << "][" << j << "]" << endl;
			cin >> ar[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		sum *= ar[0][i];
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <Windows.h>

using namespace std;

bool increasing(int[], int);
int positive(int[], int, int*, int&);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 10;
	int sum = 0, pos = 0, com = 0;
	int* rX = &pos;
	int& pR = sum;
	int mas[n] = { 1,2,3,4,5,6,7,8,1,16 };
	if (increasing(mas, n) == true)
	{
		cout << "Increasing" << endl;
	}
	else
	{
		cout << "Does not meet the requirements" << endl;
	}
	pos = positive(mas, n, &pR, com);
	cout << "Positive numbers " << pos << "\nSum of numbers " << sum << "\nComposition " << com << endl;
	system("pause");
	return 0;
}
bool increasing(int mas[], int x)
{
	for (int i = 1; i < x; i++)
	{
		if (mas[i - 1] > mas[i])
		{
			return false;
		}
	}
	return true;
}
int positive(int mas[], int n, int* pR, int& pX)
{
	int sum = 0, pro = 1, pol = 0;
	double aveg = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 8 == 0)
		{
			sum += mas[i];
			pro *= mas[i];
		}
		if (mas[i] > 0)
		{
			pol++;
		}
	}
	*pR = sum;
	pX = pro;
	return pol;
}
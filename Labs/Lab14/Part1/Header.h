#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;
int product(int[], int);
int product2(int[], int);

int product(int mas[], int x)
{
	int c = 1;
	for (int i = 0; i < x; i++)
	{
		c *= mas[i];
	}
	return c;
}
int product2(int mas[], int x)
{

	if (x == 0)
	{
		return mas[0];
	}
	else
	{
		cout << mas[x - 1] << endl;
		return mas[x] * product(mas, x - 1);
	}

}
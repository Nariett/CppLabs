#include "Header.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	const int n = 10, a = 1, b = 10;
	int pro = 0, pro2 = 0;
	double aver = 0;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = a + rand() % (b - a + 1);
		cout << mas[i] << " ";
	}
	cout << endl;
	pro = product(mas, n);
	pro2 = product2(mas, n);
	cout << "Array products " << pro << " " << pro2 << endl;
}

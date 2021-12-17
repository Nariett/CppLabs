#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double m, n, z1, z2;
	cout << "Enter m:";
	cin >> m;
	cout << "Enter n:";
	cin >> n;
	z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(pow(m, 3) * n) + m * n + pow(m, 2) - m);
	z2 = (sqrt(m) - sqrt(n)) / m;
	cout << "Answer: " << z1 << "\nAnswer " << z2 << endl;
	system("pause");
	return 0;
}
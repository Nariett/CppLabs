#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	long double x;
	long double* px = &x;
	long double& xx = x;
	cout << &x << " " << *px << " " << xx << endl;
	x = 666;
	cout << x << " " << *px << " " << xx << endl;
	x = x + 3;
	cout << *px << endl;
	*px = *px + 3;
	cout << *px << endl;
	xx = xx + 3;
	cout << "Variable " << x << "\nIndicator " << *px << "\nLink " << xx << endl;//ссылка
}
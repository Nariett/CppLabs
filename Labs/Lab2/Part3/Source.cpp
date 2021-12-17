#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x, y;
	cout << "Enter the file size in bytes ";
	cin >> x;
	y = x / 1024;
	cout << "File size in kilobytes " << y << endl;
	system("pause");
	return 0;
}
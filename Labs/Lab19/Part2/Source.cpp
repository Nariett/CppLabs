#include<iostream>
#include<set>
#include<iterator>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	set<int>set1;
	set<int>set2;
	int a;
	cout << "¬ведите число";
	cin >> a;
	set1.insert(a);
	int b;
	cout << "¬ведите число 2";
	cin >> b;
	set2.insert(b);
	if (set1 == set2)
	{
		cout << "¬ведЄные числа одинаковые";
	}
	else
	{
		cout << "¬ведЄные числа не одинаковые";
	}
	system("pause");
	return 0;
}
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
	cout << "������� �����";
	cin >> a;
	set1.insert(a);
	int b;
	cout << "������� ����� 2";
	cin >> b;
	set2.insert(b);
	if (set1 == set2)
	{
		cout << "������� ����� ����������";
	}
	else
	{
		cout << "������� ����� �� ����������";
	}
	system("pause");
	return 0;
}
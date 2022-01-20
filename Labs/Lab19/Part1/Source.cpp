#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<regex>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char str[80] = { "aAXa aeffa aGha aza ax23a a3sSa" };
	regex reg("a[a-z]+a");
	char* p;
	char d[] = " ";
	p = strtok(str, d);
	while (p != NULL)
	{
		cout << p << endl;
		if (regex_search(p, reg))
		{
			cout << "|" << endl;
		}
		p = strtok(NULL, d);
	}
	system("pause");
	return 0;
}
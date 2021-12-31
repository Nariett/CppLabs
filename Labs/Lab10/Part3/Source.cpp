#include<iostream>

using namespace std;

int main()
{
	bool c = 0;
	const int n = 100;
	int count = 0;
	char mas[n];
	cin.getline(mas, 101);
	for (int i = 0; i < n; i++)
	{
		cout << mas[i];
	}
	for (int i = 0; i < n; i++)
	{
		c = isalpha(mas[i]);
		if (c == true)
		{
			count++;
		}
		c = isspace(mas[i]);
		if (c == true)
		{
			count++;
		}
	}
	cout << endl;
	cout << count;
}
#include <iostream>

using namespace std;

void swap(char* a, int i, int j)
{
	char s = a[i];
	a[i] = a[j];
	a[j] = s;
}

bool NextSet(char* a, int n)
{
	int j = n - 2;
	while (j != -1 && a[j] >= a[j + 1])
	{
		j--;
	}
	if (j == -1)
	{
		return false;
	}
	int k = n - 1;
	while (a[j] >= a[k])
	{
		k--;
	}
	swap(a, j, k);
	int l = j + 1, r = n - 1;
	while (l < r)
	{
		swap(a, l++, r--);
	}
	return true;
}

void Print(char* a, int n)
{
	static int num = 1;
	cout.width(3);
	cout << num++ << " : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void sort(char* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a, j, j + 1);
			}
		}
	}
}
int main()
{
	int n = 50;
	char* a = new char[n];
	if (!a)
	{
		cout << "No memmory\n";
		return 0;
	}
	cout << "Enter string: ";
	cin.getline(a, n);
	Print(a, strlen(a));
	sort(a, strlen(a));
	int count = 0;
	while (NextSet(a, strlen(a)))
	{
		count++;
		Print(a, strlen(a));
	}
	cout << "Counter of unique set (Perestanovor): " << count + 1 << endl;
	system("pause");
	return 0;
}
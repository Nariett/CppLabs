#include <iostream>
#include <queue>

using namespace std;

int main()
{
	system("chcp 1251");
	queue <int> Queue;
	const int n = 8;
	int mas[n][n] = { { 0, 1, 0, 0, 0, 0, 1, 0 },
	{ 0, 0, 0, 0, 1, 0, 0, 0 },
	{ 0, 1, 0, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 } };
	int nodes[n];
	for (int i = 0; i < n; i++)
	{
		nodes[i] = 0;
	}
	int x;
	bool f = false;
	cout << "Enter the number of the vertex whose presence in the column you want to check: ";
	cin >> x;
	Queue.push(0);
	while (!Queue.empty())
	{
		int node = Queue.front();
		Queue.pop();
		nodes[node] = 2;
		for (int j = 0; j < n; j++)
		{
			if (mas[node][j] == 1 && nodes[j] == 0)
			{
				Queue.push(j);
				nodes[j] = 1;
			}
		}
		cout << endl << node;
		if (node == x)
		{
			cout << "This peak was searched for by you. ";
			f = true;
		}
	}
	if (!f)
	{
		cout << "\nThe vertex you are looking for was not found in this graph.\n";
	}
	cout << endl;
	system("pause");
	return 0;

}
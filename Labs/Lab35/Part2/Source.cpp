#include <iostream>

using namespace std;

void DFS(int** graph, bool* visited, int st, int n)
{
	cout << st + 1 << " ";
	visited[st] = true;
	for (int r = 0; r <= n; r++)
	{
		if ((graph[st][r] != 0) && (!visited[r]))
		{
			DFS(graph, visited, r, n);
		}
	}
}


void main()
{
	system("chcp 1251");
	int n = 8;
	int** graph = new int* [n] {new int[n] {0, 1, 0, 0, 0, 0, 1, 0},
		new int[n] {0, 0, 0, 0, 1, 0, 0, 0},
		new int[n] {0, 1, 0, 1, 0, 0, 0, 0},
		new int[n] {0, 0, 0, 0, 1, 0, 0, 0},
		new int[n] {0, 0, 0, 0, 0, 1, 1, 0},
		new int[n] {0, 0, 0, 0, 0, 0, 1, 0},
		new int[n] {0, 0, 0, 0, 0, 0, 0, 1},
		new int[n] {0, 0, 0, 0, 0, 0, 0, 0}};
	bool* visited = new bool[n];
	if (!visited)
	{
		cout << "No memory for boolean array.\n";
		system("pause");
		return;
	}
	int menu = 0;
	for (int i = 0; i < n; i++)
	{
		visited[i] = false;
		for (int j = 0; j < n; j++)
		{
			cout << " " << graph[i][j];
		}
		cout << endl;
	}
	cout << "The a djacency matrix of a graph:\n";
	int start;
	do
	{
		cout << "Starting vertex: ";
		cin >> start;
	} while (start < 1 || start > n);
	cout << "The order of traversal of the graph's veins in depth from the one you entered: ";
	DFS(graph, visited, start - 1, n);
	cout << endl;
	delete[] visited;
	visited = NULL;
	for (int i = 0; i < n; i++)
	{
		delete[] graph[i];
	}
	delete[] graph;
	graph = NULL;
	system("pause");
}
#include <iostream>

using namespace std;
const int MAX_E = (int)1e6;
const int MAX_V = (int)1e3;
const int INF = (int)1e9;
int numOfVertex, numOfEdge, sourseVertex, destinationVertex, edgeCount;
int capacity[MAX_E], onEnd[MAX_E], nextEdge[MAX_E], firstEdge[MAX_V], visited[MAX_V];
void addEdge(int u, int v, int cap)
{
	onEnd[edgeCount] = v;
	nextEdge[edgeCount] = firstEdge[u];
	firstEdge[u] = edgeCount;
	capacity[edgeCount++] = cap;
	onEnd[edgeCount] = u;
	nextEdge[edgeCount] = firstEdge[v];
	firstEdge[v] = edgeCount;
	capacity[edgeCount++] = 0;
}
int findFlow(int u, int flow)
{
	if (u == destinationVertex)
	{
		return flow;
	}
	visited[u] = true;
	for (int edge = firstEdge[u]; edge != -1; edge = nextEdge[edge])
	{
		int to = onEnd[edge];
		if (!visited[to] && capacity[edge] > 0)
		{
			int minResult = findFlow(to, min(flow, capacity[edge]));
			{
				if (minResult > 0)
				{
					capacity[edge] -= minResult;
					capacity[edge ^ 1] += minResult;
					return minResult;
				}
			}
		}
	}
	return 0;
}

int main()
{
	system("chcp 1251");
	fill(firstEdge, firstEdge + MAX_V, -1);
	cout << "Number of peaks: ";
	cin >> numOfVertex;
	cout << "Number of ribs: ";
	cin >> numOfEdge;
	cout << "Enter the source vertex number: ";
	cin >> sourseVertex;
	cout << "Enter the number of the runoff vertex: ";
	cin >> destinationVertex;
	for (int i = 0, u, v, cap; i < numOfEdge; i++)
	{
		cout << "Enter the initial weight of the arc: ";
		cin >> u;
		cout << "Enter the end point of the arc: ";
		cin >> v;
		cout << "Enter the bandwidth of the arc: ";
		cin >> cap;
		addEdge(u, v, cap);
	}
	int maxFlow = 0;
	int iterationResult = 0;
	while ((iterationResult = findFlow(sourseVertex, INF)) > 0)
	{
		fill(visited, visited + MAX_V, false);
		maxFlow += iterationResult;
	}
	cout << "Maximum flow: " << maxFlow << endl;
	system("pause");
	return 0;
}
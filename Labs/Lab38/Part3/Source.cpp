#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define edge pair<int,int>
class Graph
{
private:
	vector<pair<int, edge>> G;
	vector<pair<int, edge>> T;
	int* parent;
	int V;
public:
	Graph(int V);
	void AddWeightedEdge(int u, int v, int w);
	int find_set(int i);
	void union_set(int u, int v);
	void kruskal();
	void print();
};
Graph::Graph(int V)
{
	parent = new int[V];
	for (int i = 0; i < V; i++)
	{
		parent[i] = i;
	}
	G.clear();
	T.clear();
}
void Graph::AddWeightedEdge(int u, int v, int w)
{
	G.push_back(make_pair(w, edge(u, v)));
}
int Graph::find_set(int i)
{
	if (i == parent[i])
	{
		return i;
	}
	else
	{
		return find_set(parent[i]);
	}
}
void Graph::union_set(int u, int v)
{
	parent[u] = parent[v];
}
void Graph::kruskal()
{
	int i, uRep, vRep;
	sort(G.begin(), G.end());
	for (i = 0; i < G.size(); i++)
	{
		uRep = find_set(G[i].second.first);
		vRep = find_set(G[i].second.second);
		if (uRep != vRep)
		{
			T.push_back(G[i]);
			union_set(uRep, vRep);
		}
	}
}
void Graph::print()
{
	cout << "Edge:\this weight\n";
	for (int i = 0; i < T.size(); i++)
	{
		cout << T[i].second.first << " - " << T[i].second.second << ":\t" << T[i].first << endl;
	}
}
int main()
{
	system("chcp 1251");
	Graph g(9);
	g.AddWeightedEdge(0, 1, 1);
	g.AddWeightedEdge(1, 0, 1);
	g.AddWeightedEdge(1, 2, 2);
	g.AddWeightedEdge(2, 1, 2);
	g.AddWeightedEdge(2, 3, 10);
	g.AddWeightedEdge(2, 5, 10);
	g.AddWeightedEdge(3, 4, 19);
	g.AddWeightedEdge(3, 7, 10);
	g.AddWeightedEdge(3, 2, 10);
	g.AddWeightedEdge(4, 5, 9);
	g.AddWeightedEdge(4, 3, 19);
	g.AddWeightedEdge(5, 4, 9);
	g.AddWeightedEdge(5, 2, 10);
	g.AddWeightedEdge(5, 7, 7);
	g.AddWeightedEdge(5, 6, 10);
	g.AddWeightedEdge(6, 5, 10);
	g.AddWeightedEdge(6, 7, 16);
	g.AddWeightedEdge(6, 8, 2);
	g.AddWeightedEdge(7, 3, 10);
	g.AddWeightedEdge(7, 5, 7);
	g.AddWeightedEdge(7, 6, 16);
	g.AddWeightedEdge(7, 8, 3);
	g.AddWeightedEdge(8, 6, 2);
	g.AddWeightedEdge(8, 7, 3);
	g.kruskal();
	g.print();
	system("pause");
	return 0;
}
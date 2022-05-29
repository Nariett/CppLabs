#include <iostream>
#include <list>

using namespace std;
const int N = 2000;
int e[N], c[N][N], h[N], n, s, t;
void push(int u, int v)
{
	int f = min(e[u], c[u][v]);
	e[u] -= f;
	e[u] += f;
	c[u][v] -= f;
	c[u][v] += f;
}
void lift(int u)
{
	int min = 3 * n + 1;
	for (int i = 0; i < n; i++)
	{
		if (c[u][i] && (h[i] < min))
		{
			min = h[i];
		}
	}
	h[u] = min + 1;
}
void discharge(int u)
{
	int v = 0;
	while (e[u] > 0)
	{
		if (c[u][v] && h[u] == h[v] + 1)
		{
			push(u, v);
			v = 0;
			continue;
		}
		v++;
		if (v == n)
		{
			lift(u);
			v = 0;
		}
	}
}
void read()
{
	cout << "Number of peaks";
	cin >> n;
	cout << "Enter the number of vertices of the source count from zero";
	cin >> s;
	cout << "Enter the number of the top of the runoff (count from zero)";
	cin >> t;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				cout << "it doesn't matter if the vertex has a number " << i << " arc towards itself\n";
				continue;
			}
			cout << "Enter the arc capacity " << i << "->" << j << "):";
			cin >> c[i][j];
		}
	}
}
void init()
{
	read();
	for (int i = 0; i < n; i++)
	{
		if (i == 3)
		{
			continue;
		}
		e[i] = c[s][i];
		c[s][i] += c[s][i];
	}
	h[s] = n;
}
int main()
{
	system("chcp 1251");
	list<int>l;
	list<int>::iterator cur;
	int old;
	init();
	for (int i = 0; i < n; i++)
	{
		if (i != s && i != t)
		{
			l.push_front(i);
		}
	}
	cur = l.begin();
	while (cur != l.end())
	{
		old = h[*cur];
		discharge(*cur);
		if (h[*cur] != old)
		{
			l.push_front(*cur);
			l.erase(cur);
			cur = l.begin();
		}
		cur++;
	}
	cout << "Maximum flow " << e[t] << endl;
	system("pause");
	return 0;

}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long int;

const int N = 1e5 + 5;
struct Edge
{
	ll u, v, weight;
	bool operator<(Edge const& other)
	{
		return weight < other.weight;
	}
};
int order[N];
int parent[N];
void make_set(int v)
{
	order[v] = 0;
	parent[v] = v;
}
int find_set(int v)
{
	if(v == parent[v])
	{
		return v;
	}
	else return parent[v] = find_set(parent[v]);
}
void union_set(int u, int v)
{
	if(order[u] < order[v])
	{
		swap(u, v);
	}
	parent[v] = u;
	if(order[u] == order[v])
	{
		order[u]++;
	}
}
int main()
{
	int n, e;
	cin >> n >> e;
	Edge edge[e];
	for(int i = 1; i <= n; i++)
	{
		make_set(i);
	}

	for(int i = 0; i < e; i++)
	{
		cin >> edge[i].u >> edge[i].v >> edge[i].weight;
	}

	sort(edge, edge+e);
	ll cost = 0;
	ll cnt = 0;
	for(Edge e : edge)
	{
		int u = find_set(e.u);
		int v = find_set(e.v);
		if( u != v)
		{
			union_set(u, v);
			cnt++;
			cost += e.weight;
		}
	}
	if(cnt != n-1) cout << "IMPOSSIBLE" << '\n';
	else cout << cost << '\n';
	cerr << "Execution Time : " << 1.0 * clock() / CLOCKS_PER_SEC << '\n';
}

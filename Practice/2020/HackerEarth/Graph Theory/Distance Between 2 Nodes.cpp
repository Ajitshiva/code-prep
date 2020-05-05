#include<bits/stdc++.h>
using namespace std;

// dist(a, b) = level[a] + level[b] - 2 * level(LCA(a, b))
const int maxN = 11;
vector<int> adj[1001];
int level[1001];
int LCA[1001][maxN+1];

void dfs(int node, int par, int lvl)
{
	level[node] = lvl;
	LCA[node][0] = par;
	for(int child : adj[node])
	{
		if(child != par)
		{
			dfs(child, node, lvl+1);
		}
	}
}
void init(int n)
{
	dfs(1, -1, 0);

	for(int j = 1; j <= maxN; j++)
	{
		for(int i = 1; i <= n; i++)
		{
			if(LCA[i][j-1] != -1)
			{
				int par = LCA[i][j-1];
				LCA[i][j] = LCA[par][j-1];
			}
		}
	}
}
int getLCA(int a, int b)
{
	if(level[a] > level[b]) swap(a, b);

	int diff = level[b] = level[a];

	while(diff>0)
	{
		int i = log2(diff);
		diff -= (1 << i);
		b = LCA[b][i];
	}

	if(a == b) return a;

	for(int i = maxN ; i >=0 ; i--)
	{
		if(LCA[a][i] !=-1 && LCA[a][i] != LCA[b][i])
		{
			a = LCA[a][i];
			b = LCA[b][i];
		} 
	}

	return LCA[a][0];
} 

int getDist(int a, int b)
{
	int lca = getLCA(a, b);

	return level[a] + level[b] - (2 * level[lca]);
}

int main()
{
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

	int n, a, b, q;

	cin >> n;
	memset(LCA, -1, sizeof(LCA));

	for(int i = 1; i < n; i++)
	{
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	cin >> q;

	init(n);
	while(q--)
	{
		int m, n;
		cin >> m >> n;
		//cout << level[m] << " " << level[n] <<'\n';
		cout << "Distance between " << m << " and " << n << " is " << getDist(m, n) << '\n'; 
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 0x3f3f3f3f;
const double pi = 3.14;
const ll mod = 1000000007;
int dist[10001];
vector<int> adj[10001];
int visited[10001];

void dfs(int parent, int d)
{
	visited[parent] = 1;
	dist[parent] = d;

	for(int child : adj[parent])
	{
		if(visited[child]==0)
		{
			dfs(child, dist[parent]+1);
		}
	}
}

int main() {
	// your code goes here
	
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	int n; cin >> n;
	int u, v, q;
	memset(visited, 0, sizeof(visited));
	for(int i = 0 ; i < n-1 ; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1, 0);

	cin >> q;

	int ans = -1;
	int minD = INT_MAX;
	for(int i = 0 ; i < n ; i++)
	{
		int m; cin >> m;

		if(dist[m] < minD)
		{
			ans = m;
			minD = dist[m];
		}
		else if(dist[m] == minD && m<ans)
		{
			ans = m;
		}
		


	}

	cout << ans << endl;
	return 0;
	} 
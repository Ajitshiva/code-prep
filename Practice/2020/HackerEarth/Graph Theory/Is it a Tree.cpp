//Problem Link
// https://www.spoj.com/problems/PT07Y/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 0x3f3f3f3f;
const double pi = 3.14;
const ll mod = 1000000007;

vector<int> adj[100001];
int visited[100001];

void dfs(int node)
{
	visited[node] = 1;

	for(int child : adj[node])
	{
		if(visited[child]==0)
		{
			dfs(child);
		}
	}
}
int main() {
	// your code goes here
	
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	int n, m; cin >> n >> m;
	int u, v;
	for(int i = 0 ;i < n-1 ; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int count = 0;
	bool flag = true;
	for(int i = 1 ; i <= n ; i++)
	{
		if(visited[i] == 0)
		{
			count++;
			if(count>1)
			{
				flag = false;
				break;
			}
			dfs(i);
		}
	}

	if(flag && m == n-1) cout << "YES" << endl;
	else cout << "NO" << '\n';
	
	return 0;
	} 
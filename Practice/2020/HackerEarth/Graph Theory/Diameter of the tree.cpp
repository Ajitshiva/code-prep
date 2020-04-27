//Problem Link
//https://www.spoj.com/problems/PT07Z/
#include<bits/stdc++.h>
#include<stdio.h>
#define debug(x) cout << '>' << #x << ':' << x << endl;

#define nitro ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
const int INF = 1e9+5;
using namespace std;
using ll = unsigned long long int;
const ll mod = 998244353; 

vector<int> adj[100001];
int visited[100001];
int maxD, maxNode;

void dfs(int node, int d)
{
	if(d>maxD) maxD = d , maxNode = node;
	visited[node] = 1;
	for(int child : adj[node])
	{
		if(visited[child]==0) dfs(child, d+1);
	}
}
int main()
{
	

	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	//clock_t time_req;time_req = clock(); 
	
	int n; cin >> n;

	for(int i = 0 ; i < n ; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	maxD = -1;
	dfs(1,0);

	for(int i = 1; i<= n ; i++) visited[i] = 0;
	maxD = -1;
	dfs(maxNode, 0);

	cout << maxD << '\n';
	//time_req = clock()- time_req;cout << "Time Complexity:"<< \n'<<(float)time_req/CLOCKS_PER_SEC << " seconds" << endl; 
	return 0;
 }
  	
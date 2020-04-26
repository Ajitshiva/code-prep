#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 0x3f3f3f3f;
const double pi = 3.14;
const ll mod = 1000000007;
ll gcd(ll a, ll b)
{
	if(b==0) return a;

	else return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
	return (a*b)/gcd(a,b);
}
ll fastpower(ll base, ll exp, ll mod)
{
	ll ans = 1ll;

	while(exp)
	{
		if(exp&1)
		{
			ans = (ans%mod * base%mod)%mod;
		}
		exp/=2;
		base = (base%mod * base%mod)%mod;
	}
	return ans;
}
const int MAX = 1e5+9;
bool visited[MAX];
vector< int > adj[MAX+1];
void dfs(int node)
{
	visited[node] = true;

	for(auto u : adj[node])
	{
		if(!visited[u])
		{
			dfs(u);
		}
	}
}
void replaceElements(ll arr[], ll n) 
{ 
    unordered_set<ll> s; 
  
    for (int i = 1; i <= n; i++) { 
  
        
        if (s.find(arr[i]) == s.end()) 
            s.insert(arr[i]); 
  
        else { 
  
            
            for (ll j = arr[i] + 1ll; j < LLONG_MAX; j++) { 
                if (s.find(j) == s.end()) { 
                    arr[i] = j; 
                    s.insert(j); 
                    break; 
                } 
            } 
        } 
    } 
} 
int main() {
	// your code goes here
	
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	int t; cin >> t;
	while(t--)
	{

		ll n, k;
		cin >> n >> k;
		ll arr[n+1];
		ll pos[n+1];
		ll temp[n+1];
		// unordered_map<, int>cnt;
		int l = 0;
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> arr[i]; 
		}
		replaceElements(arr,n+1);
		for(int i = 1 ; i <= n ; i++)
		{
			//cout << arr[i] << endl;
			temp[i] = arr[i];
		}
		sort(temp+1,temp+n+1);
		unordered_map <ll, ll> mp;

		for(int i = 1; i <=n ; i++)
		{
			mp[temp[i]] = i; 
			//cout << temp[i] << " " << i << endl;
		}

		for(int i = 1; i <=n ; i++)
		{
			pos[i] = mp[arr[i]];
		}
		bool flag = true;
		for(int i = 1 ; i <=n ; i++)
		{
			if(abs(i-pos[i])%k != 0) flag = false; 
			//cout << i << " " << pos[i] << '\n'; 
		}

		if(flag) cout << "yes" << '\n';
		else cout << "no" << '\n';

	}
	return 0;
	} 
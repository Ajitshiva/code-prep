#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

const int N = 1e5+1;
vector<ll> check;
vector<ll> prime;
vector<ll> dummy_prime;
void sieve()
{
	check.resize(N, 1);

	for(ll i = 2; i < N; i++)
	{
		if(check[i] == 0) continue;
		for(ll j = i * i; j < N; j += i)
		{
			check[j] = 0;
		}
	}
	for(int i = 2; i < N; i++)
	{
		if(check[i]) prime.push_back(i);
	}
}
void solve(ll l, ll r)
{
	ll size = r - l + 1;
	dummy_prime.assign(size, 1);
	for(ll i = 0; i < prime.size(); i++)
	{
		ll base = l / prime[i] * prime[i];
		if(base < l) base += prime[i];
		if(base == prime[i]) base += prime[i];
		for(ll j = base; j <= r; j += prime[i])
		{
			dummy_prime[j-l] = 0;
		}
	}
	for(ll i = l; i <= r; i++)
	{
		if(dummy_prime[i-l]  == 1 && i != 1)
		{
			cout << i << '\n';
		}
	}
}
int32_t main() 
{
	speed;
	int t;
	cin >> t;
	sieve();
	while(t--)
	{
		ll l, r;
		cin >> l >> r;
		solve(l, r);
		cout << '\n';
	}
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
}




/*
		 
*/



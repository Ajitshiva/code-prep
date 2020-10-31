#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long int;

class BIT
{
	public:
		vector<int> bit;
		int n;
		BIT(int n)
		{
			this->n = n;
			bit.assign(n+1, 0);
		}
		ll getSum(int idx)
		{
			ll sum = 0;
			while(idx > 0)
			{
				sum += bit[idx];
				idx -= idx & (-idx);
			}
			return sum;
		}
		void update(int val, int idx)
		{
			while(idx <= n)
			{
				bit[idx] += val;
				idx += idx & (-idx);
			}
		}
};

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int max_ele = *max_element(a, a + n);
		BIT b = BIT(max_ele + 2);

		ll ans = 0;
		for(int i = n-1; i >= 0; i--)
		{
			ans += b.getSum(a[i]);
			b.update(1, a[i] + 1);
		}
		cout << ans << '\n';
	}
	cerr << "Execution Time : " << 1.0 * clock() / CLOCKS_PER_SEC << '\n';
}

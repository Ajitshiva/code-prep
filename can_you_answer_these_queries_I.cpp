// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using ll = long long int;
using namespace std;
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 5 * 1e4 + 1;
ll a[N];
int n;

class seg
{
public:
	ll sum;
	ll prefix_sum;
	ll max_sum;
	ll suffix_sum;
};
seg s[4*N];
seg merge(seg a, seg b)
{
	seg res;
	res.sum = a.sum + b.sum;
	res.max_sum = max(max(a.max_sum, b.max_sum), a.suffix_sum + b.prefix_sum);
	res.prefix_sum = max(a.prefix_sum, a.sum + b.prefix_sum);
	res.suffix_sum = max(b.suffix_sum, b.sum + a.suffix_sum);
	return res;
}
void build(int si, int start, int end)
{
	if(start == end)
	{
		s[si].sum = s[si].prefix_sum = s[si].suffix_sum = s[si].max_sum = a[start];
		return;
	}
	int mid = start + (end - start) / 2;
	int left = 2 * si + 1;
	int right = 2 * si + 2;
	build(left, start, mid);
	build(right, mid+1, end);
	s[si] = merge(s[left], s[right]);

}

seg query(int si, int start, int end, int x, int y)
{
	if(start == x && end == y) return s[si];

	int mid = start + (end - start) / 2;
	int left = 2 * si + 1;
	int right = 2 * si + 2;
	if(y <= mid) return query(left, start, mid, x, y);
	else if(x > mid) return query(right, mid+1, end, x, y);
	else
	{
		return merge(query(left, start, mid, x, mid), query(right, mid+1, end, mid+1, y));
	}
}
int main() 
{
	speed;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	build(0, 0, n-1);
	while(m--)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		seg res = query(0, 0, n-1, x, y);
		cout << res.max_sum << '\n';
	}

}


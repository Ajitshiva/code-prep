#include<bits/stdc++.h>
using namespace std;
int getMid(int s, int e)
{
	return (s+(e-s)/2);
}
void updateUtil(int ss, int se, int diff, int idx, int *st, int si) 
{
	if(ss > idx || se <  idx) return;

	st[si] += diff;

	if(ss != se)
	{
		int mid = getMid(ss, se);

		updateUtil(ss, mid, diff, idx, st, 2*si+1);
		updateUtil(mid + 1, se, diff, idx, st, 2*si+2);
	}

}
void update(int val, int idx, int arr[], int n, int *st)
{
	if(idx < 0 || idx > n-1) return;

	int old_value = arr[idx];

	int diff = val-old_value;
	arr[idx] = val;
	updateUtil(0, n-1, diff, idx, st, 0);
}
int getSumUtil(int qs, int qe, int ss, int se, int *st, int si)
{
	if(ss >= qs && se <= qe) return st[si];
	if(ss > qe || se < qs) return 0;
	
		int mid = getMid(ss, se);

		return getSumUtil(qs, qe, ss, mid, st, 2*si+1) +
				getSumUtil(qs, qe, mid+1, se, st, 2*si+2);
	
}
int getsum(int qs, int qe, int ss, int se, int *st)
{
	if(qs < ss || qe > se || qs > qe) 
	{
		cout << "Invalid Input" <<'\n';
		return -1;
	}
	return getSumUtil(qs, qe, ss, se, st, 0);
}
int constructSTUtil(int *arr, int ss, int se, int *st, int si)
{
	if(ss == se)
	{
		st[si] = arr[ss];
		return st[si];
	}
	int mid = getMid(ss,se);
	st[si] = constructSTUtil(arr, ss, mid, st, 2*si+1) + 
			 constructSTUtil(arr, mid+1, se, st, 2*si+2);

	return st[si];		 
}
int *constructST(int *arr, int n)
{
	int height = (int)ceil(log2(n));
	int total_nodes = (int)pow(2,height) - 1;
	int *st  = new int[total_nodes];
	constructSTUtil(arr, 0, n-1, st, 0);
	
	return st;
}
int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	
	int arr[] = {1, 3, 5, 7, 9, 11};
	int n = (int)sizeof(arr)/sizeof(arr[0]);


	int *st = constructST(arr, n);

	cout << getsum(0, 5, 0, n-1, st) << '\n';
	update(17, 3, arr, n, st);

	cout << getsum(0, 5, 0, n-1, st);
}

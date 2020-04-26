#include<bits/stdc++.h>
using namespace std;
int swap(int start,int end)
{
    int temp;
    temp ^= start ^=end ^=temp;;
    cout<<start<<end<<"\n";
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=1;i<n-1;i++)
        {
            swap(a[i-1],a[i]);
        }
    }
}
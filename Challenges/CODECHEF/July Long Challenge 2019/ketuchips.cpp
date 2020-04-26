#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=1;i<n+1;i++) cin>>a[i];
        int count =0;
        int ldp[n][n];
        int rdp[n+1][n+1];
        for(int i=1;i<n+1;i++)
        {
            for(int j = i+1;j<n+1;j++)
            {
                for(int k = j;k<n+1;k++)
                {
                    int lhs= 0,rhs =0;
                    cout<<i<<j<<k<<endl;
                    for(int l =i;l<j;l++) lhs^=a[l];
                    for(int l =j;l<=k;l++) rhs^=a[l];
                    cout<<lhs<<rhs<<endl;
                    if(lhs==rhs) count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
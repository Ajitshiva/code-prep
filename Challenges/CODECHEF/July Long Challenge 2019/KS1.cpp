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
        /*for(int i=1;i<n+1;i++)
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
        }*/
        for(int i=1;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(j==i) ldp[i][j] = a[j];
                else ldp[i][j] = ldp[i][j-1]^a[j];
                cout<<ldp[i][j]<<" ";   
            }
            cout<<endl;
        }
         for(int i=2;i<n+1;i++)
        {
            for(int j=i;j<n+1;j++)
            {
                if(i==j) rdp[i][j] = a[j];
                else rdp[i][j] = rdp[i][j-1]^a[j];
                cout<<rdp[i][j]<<" ";  
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++)
        {
            int num = a[i];
            for(int j=i+1;j<i+3;j++)
            {
                for(int k =j;k<n+1;k++)
                {
                    if(rdp[j][k]==num) count++;
                }
            }
        }
        
        cout<<count<<endl;

    }
}
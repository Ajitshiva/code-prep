#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int b[n+n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=0;j<n;j++) b[j]=a[j];
        for(int j=n,i=0;j<n+n;j++) b[j] = a[i++];
        int prefix[n+n],suffix[n+n];
        prefix[0]=1;suffix[0]=1;
        for(int i=1;i<n+n;i++)
        {
            if(b[i]-1==b[i-1]) prefix[i] = prefix[i-1]+1;
            else prefix[i]=1;
        }
        for(int i=1;i<n+n;i++)
        {
            if(b[i]==b[i-1]-1) suffix[i] = suffix[i-1]+1;
            else suffix[i]=1;
        }
        /* for(int i=0;i<n+n;i++) cout<<prefix[i];
        cout<<endl;
        for(int i=0;i<n+n;i++) cout<<suffix[i];*/
        int flag = 0;
        for(int i=0;i<n+n;i++)
        {
            if(prefix[i]==n || suffix[i]==n) flag =1;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}
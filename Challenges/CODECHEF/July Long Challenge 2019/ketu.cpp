#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int front=0,back=n-1;
    int ketu=0,petu=0;
    
    while(front<back)
    {
        ketu+=a[front++];
        petu+=a[back--];
    }
    if(n==1) cout<<a[0]<<"\n";
    else if(n%2==1) cout<<petu-(ketu+a[front])<<"\n";

    else cout<<petu-ketu<<"\n";
}

#include<bits/stdc++.h>
using namespace std;
int factor(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int b[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) 
    {
        int temp=1;
        for(int j=0;j<n;j++)
        {
            if(j!=i) temp*=arr[j];
        }
        b[i]=temp;
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        res += factor(b[i]);
    }
    cout<<res;
}
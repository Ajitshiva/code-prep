#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        temp[i] = arr[i];
    }
    int start = 0,end = 0;
    bool flag1 = true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1]) {end = i;flag1 = false;}
        else if(arr[i]>arr[i-1] && flag1) start=i;
    }
    sort(arr,arr+n);
    sort(temp+start,temp+end+1);
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=temp[i]) flag = false;
    }
    if(flag==true) 
    {
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<end+1<<endl;
    }
    else cout<<"no";
}
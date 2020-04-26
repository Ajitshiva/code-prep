#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0,y =0;
    int count = 0;
    int n; cin>>n;
    for(int i = 0;i<n;i++)
    {
        count+=10;
        int dir = i % 4;
        if(dir==0) x += count;
        else if(dir==1) y += count;
        else if(dir==2) x -=count; 
        else if(dir==3) y -=count;
    }
    cout<<x<<","<<y<<endl;
}
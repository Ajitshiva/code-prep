#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int A[m][n];
    vector<pair<int,int>> res;
    int count=0;
    bool flag = true;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
            flag &= (A[i][j]==0);
        }
    }
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(A[i][j]==1 && A[i+1][j]==1 && A[i][j+1]==1 && A[i+1][j+1]==1)
            {
                res.push_back(make_pair(i+1,j+1));
                count++;
            }
        }
        
    }
    if(flag==true)
    {
        cout<<0<<endl;
    }
    else if(count>0)
    {
        cout<<count<<'\n';
        for(int i=0;i<count;i++)
        {
            cout<<res[i].first<<" "<<res[i].second<<'\n';
        }
    }
    else 
    {
        cout<<-1<<'\n';
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string cards;
        getline(cin,cards);
        int one=0;
        for(int i=0;i<cards.size();i++)
        {
            if(cards[i]=='1') one++;
        }
        if(one%2==0) cout<<"LOSE"<<"\n";
        else cout<<"WIN"<<"\n";
    }  
}
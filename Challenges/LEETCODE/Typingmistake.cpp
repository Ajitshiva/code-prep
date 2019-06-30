/*https://leetcode.com/problems/long-pressed-name/submissions/ */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string named,typed;
    cin>>named>>typed;
    unordered_map<char,int> index(26);
    bool found = false;
    for(int i=0,j=0;j<typed.size();)
    {
        if(named[i]==typed[j]) i++;j++;
        if(named[i]!=typed[j]) j++;
        if(i==named.size()) found = true;
    }
    if(found) cout<<"yes";
    else cout<<"no";
    

}
/*
saeed
ssaaedd
no */
#include <iostream>
#include<vector>
using namespace std;
#define FORI(s,n) for(int i = s;i<n;i++)
int maxChunksToSorted(vector<int> &a)
{
    int m=0,c=0;
    FORI(0,a.size())
    {
        m = max(a[i],m);
        if(m==i)
            c++;
    }
    return c;
}
int main()
{
    vector<int> a;
    FORI(0,5)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    int ans = maxChunksToSorted(a);
    cout<<ans;
}
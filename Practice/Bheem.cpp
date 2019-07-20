#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int max = 1e9+7;
    int t;cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        long long numerator=1;
        long long denominator=1;
        for(int i=N;i>0;i--)
        {
            numerator =(numerator*i)%max;
        }
        for(int i=(N-K);i>0;i--)
        {
            denominator =(denominator*i)%max;
        }
        cout<<(numerator/denominator)<<"\n";


    }
}
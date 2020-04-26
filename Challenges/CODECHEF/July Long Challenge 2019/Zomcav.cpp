#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    ll n;cin>>n;
	    vector<ll> prefix(n,0);
        vector<ll> suffix(n,0);
        vector<ll> caves(n,0);
	    vector<ll> radiation;
	    vector<ll> health;
	    for(int i=0;i<n;i++)
	    {
	        ll rad;cin>>rad;radiation.push_back(rad);
	    }
	    for(int i=0;i<n;i++)
	    {
	        ll hel;cin>>hel;health.push_back(hel);
        }
        for(int i=0;i<n-1;i++)
        {
            ll effect = radiation[i];
            prefix[i+1] +=1;
            if(i+effect+1<n)
            {
                prefix[i+effect+1] -=1;
            }
        }
        
        for(int i=1;i<n;i++)
        {
            prefix[i] +=prefix[i-1];
        }
        for(int i=n-1;i>0;i--)
        {
            ll effect = radiation[i];
            suffix[i-1] +=1;
            if(i-effect-1>=0)
            {
                suffix[i-effect-1] -=1;
            }
        }
        
        for(int i =n-2;i>=0;i--)
        {
            suffix[i] +=suffix[i+1]; 
        }
        for(int i=0;i<n;i++)
        {
            caves[i] =prefix[i]+suffix[i]+1;
        }
        sort(caves.begin(),caves.end());
        sort(health.begin(),health.end());
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(caves[i]!=health[i])
               break;
            else
            {
                count++;
            }
        }
        if(count==n) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
	}
	return 0;
}

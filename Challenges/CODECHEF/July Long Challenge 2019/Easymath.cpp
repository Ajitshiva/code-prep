#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int res = INT_MIN;
        for(int i=0;i<n;i++)
        {
            
            int temp_sum;
            for(int j=i+1;j<n;j++)
            {
                int temp_product;
                if(i!=j) 
                {
                    temp_product = a[i]*a[j];
                    int sum;
                    for(sum=0;temp_product>0;sum+=temp_product%10,temp_product /=10);
                    temp_sum = max(temp_sum,sum);
                }
                
            }

            res = max(res,temp_sum);
        }
        cout<<res<<endl;
    }
}
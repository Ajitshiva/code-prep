#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int chef,keta,bottle,s_c,s_k,sum_c,sum_k;
        cin>>chef>>keta>>bottle>>s_c>>s_k;
        double d_c = abs(chef-bottle);
        double d_k = abs(keta-bottle);

        for (sum_c = 0; d_c > 0; sum_c += d_c % 10, d_c /= 10);
        for (sum_k = 0; d_k > 0; sum_k += d_k % 10, d_k /= 10);
        d_c /=pow(1,sum_c-1);
        d_k /=pow(1,sum_k-1); 

        if(d_c == d_k) 
        {
            if(s_c==s_k) cout<<"Draw";
            else s_c>s_k?cout<<"Chef":cout<<"Keta";
        }
        else
        {
            int i=0,j=0,c_count =0,k_count =0;
            while(i!=d_c)
            {
                c_count++;
                i +=s_c;
            }
            while(j!=d_k)
            {
                k_count++;
                j +=s_k;
            }
            if(c_count==k_count) cout<<"Draw";
            else c_count<k_count?cout<<"Chef":cout<<"Keta";
        }
        
        

    }
}
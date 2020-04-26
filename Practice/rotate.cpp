#include<bits/stdc++.h>
using namespace std;
int main() 
{
        int N = 10;   
        int a[6]={0};
        
        int b[6]={0};
        int res =0;
        for(int i=1;i<N;i++)
        {
            int index =0,count =0;
            while(i>0)
            {
                int num = i%10;
                b[index++] = num;
                index--;
                if(num==2) a[index++] = 5;
                else if(num==6) a[index++] =9;
                else a[index++] = num;
                i /=10;
            }
            for(i=0;i<index;i++) 
            {
                if(a[index] != b[index]) 
                    count++;
            }
            if(count==index) res++;
        }
        cout<<res;
        
    }
#include<bits/stdc++.h>
using namespace std;
void lcs(char *x,char *y,int m,int n)
{
    int dp[m+1][n+1];
    cout<<x[0];
    for(int i =0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0 )
            {
                dp[i][j] = 0;
            }
            else if(x[i-1]==y[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int index = dp[m][n];
    char lcs[index+1];
    lcs[index] = '\0';
    int i = m, j = n;
    while(i > 0  && j > 0)
    {
        if(x[i-1] == y[i-1])
        {
            lcs[index-1] = x[i-1];
            cout<<x[i-1];
            i--; j--; index--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    cout<<lcs;
}
int main()
{
    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
    int m = strlen(x);
    int n = strlen(y);
    lcs(x,y,m,n);
}
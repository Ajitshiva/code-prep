#include <iostream>
#include <algorithm>
#include <vector> 
#include <string>
using namespace std;
int numMatchingSubseq(string S, vector<string>& words) 
{
    vector<vector<int>> alpha(26);
    for(int i=0;i<S.size();i++)
    {
       alpha[S[i]-'a'].push_back(i);
    }
    int num_found =0;
    for(auto &word :words)
    {
        int curr_idx = -1;
        bool found = true;

        for(char c:word)
        {
            auto it = upper_bound(alpha[c-'a'].begin(),alpha[c-'a'].end(),curr_idx);
            if(it == alpha[c-'a'].end()) found = false;
            else curr_idx = *it;
        }
        if(found) num_found++;
    }
    return num_found;

}
int main()
{
    string S = "abcde";
    vector<string> words = {"a","bb","acd","ace"};
    int ans = numMatchingSubseq(S,words);
    cout<<ans;
}

#include <bits/stdc++.h>
using namespace std;
struct trie
{
	int wc;// wc means word_count
	bool is_end;
	unordered_map<char, trie*> mp;
	trie()
	{
		wc = 0;
		is_end = false;
	}
};

struct trie *root;

void insert(string s)
{
	struct trie *cur = root;
	for(char c : s)
	{
		if(!cur->mp.count(c))
		{
			cur->mp[c] = new trie();
		}
		cur->mp[c]->wc += 1;
		cur = cur->mp[c];
	}
	cur->is_end = true;
}
bool search(string s)
{
	struct trie *cur = root;
	for(char c : s)
	{
		if(!cur->mp.count(c))
		{
			return false;
		}
		cur = cur->mp[c];
		
	}
	return cur->is_end && cur->wc ;
}
void remove(string s)
{
	struct trie *cur = root;
	if(search(s))
	{
		for(char c : s)
		{
			if(cur -> mp.count(c))
			{
				cur->mp[c]->wc -=1;
			}
			cur = cur -> mp[c];
		}
	}	
}
int count_prefix(string s)
{
	struct trie* cur = root;
	for(char c: s)
	{
		if(cur->mp.count(c)==0 || cur->mp[c]->wc<=0)
		{
			return 0;
		}
		cur = cur->mp[c];
	}
	return cur->wc;
}
int main() {
	// your code goes here
	
	//freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

	int n; cin >> n;
	root = new trie();
	while(n--)
	{
		string s;
		cin >> s;
		insert(s);
	}
	cout << "Before Deletion : \n";
	cout << "------------------- \n";
	int q; cin >> q;
	while(q--)
	{
		string s;
		cin >> s;
		if(search(s)) cout << s << " is present" <<'\n';
		else cout << s << " is not present" <<'\n' ;
	}
	cout << '\n';
	cout << "Count Prefix: \n";
	cout << "------------------- \n";
	int c; cin >> c;
	while(c--)
	{
		string s; cin >> s;
		cout <<"There are "<<count_prefix(s)<<" strings with given prefix "<< s<<'\n';  
	}
	int d; cin >> d;
	while(d--)
	{
		string s;
		cin >> s;
		remove(s);
	}
	cout << '\n';
	cout << "After Deletion : \n";
	cout << "------------------- \n";
	int v; cin >> v;
	while(v--)
	{
		string s;
		cin >> s;
		if(search(s)) cout << s << " is present" <<'\n';
		else cout << s << " is not present" <<'\n' ;
	}


	

		
	return 0;

	} 
#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool check(int first,int last,vector<vector<int> > &f,vector<int> &cnt)
{
	for(int i = 'a' ; i <= 'z' ; i++ )
	{
		if( cnt[i-'a'] )
		{
			if( f[last][i-'a'] == f[first-1][i-'a'] )
				return false;
		}
	}
	return true;
}

int bin_search(int pos,int l,int r,vector<vector<int> > &f,vector<int> &cnt_char)
{
	int index = -1;
	while( l <= r )
	{
		int m = (l+r)/2;
		if( check(pos,m,f,cnt_char) )
		{
			index = m;
			r = m-1;
		}
		else l = m+1;
	}
	return index;
}

void solve()
{
	string s;
	cin >> s;
	s = '@' + s;
	vector<int> a(26,0);
	vector<vector<int>> f(s.size()+5);
	for(int i = 1 ; i < s.size() ; i++ )
		a[s[i]-'a']++;
	vector<int> cnt_char(26,0);
	f[0] = cnt_char;
	for(int i = 1 ; i < s.size() ; i++ )
	{
		cnt_char[s[i]-'a']++;
		f[i] = cnt_char;
	}
	int Min = INT_MAX;
	for(int i = 1 ; i < s.size() ; i++ )
	{
		int first = i , last = bin_search(i,i,s.size()-1,f,cnt_char);
		if( last != -1 ) Min = min(Min,last-first+1);
	}
	cout << Min << endl;
}

int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) 
       solve();
    return 0;
}

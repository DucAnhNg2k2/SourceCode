#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool check(vector<int> &a,vector<int> &b)
{
	for(int i = 'a' ; i <= 'z' ; i++ )
	{
		if( a[i] < b[i] )
			return false;
	}
	return true;
}

void solve()
{
	string s1,s2;
	cin >> s1 >> s2;
	vector<int> b(300,0);
	for(int i = 0 ; i < s2.size() ; i++ )
	{
		b[s2[i]]++;
	}
	string ans= "{";
	for(int i = 0 ; i < s1.size() ; i++ )
	{
		vector<int> a(300,0);
		string res = "";
		for(int j = i ; j < s1.size() ; j++ )
		{
			a[s1[j]]++;
			res += s1[j];
			if( check(a,b) )
			{
				if( ans == "{" ) ans = res;
				if( ans.size() > res.size() ) ans = res;
				break;
			}
		}
	}
	if( ans == "{" ) cout << -1 << endl;
	else cout << ans << endl;
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


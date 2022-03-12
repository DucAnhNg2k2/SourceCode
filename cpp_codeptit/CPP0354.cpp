#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	string res = "" ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		int dem = 0 ;
		for(int j = i ; j < s.size() , s[j] == s[i] ; j++ )
		{
			dem++ ; 
			i = j;	
		}	
		res += s[i] ;
		res += to_string(dem);
	}	
	cout << res << endl; 
}

int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

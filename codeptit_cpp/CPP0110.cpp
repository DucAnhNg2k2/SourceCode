#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int n = s.size() ;
	string res = "";
	for(int i = 0 ; i < n ; i++ )
	{
		if( i < n && s[i] == '0' ) 
		{
			if( i+1 < n && s[i+1] == '8' )
			{
				if( i+2 < n && s[i+2] =='4' )
				{
					 i+=2;
					 continue;
				}
			}
		}
		res += s[i] ;
	}
	cout << res << endl;
}
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

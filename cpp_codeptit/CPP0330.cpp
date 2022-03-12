#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s,ans = "";
	cin >> s;
	int dd[10] = {};
	for(int i = 0 ; i < s.size() ; i++ )
	{
		dd[s[i]-48]++;
	}
	map<int,int> m;
	for(int i = 0 ; i < 10 ; i++)
	{
		if( dd[i]%2 == 0 && dd[i] > 0 )
		{
			m[i] = dd[i];
		}
	}
	if( m.size() == 0 )
	{
		int Max = -1 , pos = 0;
		for(int i = 1 ; i < 10 ; i++ )
		{
			if( Max <= dd[i] && dd[i] > 0 )
			{
				Max = dd[i];
				pos = i;
			}
		}
		if( Max == -1 ) ans = s;
		else 
		{
			for(int i = 1 ; i <= Max ; i++ )
			{
				ans += to_string(pos);
			}
		}
	}
	else 
	{
		int Max = -1 , pos ;
		for(int i = 0 ; i < 10 ; i++ )
		{
			if( dd[i]%2 == 1 && dd[i] > 0 && Max <= dd[i] )
			{
				Max = dd[i];
				pos = i;
			}
		}
		string res = "" ;

		for(int i = 9 ; i >= 0 ; i-- )
		{
			if( i == 0 && res == "" ) continue; 
			if( dd[i]%2 == 0 && dd[i] > 0 )
			{
				for(int j = 1 ; j <= dd[i]/2 ; j++ )
				{
					res += to_string(i);
				}
			}
		}

		ans = res;
		if( Max != -1 )
		{
			for(int i = 1 ; i <= Max ; i++ )
			{
				ans += to_string(pos);
			}
		}

		for(int i = res.size()-1 ; i >= 0 ; i-- )
		{
			ans += res[i];
		}

		if( ans == "" ) ans = s;
	}
	cout << ans << endl;
}

int main() 
{
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}


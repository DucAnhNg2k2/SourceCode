#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	for(int i = 0 ; i < s.size()-1 ; i++ )
	{
		if( abs(s[i+1]-s[i]) != 1  )
		{
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
}
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t ;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

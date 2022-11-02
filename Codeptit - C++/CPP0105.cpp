#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		int t = (int)(s[i]-'0');
		if( t != 0 && t != 6 && t != 8 )
		{
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin >> n;
	while( n-- )
	{
		solve();
	}
}

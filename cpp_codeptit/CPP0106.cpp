#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	for(int i = 0  , j = s.size()-1 ; i <= j ; i++ ,j--)
	{
		if( s[i] != s[j] )
		{
			cout <<"NO" <<endl;
			return; 
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

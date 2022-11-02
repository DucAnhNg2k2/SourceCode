#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a,m ;
	cin >> a >> m ;
	for(int x = 0 ; x <= m-1 ; x++ )
	{
		if( (a*x)%m == 1 )
		{
			cout << x << '\n' ;
			return ;
		}
	}
	cout << -1 << '\n' ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}


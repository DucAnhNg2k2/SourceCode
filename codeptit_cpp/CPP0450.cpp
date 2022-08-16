#include<bits/stdc++.h>
using namespace std;

void solve()
{
	vector<bool> check(1e6+5,false);
	int n ;
	cin >> n;
	vector<int> a(n) ;
	for( auto &i : a) cin >> i ;
	for( auto i:a )
	{
		if( !check[i] ) check[i] = true ;
		else
		{
			cout << i << '\n' ;
			return ;
		}
	}
	cout << -1 << '\n' ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t ;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}



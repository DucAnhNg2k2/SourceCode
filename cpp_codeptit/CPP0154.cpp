#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n ; long long k , sum = 0 ;
	cin >> n >> k ;
	for(int i = 1 ; i <= n ; i++ )
	{
		sum += (i%k) ;
	}
	if( sum == k ) cout << 1 << '\n' ;
	else cout << 0 << '\n' ;
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


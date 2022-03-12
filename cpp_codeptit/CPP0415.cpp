#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , m ;
	cin >> n >> m ;
	long long max = -1e18 , min = 1e18 ; 
	for(int i = 1 ; i<= n; i++ )
	{
		long long a; 
		cin >> a ;
		if( max < a) max = a;
	}
	for(int i = 1 ; i<= m ; i++ )
	{
		long long b;
		cin >> b;
		if( min > b ) min = b;
	}
	cout << min*max << '\n' ;
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



#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , k ; long long max = -1e10 ;
	cin >> n >> k ;
	vector<long long> a(n+5) , f(n+5) ;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
	f[1] = a[1] ; f[0] = 0 ;
	for(int i = 2 ; i <= n ; i++ ) f[i] = f[i-1] + a[i] ;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( i+k-1 > n ) break;
		long long sum = f[i+k-1] - f[i-1] ;
		if( max < sum ) max = sum ;
	}
	for(int i = 1 ; i <= n ; i++ )
	{
		if( i+k-1 > n ) break;
		long long sum = f[i+k-1] - f[i-1] ;
		if( max == sum )
		{
			for(int j = i ; j <= i+k-1 ; j++ )
			{
				cout << a[j] << ' ' ;
			}
			cout << '\n' ;
			return ;
		}
	}
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



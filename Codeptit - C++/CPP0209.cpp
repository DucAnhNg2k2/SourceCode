#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , q ;
	cin >> n >> q ;
	vector<long long> a(n+5) ;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
	vector<long long> sum(n+5) ;
	sum[0] = 0 ;
	sum[1] = a[1] ;
	for(int i = 2 ; i <= n ; i++ ) sum[i] = sum[i-1] + a[i] ;
	while( q-- )
	{
		int l , r ;
		cin >> l >> r ;
		cout << sum[r] -sum[l-1] << '\n' ; 
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
		solve() ;
	}
	
}



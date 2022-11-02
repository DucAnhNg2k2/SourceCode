#include<bits/stdc++.h>
using namespace std ;
 
const long long mod = 1e9 + 7 ;
long long dp[1000005] ;
void solve()
{
	long n , k ;
	cin >> n >> k ;
	for(int i = 1 ; i <= n ; i++ ) dp[i] = 0 ;
	dp[0] = 1 ;
	for(long i = 1 ; i <= n ; ++i )
	{
		for(long j = max((long)0,i-k) ; j < i ; j++ )
		{
			dp[i] += dp[j] ;
			dp[i] %= mod ;
		}
	}
	cout << dp[n] << '\n' ;
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}
 
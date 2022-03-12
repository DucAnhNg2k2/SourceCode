#include<bits/stdc++.h>
using namespace std ;
 
const long long mod = 1e9 + 7 ;
long long dp[1000005] ;
void solve()
{
	int n;
	cin >> n;
	long long f[n+5];
	f[0] = 1;
	f[1] = 1;
	f[2] = 2;
	for(int i = 3 ; i <= n ; i++) {
		f[i] = f[i-1] + f[i-2] + f[i-3];
	}
	cout << f[n] << endl;
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
 
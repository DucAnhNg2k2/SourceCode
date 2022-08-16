#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
long long Power(long long a,long long b)
{
	if( b == 0 ) return 1;
	if( b == 1 ) return a%mod ;
	else
	{
		long long temp = Power(a,b/2)%mod;
		if( b%2 == 0 ) return (temp*temp)%mod;
		else return ( (temp*temp)%mod * a%mod )%mod;
	}
}
void solve()
{
	long long n , x , sum = 0 ;
	cin >> n >> x;
	for(int i = 1 ; i <= n ; i++ ) 
	{
		long long a ;
		cin >> a;
		long long hesox = Power(x,n-i);
		sum = ( sum%mod + (hesox%mod*a%mod)%mod )%mod;
	}
	cout << sum << '\n' ;
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


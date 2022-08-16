#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1005][1005] = {0};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll cot = 1 ;
	for(ll i = 1 ; i < 1005 ; i++ )
	{
		for(ll j = 1 ; j <= cot ; j++ )
		{
			if( j == 1 ) a[i][j] = i;
			else if( j == cot ) a[i][j] = 1;
			else{
				a[i][j] =  a[i-1][j] + a[i-1][j-1] ;
				a[i][j] %= mod;
			}
		}
		cot++;
	}
	int t;
	cin >> t;
	while( t-- )
	{
		ll n , k;
		cin >> n >> k;
		cout << a[n][k] << endl;
	}
}      


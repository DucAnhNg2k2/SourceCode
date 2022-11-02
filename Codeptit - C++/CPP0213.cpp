#include<bits/stdc++.h>
using namespace std;
vector<long long> f(95);

bool check(long long x)
{
	for(int j = 0 ; j <= 92 ; j++ )
		{
			if( x == f[j] ) 
			{
				return true ;
			}
		}
		return false ;
}
void solve()
{
	int n; long long x;
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> x;
		if( check(x) ) 
		{
			cout << x << ' ' ;
		}
	}
	cout << '\n' ;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	f[0] = 0 ; f[1] = 1 ;
	for(int i = 2 ; i <= 92 ; i++ )
	{
		f[i] = f[i-1]+f[i-2];
	}
 	int t;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}      


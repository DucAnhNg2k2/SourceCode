#include<bits/stdc++.h>
using namespace std;

long long Power(long long x,long long y,long long p)
{
	if( y == 0 ) return 1 ;
	if( y == 1 ) return x%p ;
	else 
	{
		long long temp = Power(x,y/2,p);
		if( y&1 )
		{
			return ( ( (temp*temp)%p )*(x%p) ) %p;
		}
		else
		{
			return (temp*temp)%p ;
		}
	}
}

void solve()
{
	long long x,y,p;
	cin >> x >> y >> p;	
	cout << Power(x,y,p) << '\n' ;
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


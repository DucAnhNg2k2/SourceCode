#include<bits/stdc++.h>
using namespace std;
 
long long lcm(long long a,long long b)
{
	return a*b/__gcd(a,b);
}
 
int demcs(long long a)
{
	int dem = 0 ;
	while( a > 0 )
	{
		dem++;
		a/=10;
	}
	return dem ;
}
void solve()
{
	long long x,y,z,n;
	cin >> x >> y >> z >> n;
	if( n <= 0 )
	{
		cout << -1 << '\n' ;
		return ;
	}
	long long boi_min = lcm(x,lcm(y,z));
	long long tt = pow(10,n-1) ;
	if( demcs(tt) < demcs(boi_min) ) cout << -1 << '\n' ;
	else if( demcs(tt) == demcs(boi_min) ) cout << boi_min << '\n' ;
	else 
	{
		if( tt%boi_min == 0 )
		{
			cout << tt << '\n' ;
		}
		else 
		{
			long long nhan = tt /boi_min ;
			boi_min *= (nhan+1) ;
			if( demcs(boi_min) == demcs(tt) ) cout << boi_min << '\n' ;
			else cout << -1 << '\n' ;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- )
    {
    	solve();
	}
}  

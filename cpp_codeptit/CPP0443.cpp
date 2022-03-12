#include<bits/stdc++.h>
using namespace std;


void solve()
{
	int n ;
	cin >> n;
	long long sum = (n)*(1+n)/2 , a , s = 0 ;
	for(int i = 1 ; i <= n-1 ; i++ )
	{
		cin >> a ;
		s += a ;
	}
	cout << sum - s << '\n' ;
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



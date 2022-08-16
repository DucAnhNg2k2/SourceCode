#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n ;
	cin >> n;
	vector<long long> a(n+5) ;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
	int l = 1 , r = n , dem = 0 ;
	while( l <= r )
	{
		if( a[l] == a[r] )
		{
			l++;
			r--;
		}
		else if( a[l] < a[r] ) 
		{
			l++;
			a[l] += a[l-1] ;
			dem++;
		}
		else
		{
			r--;
			a[r] += a[r+1] ;
			dem++;
		}
	}
	cout << dem << '\n' ;
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



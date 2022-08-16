#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , k , dem = 0 ;
	cin >> n >> k ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = i+1 ; j < n ; j++ )
		{
			if( a[i] + a[j] == k ) dem++;
		}
	}
	cout << dem << '\n' ;
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



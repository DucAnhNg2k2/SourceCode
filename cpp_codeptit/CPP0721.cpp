#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	long long a[n] , f[n] ;
	for(int i = 0 ; i < n; i++ ) cin >> a[i] ;
	f[0] = 1;
	for(int i = 1 ; i < n; i++ )
	{
		int max = 0 ;
		for(int j = 0 ; j < i ; j++ )
		{
			if( a[i] > a[j] && max < f[j] ) max = f[j] ;
		}
		f[i] = max + 1 ;
	}
	int max = 0 ;
	for(int i = 0 ; i < n;  i++ ) if( max < f[i] ) max = f[i] ;
	cout << max << endl; 
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

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	long long a[n] , saved , max = -1 ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	saved = a[0] ;
	for(int i = 1 ; i < n ; i++ )
	{
		if( a[i] >= saved ) 
		{
			if( max < a[i] - saved ) max = a[i] -saved ;
		}
		if( saved > a[i] ) saved = a[i] ;
	}
	cout << max << '\n' ;
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

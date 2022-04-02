#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
	long long a[n] , max = -1e18 ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	for(int i = 0 ; i < n ; i++ )
	{
		long long s = 1 ;
		for(int j = i ; j < n ; j++ )
		{
			s *= a[j] ;
			if( max < s ) max = s ;
		}
	}
	cout << max << endl; 
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while( t-- )
	{
        solve();
    }
}  

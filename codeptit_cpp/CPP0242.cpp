#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , max = 0 ;
	cin >> n;
	bool a[n] , b[n] ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	for(int i = 0 ; i < n ; i++ ) cin >> b[i] ;
	
	for(int i = 0 ; i < n ; i++ )
	{
		int dem1 = 0 ;
		int dem2 = 0 ;
		for(int j = i ; j < n ; j++ ) 
		{
			dem1 += a[j] ;
			dem2 += b[j] ;
			if( dem1 == dem2 )
			{
				if( max < j-i+1 ) max = j-i+1; 
			}
		}
	}
	cout << max << endl ;
}

int main()
{
    int t;
    cin >> t;
    while( t-- )
	{
    	solve();
    }
} 

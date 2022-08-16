#include<bits/stdc++.h>
using namespace std;


string solve()
{
	int n ;
	cin >> n;
	vector<long long> a(n+5) ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	int l,r,tang = 0 ,giam = 0 ;
	cin >> l >> r;
	for(int i = l ; i < r ;i++ )
	{
			if( a[i] < a[i+1] )
			{
				if( giam > 0 ) return "No\n" ;
				tang++;
			}
			if( a[i] > a[i+1] )
			{
				giam++;
			}
	}	
	return "Yes\n";
}

int main()
{
    int t;
    cin >> t;
    while( t-- )
	{
        cout << solve();
    }
} 

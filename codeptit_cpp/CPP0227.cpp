#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n ;
	cin >> n;
	vector<vector<int> > a(n,vector<int>(n)) ;
	for(int i = 0 ; i < n ; i++ )
		for(int j = 0 ; j < n ; j++ )
			cin >> a[i][j] ;
	bool check = true ;
	for(int i = 0 ; i < n ; i++ )
	{
		if( check )
		{
			check = false ;
			for(int j = 0 ; j < n ; j++ ) cout << a[i][j] << ' ' ;
		}
		else
		{
			check = true ;
			for(int j = n-1 ; j >= 0 ; j-- ) cout << a[i][j] << ' ' ;
		}
	}
	cout << '\n' ;
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




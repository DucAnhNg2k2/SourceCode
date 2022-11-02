#include<bits/stdc++.h>
using namespace std;

void solve()
{
	vector<bool> check(1e6+5,false);
	int n ;
	cin >> n;
	vector<vector<int> > a(n,vector<int>(n)) ;
	for(int i = 0 ; i < n ; i++ )
		for(int j = 0 ; j < n ; j++ )
			cin >> a[i][j] ;
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < n ; j++ )
		{
			if( i == 0 || i == n-1 || j == 0 || j == n-1 ) 
			{
				cout << a[i][j] << ' ';
			}
			else cout << ' ' << ' ' ;
		}
		cout << '\n' ;
	}
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




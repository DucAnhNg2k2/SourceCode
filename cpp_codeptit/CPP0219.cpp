#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , m ;
	cin >> n >> m ;
	vector<vector<int> > a(n,vector<int>(m)) ;
	for(int i = 0 ; i < n ; i++ )
		for(int j = 0 ; j < m ; j++ )
			cin >> a[i][j] ;
	bool cot[105] = {false} , hang[105] = {false};
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < m ; j++ )
		{
			if( a[i][j] == 1 )
			{
				hang[i] = true ;
				cot[j] = true ;
			}
		}
	}
	for(int i = 0 ; i < n ; i++ )
	{
		for(int j = 0 ; j < m ; j++ )
			if( hang[i] || cot[j] )
				cout << 1 << ' ' ;
			else cout << 0 << ' ' ;
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



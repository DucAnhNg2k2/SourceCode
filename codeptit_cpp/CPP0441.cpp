#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long n , x , pos = -1 ;
	cin >> n >> x ;
	vector<long long> a(n+5) ;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( a[i] == x  )
		{
			pos = i ;
			break ;
		}
	}
	cout << pos << endl; 
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



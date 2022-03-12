#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long n , max = -1e10  , a ;
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a; 
		if( max < a ) max = a ;
	}
	cout << max << '\n' ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
	
}



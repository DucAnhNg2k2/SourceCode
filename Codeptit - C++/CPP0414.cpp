#include<bits/stdc++.h>
using namespace std;

void solve()
{
	bool dd[10] = {false} ;
	int n ; 
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		long long a ;
		cin >> a;
		if( a == 0 ) dd[0] = true ;
		while( a > 0 )
		{
			dd[a%10] = true ;
			a /= 10 ;
		}
	}
	for(int i = 0 ; i < 10 ; i++ )
		if( dd[i] ) 
			cout << i << ' ';
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



#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , x , a , pos ;
	cin >> n >> x ;
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a ;
		if( a == x ) pos = i ;
	}
	cout << pos << '\n' ;
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




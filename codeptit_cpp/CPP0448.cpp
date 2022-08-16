#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,x , dem = 0 ;
	cin >> n >> x ;
	for(int i = 1 ; i <= n ;i++ )
	{
		int a ;
		cin >> a ;
		if( a == x ) dem++;
	}
	( dem == 0 )?cout << -1:cout << dem ;
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



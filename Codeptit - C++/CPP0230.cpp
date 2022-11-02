#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , count = 0;
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		int a,b,c, dem = 0 ;
		cin >> a >> b >> c;
		if( a == 1 ) dem++;
		if( b == 1 ) dem++;
		if( c == 1 ) dem++;
		if( dem > 1 ) count++;
	}
	cout << count ;
}
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	while( t-- )
	{
		solve();
	}
}

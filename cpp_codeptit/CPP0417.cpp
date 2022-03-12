#include<bits/stdc++.h>
using namespace std;

long long a[1000005] ;
long long b[1000005] ;
void solve()
{
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		 cin >> a[i] ;
		 b[i] = a[i] ;
	}
	sort(b+1,b+1+n);
	int l,r ;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( b[i] != a[i] ) 
		{
			l = i ;
			break;
		}
	}
	for(int i = n ; i >= 1 ; i-- )
	{
		if( b[i] != a[i] )
		{
			r = i ;
			break;
		}
	}
	cout << l << ' ' << r << endl;
}
int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

#include<bits/stdc++.h>
using namespace std;
 

void solve()
{
	int n , k ;
	cin >> n >> k ;
	long long a[n] ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	sort(a,a+n);
	cout << a[k-1] << endl ;
}
int main()
{   
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

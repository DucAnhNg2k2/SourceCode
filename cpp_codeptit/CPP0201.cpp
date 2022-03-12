#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; long long min = 1e18 ;
	cin >> n;
	vector<long long> a(n) ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	sort(a.begin(),a.end());
	for(int i = 0 ; i < n-1 ; i++ )
	{
		if( min > a[i+1] -a[i] ) min = a[i+1] - a[i] ;
	}
	cout << min << endl;
}
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

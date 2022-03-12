#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<long long> a(n) , f(n,0) ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	f[0] = a[0] ;
	f[1] = max(a[0],a[1]) ;
	for(int i = 2 ; i < n ; i++ )
	{
		f[i] = max(f[i-2]+a[i],f[i-1]);
	}
	cout << f[n-1] << '\n' ;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while( t-- )
	{
        solve();
    }
} 

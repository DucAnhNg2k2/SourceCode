#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , m ;
	cin >> n >> m ;
	vector<long long> a(n+m);
	for(int i = 0 ; i < a.size() ; i++ ) cin >> a[i] ;
	sort(a.begin(),a.end());
	for(int i = 0 ; i < a.size() ; i++ ) cout << a[i] << ' ' ;
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



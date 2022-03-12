#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int k , n ; 
	cin >> k >> n ;
	vector<long long> a(k*n) ;
	for( auto &i : a) cin >> i ;
	sort(a.begin(),a.end());
	for( auto i:a) cout << i << ' ' ;
	cout << '\n' ;
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



#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int k , n ; 
	cin >> n >> k ;
	vector<long long> a(n) ;
	for( auto &i : a) cin >> i ;
	sort(a.begin(),a.end());
	cout << a[k-1] << '\n' ;
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



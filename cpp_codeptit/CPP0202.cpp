#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , min = INT_MAX;
	cin >> n ;
	vector<int> a(n) ;
	for(auto &i:a) cin >> i ;
	sort(a.begin(),a.end());
	for(int i = 0 ; i < n-1 ; i++ )
	{
		if( a[i+1] - a[i] < min ) min = a[i+1] - a[i] ;
	}
	cout << min << '\n' ;
	
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



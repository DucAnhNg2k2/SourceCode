#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , min = INT_MAX ;
	cin >> n;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	for(int i = 0 ; i < n ; i++ )
		for(int j = i+1 ; j < n ; j++ )
			if( abs(a[i]+a[j]) < abs(min) ) min = a[i] + a[j] ;
	cout << min << '\n' ; 
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



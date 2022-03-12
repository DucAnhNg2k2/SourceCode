#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int k , n , max = INT_MIN ;
	cin >> n ;
	vector<long long> a(n) ;
	for( auto &i : a)
	{
		cin >> i ;
		if( max < i ) max = i ;
	}
	cout << max << '\n' ;
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



#include<bits/stdc++.h>
using namespace std;
vector<int> prime ;
void sangnt()
{
	vector<bool> check(1e6+5,true);
	for(int i = 2 ; i*i <= 1e6 ; i++ )
		if( check[i] ) 
			for(int j = i*i ; j <= 1e6 ; j += i )
				check[j] = false ;
	for(int i = 2 ; i <= 1e6 ; i++ )
		if( check[i] )
			prime.push_back(i) ;				
}
bool bin_search(int x)
{
	int l = 0 , r = prime.size()-1 ;
	while( l <= r )
	{
		int m = (l+r)/2;
		if( prime[m] == x ) return true ;
		else if ( prime[m] > x ) r = m-1 ;
		else l = m + 1;
	}
	return false ;
}
void solve()
{
	int n ; 
	cin >> n ;
	for(int i = 0 ; i < prime.size() , prime[i] < n ; i++ )
	{
		if( bin_search(n-prime[i]) )
		{
			cout << prime[i] << ' ' << n-prime[i] << '\n' ;
			return ;
		}
	}
	cout << -1 << '\n' ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sangnt() ;
	int t ;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}



#include<bits/stdc++.h>
using namespace std;

long long dd[1000005] ;
void solve()
{
	int n ,a;
	cin >> n;
	for(auto &i:dd) i = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a ;
		if( a >= 0 ) dd[a]++ ;
	}
	for(int i = 1 ; i < 1e6+5 ; i++ )
	{
		if( dd[i] == 0 )
		{
			cout << i << '\n' ;
			return ;
		}
	}
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



#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int m,s;
	cin >> m >> s;
	if( m*9 < s || s == 0 ) 
	{
		cout << "-1 -1" << '\n' ;
	}
	else
	{
		int max[m] , min[m] = {0} ;
		int tt1 = s ;
		for(int i = 0 ; i < m ; i++ )
		{
			if( s > 9 )
			{
				s -= 9 ;
				max[i] = 9 ;
			}
			else
			{
				max[i] = s ;
				s = 0 ;
			}
		}
		s = tt1 ;
		for(int i = m-1 ; i >= 0 ; i-- )
		{
			if( s > 9 )
			{
				s -= 9 ;
				min[i] = 9 ;
			}
			else
			{
				if( i == 0 ) 
				{
					min[0] = s ; 
					break ;
				}
				else
				{
					min[i] = s-1 ;
					min[0] = 1 ;
					break ;
				}
			}
		}
		for(int i = 0 ; i < m ; i++ ) cout << min[i] ;
		cout << ' ' ;
		for(int i = 0 ; i < m ; i++ ) cout << max[i] ;
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1 ;
	while( t-- )
	{
		solve() ;
	}
}


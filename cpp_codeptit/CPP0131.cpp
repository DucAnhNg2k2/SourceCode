#include<bits/stdc++.h>
using namespace std;

vector<int> prime(1e6+5) ;
void sangnt()
{
	prime[1] = 1 ;
	vector<bool> mark(1e6+5,true);
	for(int i = 2 ; i*i <= 1e6 ; i++ )
	{
		if( mark[i] )
		{
			for(int j = i*i ; j <= 1e6 ; j += i )
			{
				if( mark[j] )
				{
					mark[j] = false ;
					prime[j] = i ;
				}
			}
		}
	}
	for(int i = 2 ; i <= 1e6 ; i++ )
	{
		if( mark[i] ) prime[i] = i ;
	}
}

void solve()
{
	int n ;
	cin >> n;
	for(int i = 1 ; i <= n ; i++ )
	{
		cout << prime[i] << ' ';
	}
	cout << '\n' ;
}
int main()
{
	ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    sangnt();
    while( t-- )
    {
    	solve();
	}
} 


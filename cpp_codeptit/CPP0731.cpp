#include<bits/stdc++.h>
using namespace std;

long long a[100005] ;
void solve()
{
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
	vector<int> f(n+5,INT_MAX);
	f[1] = 0 ;
	for(int i = 2 ; i <= n ; i++ )
	{
		bool check = false ;
		for(int j = 1 ; j < i ; j++ )
		{
			if( a[j] >= i-j )
			{
				if( f[j] == 0 && j > 1 ) continue ;
				if( f[i] > f[j]+1 ) f[i] = f[j]+1;
				check = true ;
			}
		}
		if( check == false )
		{
			f[i] = 0 ;
		}
	}
	if( f[n] == 0 ) cout << -1 << endl;
	else cout << f[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
    {
    	solve();
	}
}


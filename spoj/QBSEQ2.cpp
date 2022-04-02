#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll ;
typedef vector<long long> vll ;
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n , k ;
	cin >> n >> k ;
	vll a(n+5) ;
	vector<vector<long long> > f(n+5,vector<long long>(k,0));
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i] ;
		a[i] %= k ;
	}
	for(int i = 1 ; i <= n ; i++ )
	{
		for(int j = 0 ; j < k ; j++ )
		{
			// j = 5 k = 7    a[i] = 4 --> 1 ;; a[i] = 6 --> 6		
			if( j >= a[i] )
			{
				if( f[i-1][j-a[i]] != 0 || j == a[i] ) f[i][j] = max(f[i-1][j],f[i-1][j-a[i]]+1);
			} 
			else 
			{
				if( f[i-1][j+k-a[i]] != 0 || j == a[i] ) f[i][j] = max(f[i-1][j],f[i-1][j+k-a[i]]+1);
			}
		}
	}
	cout << f[n][0] ;
} 

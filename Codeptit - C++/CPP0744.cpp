#include<bits/stdc++.h>
using namespace std;

long long a[1005][1005] = {0};
long long ToHop(int n,int r,int b,int g)
{
	long long res = 1;
	if( r != 0 )
	res *= a[n][r];
	n -= r;
	if( b != 0 )
	res *= a[n][b];
	n -= b;
	if( g != 0 )
	res *= a[n][g];
	return res;
}

void solve()
{
	int n,r,b,g;
	cin >> n >> r >> b >> g;
	long long sum = 0 ;
	for(int i = r ; i <= n ; i++ )
	{
		for(int j = b ; j <= n ; j++ )
		{
			int k = n-i-j;
			if( k >= g )
			{
				 sum += ToHop(n,i,j,k);
			}
		}
	}
	cout << sum << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int cot = 1;
	for(int i = 1 ; i < 1005 ; i++ )
	{
		for(int j = 1 ; j <= cot ; j++ )
		{
			if( j == 1 ) a[i][j] = i;
			else if( j == cot ) a[i][j] = 1;
			else
			{
				a[i][j] =  a[i-1][j] + a[i-1][j-1] ;
			}
		}
		cot++;
	}

	int t ;
	cin >> t;
	while( t-- )
	{
	 	solve();
	}
}


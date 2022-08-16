#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m,Max = -1;
	cin >> n >> m;
	vector<vector<int>> a(n+5,vector<int>(m+5,0));
	vector<vector<int>> dp(n+5,vector<int>(m+5,0));
	for(int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= m ; j++ )
			{
				cin >> a[i][j];
			}

	for(int i = 1 ; i <= n ; i++ )
	{
		for(int j = 1 ; j <= m ; j++ )
		{
			if( a[i][j] == 0 ) dp[i][j] = 0;
			else
			{
				dp[i][j] = min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]}) + 1;
			}
			Max = max(Max,dp[i][j]);
		}
	}
	cout << Max << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}


#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//	#include"DucAnh.h"
using namespace std;
#define endl '\n'
 
void solve() {
	int n,k;
	cin >> n >> k;
	long long a[n+5] , prefix_sum[n+5];
	prefix_sum[0] = 0;
	vector<vector<long long>> dp(n+5,vector<long long>(2,0));

	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i];
		prefix_sum[i] = prefix_sum[i-1] + a[i];
	}
	dp[1][0] = 0;
	dp[1][1] = a[1];
	// dp[i] là giá trị max khi chặt đến cây thứ i 
	// với dp[i][0] là cây thứ i không chặt 
	// với dp[i][1] là cây thứ i chặt
  	for(int i = 2 ; i <= n ; i++ )
	{
		dp[i][0] = max(dp[i-1][0],dp[i-1][1]);
		if( i < k )
		{
			dp[i][1] = dp[i-1][1] + a[i];	
		}
		else
		{
			// phải bỏ 1 cây --> không được lấy dp[j][1] 
			long long sum = 0;
			for(int j = i-k+1 ; j < i ; j++ )
			{
				dp[i][1] = max(dp[i][1],prefix_sum[i]-prefix_sum[j]+dp[j][0]);
			}
		}
	}
	cout << max(dp[n][0],dp[n][1]);
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int Test = 1;
//	cin >> Test;
	while( Test-- ) {
		solve();
	}
}

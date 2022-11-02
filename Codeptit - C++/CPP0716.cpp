#include<bits/stdc++.h>
using namespace std;

int dem = 0 ;
void Try(int x,int y,vector<vector<int>> &v,int sum,int &n,int &k)
{
	if( x > n || y > n ) return ;
	if( sum + v[x][y] > k ) return ;
	sum += v[x][y];
	if( x == n && y == n )
	{
		if( sum == k ) dem++;
		return;
	}

//	cout << x << ' ' << y << ' ' << sum << endl;
	Try(x+1,y,v,sum,n,k);
	Try(x,y+1,v,sum,n,k);
}

void solve()
{
	dem = 0 ;
	int n,k;
	cin >> n >> k;
	vector<vector<int>> a(n+5,vector<int>(n+5,0));
	for(int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= n ; j++ )
			cin >> a[i][j];
	Try(1,1,a,0,n,k);

	cout << dem << endl;
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


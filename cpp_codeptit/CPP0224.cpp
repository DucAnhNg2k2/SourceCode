#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//	#include"DucAnh.h"

using namespace std;
#define endl '\n'

void DFS(int x,int y,vector<vector<int>> &s)
{
	s[x][y] = 0;
	for(int i = x-1 ; i <= x+1 ; i++ )
	{
		for(int j = y-1 ; j <= y+1; j++ )
		{
			if( s[i][j] )
			{
				DFS(i,j,s);
			}
		}
	}
}

void solve()
{
	int n,m,cnt = 0;
	cin >> n >> m;
	vector<vector<int>> s(n+5,vector<int>(m+5,0));
	for(int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= n ; j++ )
		{
			cin >> s[i][j];
		}
	for(int i = 1 ; i <= n ; i++ )
	{
		for(int j = 1 ; j <= n ; j++ )
		{
			if( s[i][j] )
			{
				DFS(i,j,s);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}

int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) 
       solve();
    return 0;
}



#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//	#include"DucAnh.h"

using namespace std;
#define endl '\n'

void solve()
{
	int n,m;
	cin >> n >> m;
	int dd[100005] = {};
	int a[n] , b[m];
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
		dd[a[i]]++;
	}
	for(int i = 0 ; i < m ; i++ )
	{
		cin >> b[i];
	}
	for(int i = 0 ; i < m ; i++ )
	{
		while( dd[b[i]] > 0 )
		{
			cout << b[i] << ' ';
			dd[b[i]]--;
		}
	}
	for(int i = 0 ; i < 100005 ; i++ )
	{
		while( dd[i] > 0 )
		{
			cout << i << ' ';
			dd[i]--;
		}
	}
	cout << endl;
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



#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int calculate(vector<int> f,int m)
{
	stack<int> st;
	vector<int> L(m+5),R(m+5);
	for(int i = 1 ; i <= m ; i++ )
	{
		while( !st.empty() && f[st.top()] >= f[i] ) 
			st.pop();
		if( st.empty() ) L[i] = 1;
		else L[i] = st.top()+1; 
		st.push(i);
	}
	while( !st.empty() ) 
		st.pop();
	for(int i = m ; i >= 1 ; i-- )
	{
		while( !st.empty() && f[st.top()] >= f[i] ) 
			st.pop();
		if( st.empty() ) R[i] = m;
		else R[i] = st.top()-1;
		st.push(i);
	}
	int res = 0;
	for(int i = 1 ; i <= m ; i++ )
	{
		res = max(res,(R[i]-L[i]+1)*f[i]);
	}
	return res;
}

void solve()
{
	int n,m,res = 0;
	cin >> n >> m;
	vector<vector<int>> a(n+5,vector<int>(m+5,0));
	for(int i = 1 ; i <= n ; i++ )
		for(int j = 1 ; j <= m ; j++ )
			cin >> a[i][j];
	vector<vector<int>> f = a;
	for(int i = 1 ; i <= n; i++ )
	{
		for(int j = 1 ; j <= m ; j++ )
		{
			if( a[i][j] ) f[i][j] = f[i-1][j] + 1;
			else f[i][j] = 0;
		}
		res = max(res,calculate(f[i],m));
	}
	cout << res << endl;
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



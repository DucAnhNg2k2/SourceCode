#include <bits/stdc++.h>
using namespace std;

int k,m,n;
vector<int> a(1005);
vector<int> g[1005];
vector<bool> vs(1005,false);
vector<vector<bool>> M(105,vector<bool>(1005,false));

void dfs(int top,int u) {
	M[top][u] = true;
	vs[u] = true;
	for(auto v:g[u]) {
		if(vs[v] == false) {
			dfs(top,v);
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	cin >> k >> n >> m;
	for(int i = 1; i <= k; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= m; i++) {
		int u,v;
		cin >> u >> v;
		g[u].push_back(v);
	}
	for(int i = 1; i <= k; i++) {
		for(int j=1; j<=n; j++) vs[j] = false;
		dfs(i,a[i]);
	}
	int dem = 0;
	for(int i = 1; i <= n; i++) {
		int check = true;
		for(int j = 1; j <= k; j++) {
			if( M[j][i] == false) check = false;
		}
		if(check) dem++;
	}
	cout << dem << endl;
}
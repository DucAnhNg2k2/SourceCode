#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5;
int cha[N+5];
 
int find(int u) {
	if( cha[u] == u ) 
		return u;
	return cha[u] = find(cha[u]);
} 
 
void merge(int u,int v) {
	u = find(u);
	v = find(v);
	if( u == v ) {
		return;
	}
	cha[u] = v;
}
 
void solve() {
	int n,m;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++ ) {
		cha[i] = i;
	}
	while( m-- ) {
		int a,b;
		cin >> a >> b;
		merge(a,b);
	}
	for(int i = 2; i <= n ;i++) {
		if( find(i) != find(1) ) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
} 


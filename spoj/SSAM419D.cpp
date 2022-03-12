#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5;
int cha[N+5] , cnt[N+5] ;
 
int find(int u) {
	if( cha[u] == u ) 
		return u;
	else {
		cha[u] = find(cha[u]);
		return cha[u];
	}
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
	int n,m,Max = 0;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++ ) {
		cha[i] = i;
		cnt[i] = 0;
	}
	while( m-- ) {
		int a,b;
		cin >> a >> b;
		merge(a,b);
	}
	for(int i = 1 ; i <= n ; i++ ) {
		cnt[find(i)]++;
	}
	for(int i = 1 ; i <= n ; i++ ) {
		Max = max(Max,cnt[i]);
	}
	cout << Max << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
//	freopen("TEST.txt","r",stdin);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
} 

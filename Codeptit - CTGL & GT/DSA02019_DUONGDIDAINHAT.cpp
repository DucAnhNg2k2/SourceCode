#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

int n,m,ans;
vector<int> g[30];
bool vs[30][30];

void dfs(int u,int dem) {
	ans = max(ans,dem);
	for(auto v : g[u] ) {
		if( vs[u][v] == false ) {
			vs[u][v] = true;
			vs[v][u] = true;
			dfs(v,dem+1);
			vs[v][u] = false;
			vs[u][v] = false;
 		}
	}
}

void solve() {
	FOR(i,0,29) {
		FOR(j,0,29) {
			vs[i][j] = false;
		}
		g[i].clear();
	}
	ans = 0;
	cin >> n >> m;
	FOR(i,1,m) {
		int x,y;
		cin >> x >> y;
		g[x].pb(y);
		g[y].pb(x);
	}
	FOR(i,0,n-1) {
		dfs(i,0);
	}
	cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

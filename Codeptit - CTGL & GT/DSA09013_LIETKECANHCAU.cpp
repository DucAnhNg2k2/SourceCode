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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 10005

vector<int> g[maxn];
vector<pII> ans;
int low[maxn],num[maxn],timeDFS = 0;
bool vs[1005][1005];
void dfs(int u,int pre) {
	low[u] = num[u] = ++timeDFS;
	for(auto v:g[u]) {
		if( v == pre ) continue;
		if(!num[v]) {
			dfs(v,u);
			low[u] = min(low[u],low[v]);
			if( low[v] == num[v] ) {
				vs[u][v] = vs[v][u] = true;
			}
		} 
		else {
			low[u] = min(low[u],num[v]);
		}
	}
}

void solve() {
	FO(i,1,maxn) {
		low[i] = num[i] = 0;
	}
	timeDFS = 0;
	for(auto& i:g) i.clear();
	ans.clear();
	FOR(i,1,1000) {
		FOR(j,1,1000) {
			vs[i][j] = false;
		}
	}
	int v,e;
	cin >> v >> e;
	vector<pII> s;
	FOR(i,1,e) {
		int u,v;
		cin >> u >> v;
		s.pb({u,v});
		g[u].pb(v);
		g[v].pb(u);
	}
	FOR(i,1,v) {
		if( !low[i] ) {
			dfs(i,i);
		}
	}
	sort(all(s));
	for(auto i:s) {
		if( vs[i.fi][i.se]) {
			cout << i.fi << ' ' << i.se << ' ';
		}
	}
	cout << endl;
}

int main(){
//    ios::sync_with_stdio(false);
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
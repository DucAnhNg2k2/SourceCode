#pragma GCC optimize("O2")
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
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005
#define int LL 

struct Dsu{
	vector<int> par;
	void init(int n) {
		par.resize(n+5,0);
		for(int i = 1 ; i <= n ; i++ ) {
			par[i] = i;
		}
	}
	int find(int u) {
		if( par[u] == u ) return u;
		return par[u] = find(par[u]);
	}
	bool join(int u,int v) {
		u = find(u);
		v = find(v);
		if( u == v ) return false;
		par[u] = v;
		return true;
	}
};
struct Edge {
    int u,v,w;
    Edge(){}
    Edge(int _u,int _v,int _w) {
        u = _u,
        v = _v;
        w = _w;
    }
    bool operator < (const Edge &edge) const {
        return w < edge.w;
    }
};
void Kruskal(int n,vector<Edge> &g) {
    sort(g.begin(),g.end());
    Dsu dsu;
    dsu.init(n);
    int ans = 0;
    for(auto i:g) {
        if(dsu.find(i.u) != dsu.find(i.v)) {
            ans = i.w;
            dsu.join(i.u,i.v);
        }
    }
    cout << ans << endl;
}

void solve() {
    int n,m;
    cin >> n >> m;
    vector<Edge> g;
    FOR(i,1,m) {
        int u,v,t;
        cin >> u >> v >> t;
        g.pb(Edge(u,v,t));
    }
	Kruskal(n,g);
}

main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
}
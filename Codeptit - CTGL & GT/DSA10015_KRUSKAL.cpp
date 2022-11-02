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
#define all(x) x.begin(),x.end()
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

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
void KRUSKAL(int n,vector<Edge> &g) {
    sort(g.begin(),g.end());
    Dsu dsu;
    dsu.init(n);
    int sum = 0;
    for(auto i:g) {
        if(dsu.find(i.u) != dsu.find(i.v)) {
            sum += i.w;
            dsu.join(i.u,i.v);
        }
    }
    cout << sum << endl;
}

void solve() {
    vector<Edge> g;
    int n,m;
    cin >> n >> m;
    while(m--) {
        int u,v,w;
        cin >> u >> v >> w;
        g.pb(Edge(u,v,w));
    }
    KRUSKAL(n,g);
}

int main(){
    ios::sync_with_stdio(false);
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
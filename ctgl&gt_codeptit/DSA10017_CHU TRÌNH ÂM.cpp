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

struct Edge {
    int u,v;
    long long w;
    Edge(){}
    Edge(int _u,int _v,long long _w) {
        u = _u,
        v = _v;
        w = _w;
    }
    bool operator < (const Edge &edge) const {
        return w < edge.w;
    }
};
void bellman_ford(int n,int start,vector<Edge> &g) {
    vector<LL> dist(n+5,Linf);
//    vector<int> trace(n+5,-1);
    dist[start] = 0;
    for(int T = 1; T < n; T++) {
        for(auto i:g) {
            LL u = i.u, v = i.v , w = i.w;
            if( dist[u]+w < dist[v]) {
                dist[v] = dist[u] + w;
            //    trace[v] = u;
            }
        }
    }
    bool check = false;
    for(auto i:g) {
        LL u = i.u, v = i.v , w = i.w;
        if(dist[u]+w < dist[v]) {
            check = 1;
        }
    }
    cout << check << endl;
}

void solve() {
    vector<Edge> g;
    int n,m;
    cin >> n >> m;
    while(m--) {
        LL u,v,w;
        cin >> u >> v >> w;
        g.pb(Edge(u,v,w));
    }
    bellman_ford(n,1,g);
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
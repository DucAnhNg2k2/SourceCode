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

struct DSU {
    vector<int> pre;
    DSU(int n) {
        pre.resize(n+5);
        FOR(i,1,n) pre[i] = i;
    }
    int find(int u) {
        if(u == pre[u]) return u;
        pre[u] = find(pre[u]);
        return pre[u];
    }
    bool merge(int u,int v) {
        int U = find(u);
        int V = find(v);
        if(U == V) return true;
        pre[U] = V;
        return false;
    }
};

void solve() {
    int n,m;
    cin >> n >> m;
    DSU  dsu(n);
    vector<pair<pII,int>> edge;
    FOR(i,1,m) {
        int u,v,w;
        cin >> u >> v >> w;
        edge.pb({{u,v},w});
    }
    sort(all(edge),[](pair<pII,int> a,pair<pII,int> b){
        return a.se < b.se;
    });
    int ans = 0;
    for(auto i:edge) {
        if(!dsu.merge(i.fi.fi,i.fi.se)) {
            ans += i.se;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
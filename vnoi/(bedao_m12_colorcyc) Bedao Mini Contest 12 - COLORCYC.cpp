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
#define maxn 200005

vector<int> g[maxn] = {};
vector<pII> e;
int n, m, a[maxn] = {}, check = false;

void dfs(int u,int pre) {
    a[u] = 1;
    for(auto v:g[u]) {
        if(a[v] == 0) dfs(v,u);
        if(a[v] == 1) check = true;
    }
    a[u] = 2; 
}

void solve() {
    cin >> n >> m;
    FOR(i,1,m) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        e.pb({u,v});
    }
    FOR(i,1,n) {
        if(!a[i]) {
            dfs(i,i);
        }
    }
    if(m == 0) cout << 0 << endl;
    else if(check == false) {
        cout << 1 << endl;
        FOR(i,1,m) cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
        for(auto i:e) {
            if(i.fi < i.se) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
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

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
#define maxn 200005

vector<pII> g[maxn] = {};
int low[maxn], num[maxn], timeDFS = 0, ans = 0, bridge = 0;

void dfs(int u,int pre) {
    low[u] = num[u] = ++timeDFS;
    for(auto v : g[u]) {
        if(v.fi == pre) {
            if(v.se) {
                low[u] = min(low[u],num[v.fi]);
            }
            continue;
        }
        if(!num[v.fi]) {
            dfs(v.fi,u);
            low[u] = min(low[u],low[v.fi]);
            if(low[v.fi] == num[v.fi]) {
                bridge++;
            }
        }
        else low[u] = min(low[u],num[v.fi]); 
    }
}

void solve() {
    int n,m;
    cin >> n;
    FOR(i,1,n-1) {
        int u,v;
        cin >> u >> v;
        g[u].pb({v,0});
        g[v].pb({u,0});
    }
    cin >> m;
    FOR(i,1,m) {
        int a,b;
        cin >> a >> b;
        g[a].pb({b,1});
        g[b].pb({a,1});
    } 
    dfs(1,1);
    cout << bridge << endl;
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

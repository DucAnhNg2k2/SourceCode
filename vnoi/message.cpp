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
#define maxn 805

vector<int> g[maxn] = {};
bool mark[maxn] = {},vs[maxn] = {};

void dfs(int u) {
    vs[u] = true;
    for(auto v:g[u]) {
        if(!vs[v]) {
            dfs(v);
        }
    }   
}

void solve() {
    int n,m;
    cin >> n >> m;
    FOR(i,1,m) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
    }
    FOR(i,1,n) {
        if(!vs[i]) {
            mark[i] = true;
            dfs(i);
        }
    }
    int ans = 0;
    memset(vs,false,sizeof(vs));
    FORD(i,n,1) {
        if(mark[i] && !vs[i]) {
            ans++;
            dfs(i);
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
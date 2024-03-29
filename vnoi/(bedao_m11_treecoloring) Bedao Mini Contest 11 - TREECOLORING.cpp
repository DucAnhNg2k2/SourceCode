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

vector<pII> g[maxn];
vector<int> vs(maxn,-1);

void dfs(int u) {
    for(auto v:g[u]) {
        if(vs[v.fi] == -1) {
            if(v.se%2 == 0) {
                vs[v.fi] = vs[u];
            }  
            else vs[v.fi] = abs(1-vs[u]);
            dfs(v.fi);
        }
    }
}
void solve() {
    int n;
    cin >> n;
    FOR(i,1,n-1) {
        LL u,v,w;
        cin >> u >> v >> w;
        g[u].pb({v,w});
        g[v].pb({u,w});
    }
    vs[1] = 1;
    dfs(1);
    FOR(i,1,n) {
        cout << vs[i] << ' ';
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
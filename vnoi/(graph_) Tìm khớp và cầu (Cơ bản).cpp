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

vector<int> g[maxn] = {};
int num[maxn], low[maxn], timeDFS = 0;
int joint[maxn], bridge = 0;

void dfs(int u,int pre) {
    int child = 0;
    num[u] = low[u] = ++timeDFS;
    for(auto v:g[u]) {
        if(v == pre) continue;
        if(!num[v]) {
            dfs(v,u);
            low[u] = min(low[u],low[v]);
            child++;
            if(low[v] == num[v]) bridge++;
            if(u == pre) {
                if(child > 1) joint[u] = 1;
            }
            else if(low[v] >= num[u]) joint[u] = 1;
        }
        else low[u] = min(low[u],num[v]);
    }
}

void solve() {
    int n,m;
    cin >> n >> m;
    FOR(i,1,m) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    FOR(i,1,n) {
        if(!num[i]) dfs(i,i);
    }
    int dem = 0;
    FOR(i,1,n) {
        dem += joint[i];
    }
    cout << dem << ' ' << bridge << endl;
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

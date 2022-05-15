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


int n,m;
vector<int> g[maxn];
int low[maxn] = {},num[maxn] = {},timeDFS = 0;
int bridge = 0;
bool joint[maxn] = {};

void dfs(int u,int pre) {
    int child = 0;
    low[u] = num[u] = ++timeDFS;
    for(auto v:g[u]) {
        if(v == pre) continue;
        if(!num[v]) {
            dfs(v,u);
            child++;
            low[u] = min(low[u],low[v]);
            if(low[v] >= num[v]) {
                bridge++;
            }
            if(u == pre) {
                if(child > 1) joint[u] = true;
            }
            else if(low[v] >= num[u]) joint[u] = true;
        }
        else low[u] = min(low[u],num[v]);
    }
}

void solve() {
    cin >> n >> m;
    FOR(i,1,m) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    FOR(i,1,n) {
        if(!num[i]) {
            dfs(i,i);
        }
    }
    int dem = 0;
    FOR(i,1,n) {
        if(joint[i]) dem++;
    }
    cout << dem << ' ' << bridge;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
}
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

int n,h[maxn] = {},ans[maxn] = {};
vector<int> g[maxn];

void dfs(int u,int pre) {
    vector<int> V;
    for(auto v:g[u]) {
        if(v == pre) continue;
        dfs(v,u);
        h[u] = max(h[u],1+h[v]);
        V.pb(1+h[v]);
    }
    if(V.size()==1) {
        ans[u] = V[0];
    }
    if(V.size()>1) {
        sort(V.begin(),V.end(),greater<int>());
        ans[u] = V[0] + V[1];
    }
}

void solve() {
    cin >> n;
    FOR(i,1,n-1) {
        int x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }  
    dfs(1,-1);
    FOR(i,1,n) cout << ans[i] << ' ';  
}

int main(){
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
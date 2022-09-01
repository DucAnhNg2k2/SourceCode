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

int n;
vector<int> g[maxn];
LL f[maxn][2] = {};
bool vs[maxn] = {};
// 0 trang 1 den

void dfs(int u) {
    vs[u] = true;
    int dem = 0;
    LL white = 1, black = 1;
    for(auto v:g[u]) {
        if(vs[v] == true) continue;
        dem++;
        dfs(v);
        white *= (f[v][0]+f[v][1]);
        white %= MOD;
        black *= f[v][0];
        black %= MOD;
    }
    f[u][0] = white;
    f[u][1] = black;
}

void solve() {
    cin >> n;
    FOR(i,1,n-1) {
        int x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1);
    cout << (f[1][0] + f[1][1])%MOD;
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
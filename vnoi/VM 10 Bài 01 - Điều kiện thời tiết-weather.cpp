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

int n,m,q = 0, dem = 0;
int vs[maxn] = {};
vector<int> g[maxn] = {};
pII s[maxn] = {};

void dfs(int u,pII way) {
    vs[u] = q;
    for(auto v:g[u]) {
        if((way.fi == u && way.se == v) || (way.fi == v && way.se == u)) {
            continue;
        }
        if(!vs[v]) {
            dfs(v,way);
        }
    }
}

void solve() {
    cin >> n >> m;
    FOR(i,1,m) {
        cin >> s[i].fi >> s[i].se;
        g[s[i].fi].pb(s[i].se);
        g[s[i].se].pb(s[i].fi);
    }    
    FOR(i,1,m) {
        FOR(j,1,n) {
            vs[j] = 0;
        } 
        FOR(j,1,n) {
            if(!vs[j]) {
                q++;
                dfs(j,s[i]);
            }
        }
        FOR(j,1,n) {
            FOR(k,j+1,n) {
                if(vs[j] != vs[k]) {
                    dem++;
                }
            }
        }
    }
    cout << dem << endl;
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
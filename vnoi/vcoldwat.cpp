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
int vs[maxn] = {};

void dfs(int u) {
    for(auto v:g[u]) {
        if(!vs[v]) {
            vs[v] = vs[u]+1;
            dfs(v);
        }
    }
}

void solve() {
    int n,c;
    cin >> n >> c;
    vs[1] = 1;
    FOR(i,1,c) {
        int e,b1,b2;
        cin >> e >> b1 >> b2;
        g[e].pb(b1);
        g[e].pb(b2);
    }
    dfs(1);
    FOR(i,1,n) {
        cout << vs[i] << endl;
    }
    cout << endl;
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
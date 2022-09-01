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
int f[maxn] = {}, n, k, ans = 0;

void dfs(int u) {
    int cnt = 0;
    for(auto v:g[u]) {
        dfs(v);
        cnt += f[v];
    }
    if(cnt+1 >= k) {
        f[u] = 0;
      //  cout << u << endl;
        ans++;
    }
    else {
        f[u] = cnt+1;
    }
}
void solve() {
    cin >> k >> n;
    FOR(i,2,n) {
        int x;
        cin >> x;
        g[x].pb(i);
    }
    dfs(1);
    cout << ans << endl;
    // FOR(i,1,n) {
    //     cout << i << ' ' << f[i] << endl;
    // }
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
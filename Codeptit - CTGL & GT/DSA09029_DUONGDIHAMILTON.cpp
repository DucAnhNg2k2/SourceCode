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
int b[maxn] = {}, n,m;
bool vs[maxn] = {};
bool check = false;

void hamilton(int u) {
    if(u == n+1) {
        check = true;
        return;
    }
    for(auto v : g[b[u-1]]) {
        if(!vs[v]) {
            vs[v] = true;
            b[u] = v;
            hamilton(u+1);
            vs[v] = false;
        }
    }
}

void solve() {
    for(auto& i:g) i.clear();
    memset(vs,false,sizeof(vs));
    check = false;

    cin >> n >> m;
    FOR(i,1,m) {
        int x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    FOR(i,1,n) {
        b[1] = i;
        vs[i] = true;
        hamilton(2);
        vs[i] = false;
    }
    if(check) cout << 1 << endl;
    else cout << 0 << endl;
}
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
} 

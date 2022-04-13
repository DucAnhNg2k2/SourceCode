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
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005

struct Dsu{
	vector<int> par;
	void init(int n) {
		par.resize(n+5,0);
		for(int i = 1 ; i <= n ; i++ ) {
			par[i] = i;
		}
	}
	int find(int u) {
		if( par[u] == u ) return u;
		return par[u] = find(par[u]);
	}
	bool join(int u,int v) {
		u = find(u);
		v = find(v);
		if( u == v ) return false;
		par[u] = v;
		return true;
	}
};

void solve() {
    int n,m;
    cin >> n >> m;
    Dsu dsu;
    dsu.init(n);
	bool check = false;
    while(m--) {
        int x,y;
        cin >> x >> y;
        if(dsu.find(x) == dsu.find(y)) {
			check = true;
		}
		dsu.join(x,y);
    }
    if(check) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(false);
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
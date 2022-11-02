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

vector<int> g[1005];
bool vs[1005];
int n,m,u;
vector<pLL> res;
bool check;

void bfs(int u) {
    queue<int> q;
    vs[u] = true;
    q.push(u);
    while(q.size()) {
        int u = q.front();q.pop();
        for(auto v:g[u]) {
            if(!vs[v]) {
                vs[v] = true;
                q.push(v);
                res.pb({u,v});
            }
        }
    }
}

void init() {
	for(auto &i:g) i.clear();
	for(auto &i:vs) i = false;
	res.clear();
}
void solve() {
	init();
	cin >> n >> m >> u;
	while(m--) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	bfs(u);
	FOR(i,1,n){
	    if(!vs[i]){
	        cout << -1 << endl;
	        return;
	    }
	}
	for(auto i:res){
	    cout << i.fi << " " << i.se << endl;
	}
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
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
#define maxn 10005

vector<int> g[maxn];
bool vs[maxn] = {};

void bfs(int u) {
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while( !q.empty() ) {
		int u = q.front();
		q.pop();
		cout << u << ' ';
		for(auto i :g[u] ) {
			if( vs[i] == false ) {
				vs[i] = true;
				q.push(i);
			}
		}
	}
}
void solve() {

	int n,m,k;
	cin >> n >> m >> k;
	for(auto&i : g){
		i.clear();
	}
	while( m-- ) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	FOR(i,1,maxn-5) {
		vs[i] = false;
	}
	bfs(k);
	cout << endl;
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

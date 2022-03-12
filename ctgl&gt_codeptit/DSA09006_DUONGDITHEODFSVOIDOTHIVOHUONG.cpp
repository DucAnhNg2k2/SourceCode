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
int first,last,check;
vector<int> ans;

void dfs(int u,vector<int> res) {
	vs[u] = true;
	if( u == last && ans.empty()) {
		check = true;
		ans = res;
		return;
	}
	for(auto i : g[u] ) {
		if( vs[i] == false ) {
			res.pb(i);
			dfs(i,res);
			res.pop_back();
		}
	}
}

void solve() {

	int n,m,k;
	cin >> n >> m >> first >> last;
	for(auto&i : g){
		i.clear();
	}
	check = false;
	while( m-- ) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	FOR(i,1,maxn-5) {
		vs[i] = false;
	}
	ans.clear();
	dfs(first,vector<int>(1,first));
	if( check == false ) cout << -1 << endl;
	else {
		for(auto i : ans) cout << i << ' ';
		cout << endl;
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

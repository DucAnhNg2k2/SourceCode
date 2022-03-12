#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

int pre[maxn] = {},dem = 0;
vector<int> g[maxn];
bool check;
bool vs[maxn];

void merge(int u,int v) {
	if( pre[u] == 0 && pre[v] == 0 ) {
		pre[u] = -1;
		pre[v] = 1;
	}
	if( pre[u] == 0) {
		pre[u] = -pre[v];
	}
	if( pre[v] == 0 ) {
		pre[v] = -pre[u];
	}
	if( abs(pre[u]-pre[v]) == 0 ) {
		check = false;
	}
}

void Try(int u) {
	vs[u] = true;
	for(auto v: g[u]){
		merge(u,v);
		if(!vs[v]) {
			Try(v);
		}
	}
}

void init() {
	for(auto &i : g) {
		i.clear();
	}
	FO(i,1,maxn) {
		pre[i] = 0;
		vs[i] = false;
	}
	check = true;
	dem = 0;
}

void solve() { 
	init();
	int n,m;
	cin >> n >> m;
	FOR(i,1,m) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	FOR(i,1,n) {
		if( pre[i] == 0 ) {
			Try(i);
		}
	}
	if( check ) cout << "YES" << endl;
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

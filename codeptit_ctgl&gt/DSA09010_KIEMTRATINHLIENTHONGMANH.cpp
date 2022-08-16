#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
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

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

vector<int> g[maxn];
bool deleted[maxn] = {};
int num[maxn],low[maxn],timeDFS = 0,dem = 0;
stack<int> st;

void dfs(int u) {
	num[u] = low[u] = ++timeDFS;
	st.push(u);
	for(auto v : g[u]) {
		if(deleted[v]) continue;
		if( !num[v] ) {
			dfs(v);
			low[u] = min(low[v],low[u]);
		}
		else low[u] = min(low[u],num[v]);
	}
	if( num[u] == low[u] ) {
		dem++;
		while( st.size() && st.top() != u ) {
			deleted[st.top()] = true;
			st.pop();
		}
	}
}

void init() {
	for(auto& i : g) {
		i.clear();
	}
	while( st.size() ) 
		st.pop();
	FO(i,1,maxn) {
		deleted[i] = false;
		num[i] = low[i] = 0;
	}
	timeDFS = 0;
	dem = 0;
}
void solve() { 
	init();
	int m,n;
	cin >> m >> n;
	FOR(i,1,n) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
	}
	FOR(i,1,m) {
		if( num[i] == 0 ) {
			dfs(i);
		}
	}
	if( dem != 1 ) cout << "NO" << endl;
	else cout << "YES" << endl;
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

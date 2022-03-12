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

bool vs[maxn];
int check = 0;
vector<int> g[maxn];

void dfs(int u,int pre) {
	vs[u] = true;
	for(auto i : g[u]) {
		if( vs[i] == false) {
			dfs(i,u);
		}
		else if( vs[i] == true && i != pre ) {
			check = true;
		}
	}
}
 
void init() {
	for(auto&i:g) {
		i.clear();
	}
	FO(i,1,maxn) {
		vs[i] = false;
	}
	check = 0;
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
		if( !vs[i] ) {
			dfs(i,i);
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

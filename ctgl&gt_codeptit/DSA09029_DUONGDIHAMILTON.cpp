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

vector<vector<bool>> vs(100,vector<bool>(100,false));
bool check;
vector<int> g[maxn];
int n,m;

void dfs(int u,set<int> v,vector<vector<bool>> vs) {
	v.insert(u);
	if( v.size() == n ) {
		check = true;
	}
	for(auto i : g[u]) {
		if( vs[i][u] == false && vs[u][i] == false ) {
			vs[i][u] = true;
			vs[u][i] = true;
			dfs(i,v,vs);
		}
	}
}
 
void init() {
	for(auto& i:g) {
		i.clear();
	}
	check = false;
}

void solve() { 
	init();

	cin >> n >> m;
	FOR(i,1,m) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	FOR(i,1,m){
		dfs(i,set<int>(),vs);
	}
	if( check ) cout << "1" << endl;
	else cout << "0" << endl;
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

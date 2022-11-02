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

vector<int> g[maxn];
int timeDFS = 0,num[maxn] = {},low[maxn] = {},joint[maxn] = {};
vector<int> v;

void dfs(int u,int pre) {
	int child = 0;
	num[u] = low[u] = ++timeDFS;
	for(auto v : g[u] ) {
		if( v == pre ) {
			continue;
		}
		if( !num[v] ) {
			child++;
			dfs(v,u);
			low[u] = min(low[u],low[v]);
			if( u == pre ) {
				if( child > 1 ) joint[u] = true;
			}
			else if( low[v] >= num[u] ) joint[u] = true;
		}
		else low[u] = min(low[u],num[v]);
	}
}
 
void init() {
	for(auto& i : g) {
		i.clear();
	}
	FO(i,1,maxn) {
		num[i] = low[i] = 0;
		joint[i] = 0;
	}
	timeDFS = 0;
	v.clear();
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
		if( num[i] == 0 ) {
			dfs(i,i);
		}
	}
	FOR(i,1,n) {
		if( joint[i] ) cout << i << ' ';
	}
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

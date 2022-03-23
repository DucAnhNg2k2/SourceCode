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
bool check;
bool mv[1005][1005] = {};

void dfs(int u) {
	num[u] = 1;
	for(auto v:g[u]) {
		if( mv[u][v] ) continue;
		if( num[v] == true ) check = true;
		else {
			mv[u][v] = mv[v][u] = true;
			dfs(v);
			mv[u][v] = mv[v][u] = false;
		}
	}
}

void init() {
    check = false;
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
	cin >> n;
	FOR(i,1,n-1) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	int dem = 0;
	FOR(i,1,n) {
		if( num[i] == 0 ) {
			dfs(i);
			dem++;
		}
	}
	if( check || dem != 1 ) cout << "NO" << endl;
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
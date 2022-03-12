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
// https://codeforces.com/contest/987/problem/D
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e12;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

vector<vector<int>> ds(maxn);
vector<vector<int>> node(105);
vector<vector<int>> mv(105,vector<int>(maxn));
vector<int> dist(maxn);
int n,m,k,s;

void bfs(int pos) {
	for(auto &x:dist) {
		x = inf;
	}
	queue<int> q;
	for(auto &x:node[pos]) {
		dist[x] = 0;
		q.push(x);
	}
	while( !q.empty() ) {
		int top = q.front() ; q.pop();
		for(int i = 0 ; i < ds[top].size() ; i++ ) {
			int ke = ds[top][i];
			if( dist[top] + 1 < dist[ke] ) {
				q.push(ke);
				dist[ke] = dist[top] + 1;
			}
		}
	}
	FOR(i,1,n) {
		mv[pos][i] = dist[i];
	}
}

void solve() {
	cin >> n >> m >> k >> s;
	int a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
		node[a[i]].pb(i);
	}
	while( m-- ) {
		int u,v;
		cin >> u >> v;
		ds[u].pb(v);
		ds[v].pb(u);
	}
	FOR(i,1,k) {
		bfs(i);
	}
	FOR(i,1,n) {
		vector<int> v;
		FOR(j,1,k) {
			v.pb(mv[j][i]);
		}
		sort(v.begin(),v.end());
		int sum = 0;
		FOR(j,0,s-1) {
			sum += v[j];
		}
		cout << sum << ' ';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

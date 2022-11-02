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
#define all(x) x.begin(),x.end()
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 200005

void solve() {
	int n,m;
	cin >> n >> m;
	vector<int> g[n+5] = {};
	while(m--) {
		int u,v;
		cin >> u >> v;
		g[u].pb(v);
	}
	vector<vector<int>> f(n+5,vector<int>(n+5,-1));
	FOR(i,1,n) {
		vector<bool> vs(n+5,false);
		queue<pair<int,int>> q;
		q.push({i,0});
		vs[i] = true;
		while(q.size()) {
			int u = q.front().fi;
			int cnt = q.front().se;
			q.pop();
			for(auto v:g[u]) {
				if(!vs[v]) {
					vs[v] = true;
					q.push({v,cnt+1});
					f[i][v] = cnt+1;
				}
			}
		}
	}
	int dem = 0,sum = 0;
	FOR(i,1,n) {
		FOR(j,1,n) {
			if(f[i][j] != -1) {
				dem++;
				sum += f[i][j];
			}
		}
	}
	printf("%.2lf\n",double(sum*1.0/dem));
}

int main(){
//    ios::sync_with_stdio(false);
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
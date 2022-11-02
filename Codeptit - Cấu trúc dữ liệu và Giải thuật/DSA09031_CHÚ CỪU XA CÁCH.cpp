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
#define maxn 100005

bool M[200][200][4] = {};

void solve() {
	int n,m,k;
	cin >> n >> k >> m;
	vector<pII> v(k+5);
	vector<vector<int>> f(n+5,vector<int>(n+5,-1));
	FOR(i,1,n) {
		FOR(j,1,n) f[i][j] = 0;
	}
	int _time = 1;
	FOR(i,1,m) {
		int u,v,x,y;
		cin >> u >> v >> x >> y;
		/*
			1
		4		2
			3
		*/
		if( u == x) {
			if( v > y ) swap(v,y);
			M[u][v][2] = 1;
			M[x][y][4] = 1;
		}
		else {
			if( u > x ) swap(u,x);
			M[u][v][3] = 1;
			M[x][y][1] = 1;
		}
	}
	FOR(i,1,k) {
		cin >> v[i].fi >> v[i].se;
	}
	FOR(i,1,n) {
		FOR(j,1,n) {
			if( f[i][j] == 0 ) {
				queue<pII> q;
				q.push({i,j});
				f[i][j] = _time;
				while(q.size()) {
					int x = q.front().fi, y = q.front().se;
					q.pop();
					if( f[x-1][y] == 0 && M[x][y][1] == 0) {
						q.push({x-1,y});
						f[x-1][y] = _time;
					}
					if( f[x+1][y] == 0 && M[x][y][3] == 0) {
						q.push({x+1,y});
						f[x+1][y] = _time;
					}
					if( f[x][y+1] == 0 && M[x][y][2] == 0) {
						q.push({x,y+1});
						f[x][y+1] = _time;
					}
					if( f[x][y-1] == 0 && M[x][y][4] == 0) {
						q.push({x,y-1});
						f[x][y-1] = _time;
					}
				}
				_time++;
			}
		}
	}
	int ans = 0;
	FOR(i,1,k) {
		FOR(j,i+1,k) {
			if( f[v[i].fi][v[i].se] != f[v[j].fi][v[j].se]) ans++;
		}
	}
	cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
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

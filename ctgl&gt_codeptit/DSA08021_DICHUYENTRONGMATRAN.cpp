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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

int m,n;
LL a[1005][1005];
LL cnt[1005][1005];

bool check(pII point) {
	return (point.fi >= 1 && point.fi <= m && point.se >= 1 && point.se <= n );
}
void bfs() {
	queue<pII> q;
	q.push({1,1});
	cnt[1][1] = 0;
	while(q.size()) {
		pII p = q.front(); q.pop();
	//	cout << p.fi << ' ' << p.se << endl;
		if( p.fi == m && p.se == n ) {
			cout << cnt[p.fi][p.se] << endl;
			return;
		}
		if( check({p.fi,p.se+a[p.fi][p.se]}) && cnt[p.fi][p.se] + 1 <= cnt[p.fi][p.se+a[p.fi][p.se]] ) {
			cnt[p.fi][p.se+a[p.fi][p.se]] = cnt[p.fi][p.se] + 1;
			q.push({p.fi,p.se+a[p.fi][p.se]});
		}
		if( check({p.fi+a[p.fi][p.se],p.se}) && cnt[p.fi][p.se] + 1 <= cnt[p.fi+a[p.fi][p.se]][p.se] ) {
			cnt[p.fi+a[p.fi][p.se]][p.se] = cnt[p.fi][p.se] + 1;
			q.push({p.fi+a[p.fi][p.se],p.se});
		}
	}
	cout << -1 << endl;
}

void solve() {
	cin >> m >> n;
	FOR(i,1,m) {
		FOR(j,1,n) {
			cnt[i][j] = Linf;
			cin >> a[i][j];
		}
	}
	bfs();
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

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

struct Node {
	int x,y,dem;
	Node(){}
	Node(int _x,int _y,int _dem) {
		x = _x , y = _y , dem = _dem;
	}
};

void solve() {
	int n,m;
	cin >> n >> m;
	int a[n+5][m+5] = {};
	queue<Node> q;
	FOR(i,1,n) {
		FOR(j,1,m) {
			cin >> a[i][j];
			if( a[i][j] == 2 ) {
				q.push(Node(i,j,0));
			}
		}
	}
	int ans = 0;
	while(q.size()) {
		Node top = q.front(); q.pop();
		ans = max(ans,top.dem);
		int x = top.x, y = top.y;
		if( a[x-1][y] == 1 ) {
			a[x-1][y] = 2;
			q.push(Node(x-1,y,top.dem+1));
		}
		if( a[x+1][y] == 1 ) {
			a[x+1][y] = 2;
			q.push(Node(x+1,y,top.dem+1));
		}
		if( a[x][y+1] == 1 ) {
			a[x][y+1] = 2;
			q.push(Node(x,y+1,top.dem+1));
		}
		if( a[x][y-1] == 1 ) {
			a[x][y-1] = 2;
			q.push(Node(x,y-1,top.dem+1));
		}
	}
	FOR(i,1,n) {
		FOR(j,1,m) {
			if( a[i][j] == 1 ) {
				cout << -1 << endl;
				return;
			}
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
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

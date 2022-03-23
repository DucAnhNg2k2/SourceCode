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

struct Node {
	int x,y,z,dem;
	Node(int _x,int _y,int _z,int _dem) {
		x = _x;
		y = _y;
		z = _z;
		dem = _dem;
	}
	Node() {

	}
};

int s[50][50][50] = {};

void solve() {
	FO(i,0,50) {
		FO(j,0,50) {
			FO(k,0,50) {
				s[i][j][k] = 0;
			}
		}
	}
	int A,B,C;
	cin >> A >> B >> C;
	int a,b,c;
	int _a,_b,_c;
	for(int z = 1; z <= A; z++ ) {
		for(int y = 1; y <= B; y++ ) {
			for(int x = 1; x <= C; x++ ) {
				char xx;
				cin >> xx;
				if( xx == 'S') {
					s[x][y][z] = 0;
					a = x,b = y,c = z;
				}
				else if( xx == '.') {
					s[x][y][z] = 1;
				}
				else if( xx == '#') {
					s[x][y][z] = 0;
				}
				else {
					s[x][y][z] = 1;
					_a = x, _b = y, _c = z;
				}
			}
		}
	}
	queue<Node> q;
	q.push(Node(a,b,c,0));
	while( !q.empty()) {
		Node top = q.front(); q.pop();
		int x = top.x , y = top.y , z = top.z, dem = top.dem;
		if( x == _a && y == _b && z == _c ) {
			cout << dem << endl;
			return;
		}
		if( s[x+1][y][z] == 1 ) {
			q.push(Node(x+1,y,z,dem+1));
			s[x+1][y][z] = 0;
		}
		if( s[x-1][y][z] == 1 ) {
			q.push(Node(x-1,y,z,dem+1));
			s[x-1][y][z] = 0;
		}
		if( s[x][y+1][z] == 1 ) {
			q.push(Node(x,y+1,z,dem+1));
			s[x][y+1][z] = 0;
		}
		if( s[x][y-1][z] == 1 ) {
			q.push(Node(x,y-1,z,dem+1));
			s[x][y-1][z] = 0;
		}
		if( s[x][y][z-1] == 1 ) {
			q.push(Node(x,y,z-1,dem+1));
			s[x][y][z-1] = 0;
		}
		if( s[x][y][z+1] == 1 ) {
			q.push(Node(x,y,z+1,dem+1));
			s[x][y][z+1] = 0;
		}
	}
	cout << -1 << endl;
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
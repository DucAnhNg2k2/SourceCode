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
#define maxn 1000005

bool vs[505][505][4];
char s[505][505];
int n,m,check;

// w = 0, a = 1, s = 2, d = 3.
void Try(int x,int y,int dem,char move) {
//	cout << x << ' ' << y << ' ' << dem << ' ' << move << endl;
	if( dem > 3 ) {
		return;
	}
	if( s[x][y] == 'T' ) {
		check = true;
	//	cout << dem << endl;
		return;
	}
	if( s[x-1][y] != '*' && vs[x][y][0] == false) {
		vs[x][y][0] = true; 
		if( move != 'w' ) {
			Try(x-1,y,dem+1,'w');
		}
		else {
			Try(x-1,y,dem,'w');
		}
		vs[x][y][0] = false;
	}
	if( s[x][y-1] != '*' && vs[x][y][1] == false) {
		vs[x][y][1] = true; 
		if( move != 'a' ) {
			Try(x,y-1,dem+1,'a');
		}
		else {
			Try(x,y-1,dem,'a');
		}
		vs[x][y][1] = false;
	}
	if( s[x+1][y] != '*' && vs[x][y][2] == false) {
		vs[x][y][2] = true; 
		if( move != 's' ) {
			Try(x+1,y,dem+1,'s');
		}
		else {
			Try(x+1,y,dem,'s');
		}
		vs[x][y][2] = false;
	}
	if( s[x][y+1] != '*' && vs[x][y][3] == false) {
		vs[x][y][3] = true; 
		if( move != 'd' ) {
			Try(x,y+1,dem+1,'d');
		}
		else {
			Try(x,y+1,dem,'d');
		}
		vs[x][y][3] = false;
	}
}

void solve() {
	check = false;
	cin >> n >> m;
	FOR(i,1,n) {
		FOR(j,1,m) {
			FOR(k,0,3) {
				vs[i][j][k] = false;
			}
		}
	}
	FOR(i,0,n+1) {
		FOR(j,0,m+1) {
			s[i][j] = '*';
		}
	}
	int x,y;
	FOR(i,1,n) {
		FOR(j,1,m) {
			cin >> s[i][j];
			if( s[i][j] == 'S' ) {
				x = i, y = j;
			}
		}
	}
	Try(x,y,0,'-');
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

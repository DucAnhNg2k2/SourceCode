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

LL n,a[500][500];
vector<string> v;

void Try(int x,int y,string s) {
	a[x][y] = 0;
	if( x == n && y == n ) {
		v.pb(s);
		return;
	}
	if( a[x+1][y] == 1 ) {
		a[x+1][y] = 0;
		s += 'D';
		Try(x+1,y,s);
		s.pop_back();
		a[x+1][y] = 1;
	}
	if( a[x][y-1] == 1 ) {
		a[x][y-1] = 0;
		s += 'L';
		Try(x,y-1,s);
		s.pop_back();
		a[x][y-1] = 1;
	}
	if( a[x][y+1] == 1 ) {
		a[x][y+1] = 0;	
		s += 'R';
		Try(x,y+1,s);
		s.pop_back();
		a[x][y+1] = 1;	
	}
	if( a[x-1][y] == 1 ) {
		a[x-1][y] = 0;
		s += 'U';
		Try(x-1,y,s);
		s.pop_back();
		a[x-1][y] = 1;
	}
}

void solve() {
	v.clear();
	FOR(i,0,100){
		FOR(j,0,100){
			a[i][j] = -1;
		}
	}
	cin >> n;
	FOR(i,1,n) {
		FOR(j,1,n) {
			cin >> a[i][j];
		}
	}
	Try(1,1,"");
	if( v.empty() ) cout << -1 << endl;
	else {
		sort(v.begin(),v.end());
		for(auto i: v) {
			cout << i << ' ';
		}
		cout << endl;
	}
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}


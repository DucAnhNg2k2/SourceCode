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

int k,m,n;
char a[105][105];
bool vs[105][105] = {};
pII mv[8] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

set<string> l;
vector<string> res;
void Try(int x,int y,string s) {
	if( x < 1 || x > m || y < 1 || y > n ) 
		return;
	if( l.find(s) != l.end() ) res.pb(s);
	for(int i = 0 ; i < 8 ; i++ ) {
		int X = x + mv[i].first , Y = y + mv[i].second;
		if( vs[X][Y] == false ) {
			vs[X][Y] = true;
			Try(X,Y,s + a[X][Y]);
			vs[X][Y] = false;
		}
	}
}

void solve() {

	cin >> k >> m >> n;
	res.clear();
	l.clear();
	FOR(i,1,k) {
		string s;
		cin >> s;	
		l.insert(s);
	}

	FOR(i,1,m) {
		FOR(j,1,n) {
			cin >> a[i][j];
		}
	}
	
	FOR(i,1,m) {
		FOR(j,1,n) {
			vs[i][j] = true;
			string s = "";
			s += a[i][j];
			Try(i,j,s);
			vs[i][j] = false;
		}
	}
	
	if( res.size() == 0 ) cout << -1;
	else for(auto i : res ) cout << i << ' ';
	cout << endl;
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


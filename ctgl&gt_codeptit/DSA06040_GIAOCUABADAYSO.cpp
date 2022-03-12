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
#define all(x) (x).begin(),(x).end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005

void solve() {
	int n,m,q;
	cin >> n >> m >> q;
	LL a[n+5],b[m+5],c[q+5];
	FOR(i,1,n) {
		 cin >> a[i];
	}
	FOR(i,1,m) {
		cin >> b[i];
	}
	FOR(i,1,q) {
		 cin >> c[i];
	}
	int pos1 = 1, pos2 = 1, pos3 = 1;
	vector<LL> v;
	while( pos1 <= n && pos2 <= m && pos3 <= q ) {
		if( a[pos1] == b[pos2] && b[pos2] == c[pos3] ) {
			v.pb(a[pos1]);
			pos1++;
			pos2++;
			pos3++;
			continue;
		}
		LL tmp = min(a[pos1],b[pos2]);
		tmp = min(tmp,c[pos3]);
		if( tmp == c[pos3] ) {
			pos3++;
		}
		else if( tmp == b[pos2] ) {
			pos2++;
		}
		else if( tmp == a[pos1] ){
			 pos1++;
		}
	}
	if( v.size() == 0 ) cout << -1;
	else {
		for(auto i : v) {
			cout << i << ' ';
		}
	}
	cout << endl;
}

int main() {
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

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


void solve() {
	int n,m;
	cin >> n >> m;
	LL a[n+5],b[m+5];
	LL d[10005] = {},f[10005] = {};
	FOR(i,1,n) {
		cin >> a[i];
	}
	FOR(i,1,m) {
		cin >> b[i];
		d[b[i]]++;
	}
	f[0] += d[0];
	FOR(i,1,10000) {
		f[i] = f[i-1];
		f[i] += d[i];
	}
	LL ans = 0;
	FOR(i,1,n) {
		LL dem = 0;
		if( a[i] == 0 ) {
			
		}
		else if( a[i] == 1 ) {
			dem += d[0];
		}
		else if( a[i] == 2 ) {
			dem += m;
			dem -= ( d[2] + d[3] + d[4]);
		}
		else if( a[i] == 3 ) {
			dem += m;
			dem -= d[3];
		}
		else {
			dem += m;
			dem -= f[a[i]];
			dem = dem + d[0] + d[1];
		}
		ans += dem;
	}
	cout << ans << endl;
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

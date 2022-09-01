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
const LL MOD = 2111992;
#define PI 3.141592653589793238;
#define maxn 100005


void solve() {
	LL n,k;
	cin >> n >> k;
	pLL s[n+5] = {};
	s[1].fi = s[1].se = 1;
	// first : C , Second : B
	FOR(i,2,n) {
		s[i].fi = s[i-1].fi + s[i-1].se;
		if( i-k-1 >= 1 ) {
			s[i].se = max(s[i-k-1].fi + s[i-k-1].se, s[i-k-1].fi+1);
		}
		else s[i].se = 1;
		s[i].fi %= MOD;
		s[i].se %= MOD;
	}
//	FOR(i,1,n) {
//		cout << s[i].fi << ' ' << s[i].se << endl;
//	}
	cout << (s[n].fi + s[n].se)%MOD;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}


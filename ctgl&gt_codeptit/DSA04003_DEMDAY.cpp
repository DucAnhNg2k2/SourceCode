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
#define maxn 100005

LL power(const LL &a,const LL &b,const LL &MOD) {
	if( b == 0 ) return 1;
	else if( b == 1 ) return a%MOD;
	else { 
		LL tmp = power(a,b/2,MOD)%MOD;
		if( b&1 ) return ( (tmp*tmp)%MOD * a )%MOD;
		else return (tmp*tmp)%MOD; 
	}
}

void solve() {
	LL n;
	cin >> n;
	cout << power(2,n-1,123456789) << endl;
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

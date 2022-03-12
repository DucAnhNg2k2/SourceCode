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
#define maxn 10000005

LL n,k,dem[93];

/*
	0
	1
	01
	101	
	01101
*/
int Try(int n,LL k) {
	if( n == 1 && k == 1 ) return 0;
	if( n == 2 && k == 1 ) return 1;
	if( n == 3 ) {
		if( k == 1 ) return 0;
		if( k == 2 ) return 1;
	}
	if( k <= dem[n-2] ) return Try(n-2,k);
	else return Try(n-1,k-dem[n-2]);
}

void solve() {
	cin >> n >> k;
	cout << Try(n,k) << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	dem[1] = dem[2] = 1;
	FOR(i,3,92) {
		dem[i] = dem[i-1] + dem[i-2];
	}
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}


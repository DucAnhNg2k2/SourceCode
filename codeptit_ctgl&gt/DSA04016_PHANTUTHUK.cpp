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

void solve() {
	LL n,m,k;
	cin >> n >> m >> k;
	LL a[n+5],b[m+5];
	FOR(i,1,n) cin >> a[i];
	FOR(i,1,m) cin >> b[i];
	LL c[n+m+5];
	int i = 1 , j = 1 , p = 1;
	while( i <= n && j <= m ) {
		if( a[i] < b[j] ) c[p++] = a[i++];
		else c[p++] = b[j++];
	}
	while( i <= n ) c[p++] = a[i++];
	while( j <= m ) c[p++] = b[j++];
	cout << c[k] << endl;
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

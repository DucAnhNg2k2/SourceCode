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

LL a[maxn];

int bs(int l,int r,LL x) {
	while( l < r ) {
		int m = (l+r)/2;
		if( a[m] < x ) l = m+1;
		else r = m;
	}
	return l;
}

void solve() {
	LL n,k,dem = 0;
	cin >> n >> k;
	FOR(i,1,n) {
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	FOR(i,1,n-1) {
		int pos = bs(i+1,n,a[i]+k);
		if( a[pos] - a[i] >= k ) pos--;
		dem += (pos-i);
	}
	cout << dem << endl;
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

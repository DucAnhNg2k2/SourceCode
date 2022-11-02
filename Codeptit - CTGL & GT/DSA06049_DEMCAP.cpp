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

int find(LL a[],int l,int r,LL x) {
	while( l < r ) {
		int m = (l+r)/2;
		if( a[m] >= x ) {
			r = m;
		}
		else l = m + 1;
	}
	return l;
}

void solve() {
	int n,k;
	cin >> n >> k;
	LL a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	LL dem = 0;
	FOR(i,1,n-1) {
		int pos = find(a,i+1,n,k+a[i]);
		if( a[pos] - a[i] >= k ) pos--;
		dem += pos-i;
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

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
#define maxn 10005

bool find(vector<LL>& a,int l,int r,LL x) {
	while( l <= r ) {
		int m = (l+r)/2;
		if( a[m] == x ) return true;
		else if( a[m] < x ) l = m+1;
		else r = m-1;
	}
	return false;
}
void solve() {
	LL n,k;
	cin >> n >> k;
	vector<LL> a(n+5),f(n+5,0);
	FOR(i,1,n) {
		cin >> a[i];
		f[i] = f[i-1] + a[i];
	}
	FOR(i,1,n) {
		if( f[i] >= k && find(f,0,i-1,f[i]-k)) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

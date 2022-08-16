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
#define maxn 100005

void solve() {
	int n;
	cin >> n;	
	vector<LL> a,b;
	FOR(i,1,n) {
		LL x;
		cin >> x;
		if( i&1 ) {
			a.pb(x);
		}
		else b.pb(x);
	}
	sort(all(a));
	sort(all(b),greater<LL>());
	int pos1 = 0,pos2 = 0;
	FOR(i,1,n) {
		if( i&1) {
			cout << a[pos1++] << ' ';
		}
		else {
			cout << b[pos2++] << ' ';
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
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

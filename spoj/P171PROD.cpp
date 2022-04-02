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
const double eps = 1e-6;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 1000005
 
pLL p[maxn];
 
bool cmp(pLL a,pLL b) {
	if( a.fi == b.fi ) return a.se < b.se;
	return a.fi < b.fi;
}
 
void solve() {
	int n , dem = 0;
	cin >> n;
	FOR(i,1,n) {
		cin >> p[i].fi >> p[i].se;
	}
	sort(p+1,p+1+n,cmp);
	pLL top = p[1];
	FOR(i,2,n) {
		if( p[i].se < top.se ) dem++;
		else {
			top = p[i];
		}
	}
	cout << dem << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
} 

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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	LL n;
	cin >> n;
	int num4 = inf,num7 = inf;
	for(LL i = 0 ; i*7 <= n; i++ ) {
		LL sub = n - i*7;
		if( sub%4 == 0 ) {
			int n4 = sub/4, n7 = i;
			if( n4+n7 < num4+num7) {
				num4 = n4, num7 = n7;
			}
			else if( n4+n7 == num4+num7 ) {
				if( num4 > n4 ) {
					num4 = n4, num7 = n7;
				}
			}
		}
	}
	if( num4 == inf ) cout << -1;
	else {
		FOR(i,1,num4) cout << 4;
		FOR(i,1,num7) cout << 7;
	}
	cout << endl;
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
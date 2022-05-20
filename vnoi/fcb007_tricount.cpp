#pragma GCC optimize("O2")
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
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int n;
	cin >> n;
	LL dem[5005] = {},f[5005] = {};
	FOR(i,1,n) {
		int x;
		cin >> x;
		dem[x]++;
	}
	FOR(i,1,5000) {
		f[i] = f[i-1] + dem[i];
	}
	LL ans = 0;
	for(int i = 1; i <= 1000; i++) {
		LL x = dem[i];
		ans += (x)*(x-1)*(x-2)/6;
		for(int j = i+1; j <= 1000; j++) {
			LL y = dem[j];
			if(i + i > j) {
				ans += ((x)*(x-1)/2)*y;
			}
			ans += ((y)*(y-1)/2)*x;
			int l = max(i,j)+1, r = i+j-1;
			ans += (x*y)*(f[r]-f[l-1]);
		}
	}
	cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
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
#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define LD long double
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
#define all(x) (x.begin(), x.end())
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

const int m = 30005;
void solve() {
	vector<vector<int>> a(m);
	int dp[m] = {};
	int n;
	cin >> n;
	FOR(i,1,n) {
		int x,y;
		cin >> x >> y;
		a[y].pb(x);
	}
	int ans = 0;
	FO(i,1,m) {
		dp[i] = dp[i-1];
		for(auto j : a[i] ) {	
			dp[i] = max(dp[j]+(i-j),dp[i]);
			ans = max(ans,dp[i]);
		}
	}
//	FOR(i,1,20) {
//		cout << i << ' ' << dp[i] << endl;
//	}
	cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while(T--)
    	solve();
    return 0;
}

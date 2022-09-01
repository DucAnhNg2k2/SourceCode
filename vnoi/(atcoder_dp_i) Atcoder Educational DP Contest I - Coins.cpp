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
#define maxn 805

void solve() {
    int n;
    cin >> n;
    double a[n+5], dp[n+5][n+5] = {};
    dp[0][1] = 0;
    dp[0][0] = 1;
    FOR(i,1,n) cin >> a[i];
    FOR(i,1,n) {
        FOR(j,0,n) {
            dp[i][j] = dp[i-1][j-1]*a[i] + dp[i-1][j]*(1-a[i]);
        }
    }
    double ans = 0;
    FOR(i,1,n) {
        int ngua = i, sap = n-i;
        if(ngua > sap) {
            ans += dp[n][ngua];
        }
    }
    printf("%.9lf",ans);
}

int main() {
//    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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